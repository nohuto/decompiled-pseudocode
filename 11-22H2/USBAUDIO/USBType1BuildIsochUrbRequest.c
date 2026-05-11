/*
 * XREFs of USBType1BuildIsochUrbRequest @ 0x1C0002900
 * Callers:
 *     USBType1ProcessStreamPointer @ 0x1C00026C0 (USBType1ProcessStreamPointer.c)
 *     USBType1LockDelay @ 0x1C003D82C (USBType1LockDelay.c)
 * Callees:
 *     USBType1SaveLeftovers @ 0x1C0003010 (USBType1SaveLeftovers.c)
 *     KsGateTurnInputOff @ 0x1C0003F40 (KsGateTurnInputOff.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C000AEBC (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     memset @ 0x1C001AF80 (memset.c)
 */

__int64 __fastcall USBType1BuildIsochUrbRequest(PKSSTREAM_POINTER StreamPointer, __int64 (__fastcall *a2)())
{
  _QWORD *v2; // rbx
  PKSSTREAM_POINTER v3; // r10
  __int64 (__fastcall *v4)(); // rbp
  char *Context; // r14
  bool v6; // dl
  bool v7; // cl
  char v8; // r13
  ULONG Remaining; // esi
  __int64 v10; // r15
  int v11; // r12d
  unsigned int v12; // edi
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  unsigned int v15; // r12d
  _QWORD *v16; // rax
  _WORD *v17; // rcx
  _WORD *v18; // rdx
  __int64 v19; // rbx
  ULONG v20; // ebp
  int v21; // r8d
  unsigned int v22; // ecx
  KIRQL v23; // dl
  NTSTATUS v24; // eax
  __int64 v25; // rax
  IRP *v26; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v28; // edx
  int v29; // r8d
  struct _IO_STACK_LOCATION *v30; // rax
  KIRQL v31; // al
  PVOID *v32; // r8
  KIRQL v34; // al
  int v36; // eax
  __int64 v37; // rax
  KIRQL v38; // bl
  struct _KSGATE *v39; // rax
  int v40; // [rsp+20h] [rbp-C8h]
  int v41; // [rsp+28h] [rbp-C0h]
  int v42; // [rsp+30h] [rbp-B8h]
  int v43; // [rsp+38h] [rbp-B0h]
  NTSTATUS v44; // [rsp+60h] [rbp-88h]
  _WORD *v45; // [rsp+68h] [rbp-80h]
  _QWORD *v46; // [rsp+70h] [rbp-78h]
  __int64 v47; // [rsp+78h] [rbp-70h]
  PKSPIN Pin; // [rsp+80h] [rbp-68h]
  _QWORD *v49; // [rsp+88h] [rbp-60h] BYREF
  _QWORD **v50; // [rsp+90h] [rbp-58h]
  bool v53; // [rsp+100h] [rbp+18h]
  bool v54; // [rsp+108h] [rbp+20h]

  Pin = StreamPointer->Pin;
  v2 = &v49;
  v3 = StreamPointer;
  v4 = a2;
  Context = (char *)Pin->Context;
  v6 = a2 == USBType1MsCompleteCallback;
  v54 = v6;
  v7 = 0;
  v8 = 0;
  Remaining = v3->OffsetIn.Remaining;
  v10 = *((_QWORD *)Context + 19);
  v47 = *((_QWORD *)Context + 2);
  v53 = 0;
  v11 = 0;
  v12 = *(_DWORD *)(v10 + 8)
      * (*(_DWORD *)(v10 + 116) + (((*(_DWORD *)(v10 + 120) + *(_DWORD *)(v10 + 112)) & 0xFFFFC000) >= 0xFA0000));
  v44 = 0;
  v50 = &v49;
  v49 = &v49;
  if ( Remaining < v12 )
    goto LABEL_21;
  while ( v11 >= 0 && !v8 )
  {
    if ( v4 == USBType1MsCompleteCallback )
    {
      v14 = v3->Context;
      v15 = 1;
    }
    else
    {
      v13 = ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v10 + 128));
      v3 = StreamPointer;
      v14 = v13;
      v15 = 32;
    }
    v46 = v14;
    if ( !v14 )
      goto LABEL_56;
    v16 = v50;
    v17 = (_WORD *)v14[3];
    v45 = v17;
    if ( *v50 != &v49 )
LABEL_70:
      __fastfail(3u);
    v14[1] = v50;
    *v14 = &v49;
    *v16 = v14;
    v50 = (_QWORD **)v14;
    memset(v17, 0, 12LL * v15 + 152);
    v18 = v45;
    v45[1] = 10;
    *((_QWORD *)v45 + 3) = *(_QWORD *)(v10 + 64);
    *((_QWORD *)v45 + 5) = StreamPointer->OffsetIn.Data;
    if ( *(_BYTE *)(v10 + 96) )
      *((_DWORD *)v45 + 32) = *(_DWORD *)(v10 + 904);
    else
      *((_DWORD *)v45 + 8) = 4;
    v19 = 0LL;
    v20 = 0;
    do
    {
      if ( Remaining < v12 || v8 )
        break;
      Remaining -= v12;
      *(_DWORD *)&v18[6 * v19 + 70] = v20;
      v20 += v12;
      v21 = *(_DWORD *)(v10 + 120);
      v22 = (v21 + *(_DWORD *)(v10 + 112)) % 0xFA0000u;
      *(_DWORD *)(v10 + 112) = v22;
      v12 = *(_DWORD *)(v10 + 8) * (*(_DWORD *)(v10 + 116) + (((v21 + v22) & 0xFFFFC000) >= 0xFA0000));
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      if ( *(_BYTE *)(v10 + 96) )
      {
        if ( (*(_DWORD *)(v10 + 908))-- == 1 )
        {
          v36 = *(_DWORD *)(v10 + 900);
          v8 = 1;
          ++*(_DWORD *)(v10 + 904);
          *(_DWORD *)(v10 + 908) = v36;
        }
        else
        {
          v8 = 0;
          ++*(_DWORD *)(v10 + 904);
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v23);
      v18 = v45;
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < v15 );
    *((_DWORD *)v18 + 33) = v19;
    *((_DWORD *)v18 + 9) = v20;
    *v18 = 12 * v19 + 152;
    *((_DWORD *)v46 + 9) = v20;
    if ( a2 == USBType1MsCompleteCallback || (char *)a2 == (char *)&USBType1LockDelayCompleteCallback )
    {
      v3 = StreamPointer;
      v46[5] = StreamPointer;
      StreamPointer->OffsetIn.Data += v20;
      StreamPointer->OffsetIn.Remaining -= v20;
      v4 = a2;
LABEL_56:
      v11 = v44;
LABEL_57:
      v7 = v53;
      goto LABEL_19;
    }
    v46[5] = 0LL;
    v44 = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)v46 + 5);
    v11 = v44;
    if ( v44 < 0 )
    {
      v4 = a2;
      v3 = StreamPointer;
      goto LABEL_57;
    }
    v24 = KsStreamPointerAdvanceOffsets(StreamPointer, v20, 0, 0);
    v4 = a2;
    v3 = StreamPointer;
    v7 = v24 == 0;
    v53 = v24 == 0;
LABEL_19:
    if ( Remaining < v12 )
      goto LABEL_20;
  }
  v7 = v53;
LABEL_20:
  v2 = v49;
  v6 = v54;
LABEL_21:
  if ( (char *)v4 != (char *)&USBType1LockDelayCompleteCallback )
  {
    if ( Remaining )
    {
      if ( !v8 )
      {
        LOBYTE(v40) = v6;
        USBType1SaveLeftovers(Context, v3, Remaining, v12);
        v2 = v49;
        goto LABEL_22;
      }
      if ( v4 == USBType1MsCompleteCallback )
        goto LABEL_22;
    }
    else if ( !v7 )
    {
      goto LABEL_22;
    }
    KsStreamPointerUnlock(v3, 0);
    goto LABEL_37;
  }
LABEL_22:
  while ( v2 != &v49 && v2[5] )
  {
    if ( (_QWORD **)v2[1] != &v49 )
      goto LABEL_70;
    v25 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 )
      goto LABEL_70;
    v49 = (_QWORD *)*v2;
    *(_QWORD *)(v25 + 8) = &v49;
    v26 = (IRP *)v2[2];
    CurrentStackLocation = v26->Tail.Overlay.CurrentStackLocation;
    IoInitializeIrp(v26, 72 * *(char *)(*(_QWORD *)(v47 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v47 + 40) + 76LL));
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = v2[3];
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v30 = v26->Tail.Overlay.CurrentStackLocation;
    v30[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)v4;
    v30[-1].Context = v2;
    v30[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)Context + 14);
    if ( (char *)v4 != (char *)&USBType1LockDelayCompleteCallback )
    {
      v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      *((_QWORD *)Context + 10) += *((unsigned int *)v2 + 9);
      v32 = (PVOID *)*((_QWORD *)Context + 9);
      if ( *v32 != Context + 64 )
        goto LABEL_70;
      *v2 = Context + 64;
      v2[1] = v32;
      *v32 = v2;
      *((_QWORD *)Context + 9) = v2;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v31);
    }
    LOBYTE(v28) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v29) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v28 || (_BYTE)v29 )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        v28,
        v29,
        WPP_GLOBAL_Control->DeviceExtension,
        v40,
        v41,
        v42,
        v43,
        (char)v2,
        (char)StreamPointer,
        *((_DWORD *)Context + 14));
    if ( IofCallDriver(*(PDEVICE_OBJECT *)(v47 + 40), (PIRP)v2[2]) >= 0
      && (char *)v4 != (char *)&USBType1LockDelayCompleteCallback )
    {
      v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      Context[45] = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v34);
    }
    v11 = 0;
LABEL_37:
    v2 = v49;
  }
  while ( v2 != &v49 )
  {
    if ( (_QWORD **)v2[1] != &v49 )
      goto LABEL_70;
    v37 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 )
      goto LABEL_70;
    v49 = (_QWORD *)*v2;
    *(_QWORD *)(v37 + 8) = &v49;
    ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v10 + 128), v2);
    v2 = v49;
  }
  if ( v8 )
  {
    v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    Context[44] = 1;
    v39 = KsPinGetAndGate(Pin);
    KsGateTurnInputOff(v39);
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v38);
  }
  return (unsigned int)v11;
}
