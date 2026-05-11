/*
 * XREFs of USBMidiInPipePrimer @ 0x1C00370E8
 * Callers:
 *     USBHwSelectStreamingMIDIInterface @ 0x1C003318C (USBHwSelectStreamingMIDIInterface.c)
 * Callees:
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C0035174 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBHwAllocateAndBag @ 0x1C00397EC (USBHwAllocateAndBag.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C003CE90 (USBMidiInInitializeUrbAndIrp.c)
 */

__int64 __fastcall USBMidiInPipePrimer(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  NTSTATUS v7; // esi
  __int64 v8; // r15
  unsigned int v9; // r10d
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // r8
  _QWORD *v14; // rcx
  void *v15; // rdx
  NTSTATUS v16; // eax
  __int64 v17; // r14
  unsigned __int8 *MIDIStreamingEndpointDescriptor; // rax
  int v19; // edi
  unsigned int v20; // r12d
  __int64 v21; // r14
  unsigned __int64 v22; // r8
  __int64 v23; // r15
  __int64 v24; // rdi
  PIRP Irp; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  _BYTE *v28; // r15
  __int64 v29; // r12
  unsigned int v30; // r15d
  unsigned int v31; // edi
  PIRP *v32; // r14
  NTSTATUS v33; // eax
  unsigned __int64 v34; // [rsp+20h] [rbp-48h]
  unsigned int v35; // [rsp+78h] [rbp+10h]
  int v36; // [rsp+80h] [rbp+18h]

  v7 = -1073741438;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  v9 = *(_DWORD *)(a2 + 32);
  if ( a3 >= v9 )
    return 3221225485LL;
  v11 = 0LL;
  v12 = 168LL * a3;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= v9 )
      return (unsigned int)v7;
    v13 = *(_QWORD *)(a2 + 40);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11) + 2LL) == *(_BYTE *)(v12 + v13 + 2) )
      break;
    v11 = (unsigned int)(v11 + 1);
  }
  *(_BYTE *)(v12 + v13 + 41) = 0;
  v7 = -1073741670;
  *(_BYTE *)(*(_QWORD *)(a2 + 40) + v12 + 72) = 0;
  *(_DWORD *)(*(_QWORD *)(a2 + 40) + v12 + 64) = 0;
  *(_DWORD *)(*(_QWORD *)(a2 + 40) + v12 + 68) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 40) + v12 + 40) = 0;
  KeInitializeEvent((PRKEVENT)(v12 + *(_QWORD *)(a2 + 40) + 136LL), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(v12 + *(_QWORD *)(a2 + 40) + 112LL), NotificationEvent, 0);
  KeInitializeSpinLock((PKSPIN_LOCK)(v12 + *(_QWORD *)(a2 + 40) + 104LL));
  v14 = (_QWORD *)(*(_QWORD *)(a2 + 40) + v12 + 80);
  v14[1] = v14;
  *v14 = v14;
  if ( !a4 )
  {
    _mm_lfence();
    v26 = *(_QWORD *)(a2 + 40);
    v19 = *(_DWORD *)(v12 + v26 + 24);
    v21 = *(_QWORD *)(v12 + v26 + 160);
    if ( 16 * v19 )
    {
      v27 = *(_QWORD *)(v12 + v26 + 160);
      v28 = (_BYTE *)(v21 + 48);
      v29 = (unsigned int)(16 * v19);
      do
      {
        *v28 = 0;
        USBMidiInInitializeUrbAndIrp(v27);
        v27 += 64LL;
        v28 += 64;
        --v29;
      }
      while ( v29 );
    }
    v7 = 0;
    goto LABEL_30;
  }
  *(_QWORD *)(v12 + *(_QWORD *)(a2 + 40) + 96) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 40));
  v15 = *(void **)(*(_QWORD *)(a2 + 40) + v12 + 96);
  if ( !v15 )
    return (unsigned int)v7;
  v16 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v15, (PFNKSFREE)IoFreeWorkItem);
  v17 = *(_QWORD *)(a2 + 40);
  v7 = v16;
  if ( v16 < 0 )
  {
    ExFreePool(*(PVOID *)(v17 + v12 + 96));
    return (unsigned int)v7;
  }
  MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(v8, a2, v11);
  if ( MIDIStreamingEndpointDescriptor )
  {
    *(_QWORD *)(v17 + v12 + 32) = MIDIStreamingEndpointDescriptor + 4;
    v19 = MIDIStreamingEndpointDescriptor[3];
  }
  else
  {
    *(_QWORD *)(v17 + v12 + 32) = 0LL;
    v19 = 0;
  }
  v7 = -1073741438;
  *(_DWORD *)(*(_QWORD *)(a2 + 40) + v12 + 24) = v19;
  if ( v19 )
  {
    v7 = USBHwAllocateAndBag(
           v12 + *(_QWORD *)(a2 + 40) + 160LL,
           16 * v19 * ((unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v12) + 192),
           64LL,
           *(_QWORD *)(a1 + 8));
    if ( v7 >= 0 )
    {
      _mm_lfence();
      v20 = 0;
      v21 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v12 + 160);
      v22 = v21 + ((unsigned __int64)(unsigned int)(16 * v19) << 6) + (unsigned int)(v19 << 11);
      v35 = 16 * v19;
      v34 = v22;
      if ( 16 * v19 )
      {
        v36 = v19;
        v23 = v21 + 48;
        v24 = v21 + ((unsigned __int64)(unsigned int)(16 * v19) << 6);
        do
        {
          if ( v7 < 0 )
            break;
          *(_QWORD *)(v23 - 32) = a1;
          *(_BYTE *)v23 = 0;
          *(_QWORD *)(v23 + 8) = v12 + *(_QWORD *)(a2 + 40);
          *(_QWORD *)(v23 - 16) = v24 + (v20 << 7);
          *(_QWORD *)(v23 - 8) = v22 + v20 * *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v12);
          Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
          *(_QWORD *)(v23 - 24) = Irp;
          if ( Irp )
          {
            v7 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
            if ( v7 < 0 )
              IoFreeIrp(*(PIRP *)(v23 - 24));
            else
              USBMidiInInitializeUrbAndIrp(v21 + ((unsigned __int64)v20 << 6));
          }
          else
          {
            v7 = -1073741670;
          }
          v22 = v34;
          ++v20;
          v23 += 64LL;
        }
        while ( v20 < v35 );
        v19 = v36;
      }
LABEL_30:
      if ( v21 )
      {
        v30 = 0;
        v31 = 16 * v19;
        if ( v31 )
        {
          v32 = (PIRP *)(v21 + 24);
          do
          {
            if ( v7 < 0 )
              break;
            _InterlockedIncrement((volatile signed __int32 *)(v12 + *(_QWORD *)(a2 + 40) + 64));
            v33 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), *v32);
            ++v30;
            v32 += 8;
            v7 = v33;
          }
          while ( v30 < v31 );
        }
      }
    }
  }
  return (unsigned int)v7;
}
