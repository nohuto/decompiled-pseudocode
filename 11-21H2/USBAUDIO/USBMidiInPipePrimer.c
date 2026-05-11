/*
 * XREFs of USBMidiInPipePrimer @ 0x1C003B104
 * Callers:
 *     USBHwSelectStreamingMIDIInterface @ 0x1C0035458 (USBHwSelectStreamingMIDIInterface.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x1C0033484 (USBHwAllocateAndBag.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C00376E8 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C003B010 (USBMidiInInitializeUrbAndIrp.c)
 */

__int64 __fastcall USBMidiInPipePrimer(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // edx
  int v8; // edi
  unsigned __int16 *v9; // r15
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  void *v16; // rdx
  NTSTATUS v17; // eax
  __int64 v18; // r14
  PUSB_COMMON_DESCRIPTOR MIDIStreamingEndpointDescriptor; // rax
  int bDescriptorType; // r14d
  unsigned int v21; // r12d
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // r15d
  __int64 v26; // r14
  PIRP Irp; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  _BYTE *v30; // r14
  __int64 v31; // r12
  unsigned int v32; // r14d
  PIRP *v33; // rbp
  NTSTATUS v34; // eax
  __int64 v35; // [rsp+60h] [rbp+8h]
  __int64 v36; // [rsp+68h] [rbp+10h]

  v5 = *(_DWORD *)(a2 + 32);
  v8 = -1073741438;
  v9 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  if ( a3 >= v5 )
    return 3221225485LL;
  v11 = 0LL;
  if ( v5 )
  {
    v12 = a3;
    v13 = *(_QWORD *)(a2 + 40);
    v14 = 168 * v12;
    while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11) + 2LL) != *(_BYTE *)(v13 + 168 * v12 + 2) )
    {
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v5 )
        return (unsigned int)v8;
    }
    *(_BYTE *)(v13 + v14 + 41) = 0;
    v8 = -1073741670;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v14 + 72) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v14 + 64) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v14 + 68) = 0;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v14 + 40) = 0;
    KeInitializeEvent((PRKEVENT)(v14 + *(_QWORD *)(a2 + 40) + 136LL), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v14 + *(_QWORD *)(a2 + 40) + 112LL), NotificationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)(v14 + *(_QWORD *)(a2 + 40) + 104LL));
    v15 = (_QWORD *)(*(_QWORD *)(a2 + 40) + v14 + 80);
    v15[1] = v15;
    *v15 = v15;
    if ( !a4 )
    {
      _mm_lfence();
      v28 = *(_QWORD *)(a2 + 40);
      v22 = *(_QWORD *)(v28 + v14 + 160);
      v25 = 16 * *(_DWORD *)(v28 + v14 + 24);
      if ( v25 )
      {
        v29 = *(_QWORD *)(v28 + v14 + 160);
        v30 = (_BYTE *)(v22 + 48);
        v31 = v25;
        do
        {
          *v30 = 0;
          USBMidiInInitializeUrbAndIrp(v29);
          v29 += 64LL;
          v30 += 64;
          --v31;
        }
        while ( v31 );
      }
      v8 = 0;
      goto LABEL_31;
    }
    *(_QWORD *)(*(_QWORD *)(a2 + 40) + v14 + 96) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 40));
    v16 = *(void **)(*(_QWORD *)(a2 + 40) + v14 + 96);
    if ( v16 )
    {
      v17 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v16, (PFNKSFREE)IoFreeWorkItem);
      v18 = *(_QWORD *)(a2 + 40);
      v8 = v17;
      if ( v17 < 0 )
      {
        ExFreePool(*(PVOID *)(v14 + v18 + 96));
      }
      else
      {
        MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(v9, a2, v11);
        if ( MIDIStreamingEndpointDescriptor )
        {
          *(_QWORD *)(v14 + v18 + 32) = MIDIStreamingEndpointDescriptor + 2;
          bDescriptorType = MIDIStreamingEndpointDescriptor[1].bDescriptorType;
        }
        else
        {
          *(_QWORD *)(v14 + v18 + 32) = 0LL;
          bDescriptorType = 0;
        }
        v8 = -1073741438;
        *(_DWORD *)(*(_QWORD *)(a2 + 40) + v14 + 24) = bDescriptorType;
        if ( bDescriptorType )
        {
          v8 = USBHwAllocateAndBag(
                 (PVOID *)(v14 + *(_QWORD *)(a2 + 40) + 160LL),
                 16 * bDescriptorType * ((unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v14) + 192),
                 64LL,
                 *(void **)(a1 + 8));
          if ( v8 >= 0 )
          {
            _mm_lfence();
            v21 = 0;
            v22 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v14 + 160);
            v23 = v22 + ((unsigned __int64)(unsigned int)(16 * bDescriptorType) << 6);
            v24 = v23 + (unsigned int)(bDescriptorType << 11);
            v25 = 16 * bDescriptorType;
            v35 = v23;
            v36 = v24;
            if ( 16 * bDescriptorType )
            {
              v26 = v22 + 48;
              do
              {
                if ( v8 < 0 )
                  break;
                *(_QWORD *)(v26 - 32) = a1;
                *(_BYTE *)v26 = 0;
                *(_QWORD *)(v26 + 8) = v14 + *(_QWORD *)(a2 + 40);
                *(_QWORD *)(v26 - 16) = v23 + (v21 << 7);
                *(_QWORD *)(v26 - 8) = v24 + v21 * *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v14);
                Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
                *(_QWORD *)(v26 - 24) = Irp;
                if ( Irp )
                {
                  v8 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
                  if ( v8 < 0 )
                    IoFreeIrp(*(PIRP *)(v26 - 24));
                  else
                    USBMidiInInitializeUrbAndIrp(v22 + ((unsigned __int64)v21 << 6));
                }
                else
                {
                  v8 = -1073741670;
                }
                v23 = v35;
                ++v21;
                v24 = v36;
                v26 += 64LL;
              }
              while ( v21 < v25 );
            }
LABEL_31:
            if ( v22 )
            {
              v32 = 0;
              if ( v25 )
              {
                v33 = (PIRP *)(v22 + 24);
                do
                {
                  if ( v8 < 0 )
                    break;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 40) + v14 + 64));
                  v34 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), *v33);
                  ++v32;
                  v33 += 8;
                  v8 = v34;
                }
                while ( v32 < v25 );
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v8;
}
