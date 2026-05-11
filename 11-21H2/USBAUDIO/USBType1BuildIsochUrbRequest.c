/*
 * XREFs of USBType1BuildIsochUrbRequest @ 0x1C0003EF0
 * Callers:
 *     USBType1Build1MsecIsocRequest @ 0x1C0003D80 (USBType1Build1MsecIsocRequest.c)
 *     USBType1ProcessStreamPointer @ 0x1C0005024 (USBType1ProcessStreamPointer.c)
 *     USBType1LockDelay @ 0x1C0039DC0 (USBType1LockDelay.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C0005C28 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0019680 (memmove.c)
 *     memset @ 0x1C0019940 (memset.c)
 */

__int64 __fastcall USBType1BuildIsochUrbRequest(PKSSTREAM_POINTER StreamPointer, __int64 (__fastcall *a2)())
{
  _SLIST_ENTRY **p_ListEntry; // rsi
  PKSSTREAM_POINTER v3; // r14
  char *Context; // r15
  __int64 (__fastcall *v5)(); // rdi
  char v6; // dl
  ULONG Remaining; // r13d
  bool v8; // r8
  _DWORD *v9; // rcx
  bool v10; // cf
  NTSTATUS v11; // eax
  unsigned int v12; // r12d
  _DWORD *v13; // rsi
  struct _SLIST_ENTRY *v14; // rbx
  unsigned int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(__int64, __int64, __int64); // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  struct _SLIST_ENTRY **v21; // rax
  __int64 v22; // rdi
  KSPIN_LOCK *v23; // rbx
  unsigned int v24; // edi
  __int64 v25; // r15
  ULONG v26; // r14d
  int v27; // r8d
  unsigned int v28; // ecx
  KIRQL v29; // dl
  PSLIST_ENTRY v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rsi
  KIRQL v33; // al
  _QWORD *v34; // rdx
  __int64 *v35; // rsi
  __int64 v36; // r8
  KIRQL v37; // al
  __int64 v38; // rdi
  void *v39; // rcx
  bool v40; // zf
  unsigned int v41; // r12d
  __int64 v42; // r13
  _SLIST_ENTRY *v43; // rax
  IRP *v44; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v46; // edx
  int v47; // r8d
  struct _IO_STACK_LOCATION *v48; // rax
  KIRQL v49; // al
  _SLIST_ENTRY *v50; // r8
  KIRQL v51; // al
  _DWORD *v52; // rdi
  _SLIST_ENTRY *v53; // rax
  __int64 v54; // rbx
  KIRQL v55; // al
  struct _KSPIN *v56; // rcx
  KIRQL v57; // di
  PKSGATE i; // rax
  int Timeout; // [rsp+20h] [rbp-79h]
  int v61; // [rsp+28h] [rbp-71h]
  int v62; // [rsp+30h] [rbp-69h]
  int v63; // [rsp+38h] [rbp-61h]
  _SLIST_ENTRY ListEntry; // [rsp+60h] [rbp-39h] BYREF
  NTSTATUS v65; // [rsp+70h] [rbp-29h]
  ULONG InUsed; // [rsp+74h] [rbp-25h]
  unsigned int v67; // [rsp+78h] [rbp-21h]
  PSLIST_ENTRY v68; // [rsp+80h] [rbp-19h]
  _DWORD *v69; // [rsp+88h] [rbp-11h]
  __int64 v70; // [rsp+90h] [rbp-9h]
  char *v71; // [rsp+98h] [rbp-1h]
  __int64 v72; // [rsp+A0h] [rbp+7h]
  PKSPIN Pin; // [rsp+A8h] [rbp+Fh]
  bool v76; // [rsp+110h] [rbp+77h]
  char v77; // [rsp+118h] [rbp+7Fh]

  p_ListEntry = (_SLIST_ENTRY **)&ListEntry;
  Pin = StreamPointer->Pin;
  v3 = StreamPointer;
  v76 = 0;
  Context = (char *)Pin->Context;
  v5 = a2;
  v6 = 0;
  v71 = Context;
  Remaining = StreamPointer->OffsetIn.Remaining;
  v8 = 0;
  v77 = 0;
  v9 = (_DWORD *)*((_QWORD *)Context + 19);
  v72 = *((_QWORD *)Context + 2);
  v69 = v9;
  v10 = ((v9[30] + v9[28]) & 0xFFFFC000) < 0xFA0000;
  v11 = 0;
  v65 = 0;
  v12 = v9[2] * (v9[29] + !v10);
  *((_QWORD *)&ListEntry.Next + 1) = &ListEntry;
  ListEntry.Next = &ListEntry;
  if ( Remaining < v12 )
    goto LABEL_34;
  while ( v11 >= 0 && !v6 )
  {
    v13 = v69;
    if ( v5 == USBType1MsCompleteCallback )
    {
      v14 = (struct _SLIST_ENTRY *)v3->Context;
      v15 = 1;
      v68 = (PSLIST_ENTRY)v3->Context;
    }
    else
    {
      v16 = *((_QWORD *)v69 + 16);
      ++*(_DWORD *)(v16 + 20);
      v68 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v16);
      v14 = v68;
      if ( !v68 )
      {
        v17 = *(unsigned int *)(v16 + 44);
        v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v16 + 48);
        v19 = *(unsigned int *)(v16 + 40);
        v20 = *(unsigned int *)(v16 + 36);
        ++*(_DWORD *)(v16 + 24);
        v14 = (struct _SLIST_ENTRY *)v18(v20, v17, v19);
        v68 = v14;
      }
      v5 = a2;
      v15 = 32;
      v11 = v65;
    }
    v67 = v15;
    if ( !v14 )
    {
LABEL_29:
      v8 = v76;
      goto LABEL_30;
    }
    v21 = (struct _SLIST_ENTRY **)*((_QWORD *)&ListEntry.Next + 1);
    v22 = *((_QWORD *)&v14[1].Next + 1);
    v70 = v22;
    if ( **((_SLIST_ENTRY ***)&ListEntry.Next + 1) != &ListEntry )
      goto LABEL_79;
    *((_QWORD *)&v14->Next + 1) = *((_QWORD *)&ListEntry.Next + 1);
    v14->Next = &ListEntry;
    *v21 = v14;
    *((_QWORD *)&ListEntry.Next + 1) = v14;
    memset((void *)v22, 0, 12LL * v15 + 152);
    *(_WORD *)(v22 + 2) = 10;
    *(_QWORD *)(v22 + 24) = *((_QWORD *)v13 + 8);
    *(_QWORD *)(v22 + 40) = v3->OffsetIn.Data;
    if ( *((_BYTE *)v13 + 96) )
      *(_DWORD *)(v22 + 128) = v13[226];
    else
      *(_DWORD *)(v22 + 32) = 4;
    v23 = (KSPIN_LOCK *)(Context + 112);
    v24 = 0;
    v25 = v70;
    v26 = 0;
    do
    {
      if ( Remaining < v12 || v77 )
        break;
      Remaining -= v12;
      *(_DWORD *)(v25 + 12LL * v24 + 140) = v26;
      v26 += v12;
      v27 = v13[30];
      v28 = (v27 + v13[28]) % 0xFA0000u;
      v13[28] = v28;
      v12 = v13[2] * (v13[29] + (((v27 + v28) & 0xFFFFC000) >= 0xFA0000));
      v29 = KeAcquireSpinLockRaiseToDpc(v23);
      if ( *((_BYTE *)v13 + 96) )
      {
        v40 = v13[227]-- == 1;
        if ( v40 )
        {
          v13[227] = v13[225];
          v77 = 1;
        }
        else
        {
          v77 = 0;
        }
        ++v13[226];
      }
      KeReleaseSpinLock(v23, v29);
      ++v24;
    }
    while ( v24 < v67 );
    v30 = v68;
    *(_DWORD *)(v25 + 132) = v24;
    *(_DWORD *)(v25 + 36) = v26;
    InUsed = v26;
    *(_WORD *)v25 = 12 * v24 + 152;
    v5 = a2;
    Context = v71;
    HIDWORD(v30[2].Next) = v26;
    v3 = StreamPointer;
    if ( a2 == USBType1MsCompleteCallback || (char *)a2 == (char *)&USBType1LockDelayCompleteCallback )
    {
      v31 = InUsed;
      v8 = v76;
      *((_QWORD *)&v30[2].Next + 1) = StreamPointer;
      StreamPointer->OffsetIn.Data += v31;
      StreamPointer->OffsetIn.Remaining -= v31;
    }
    else
    {
      *((_QWORD *)&v30[2].Next + 1) = 0LL;
      v11 = KsStreamPointerClone(StreamPointer, 0LL, 0, (PKSSTREAM_POINTER *)&v30[2].Next + 1);
      v65 = v11;
      if ( v11 < 0 )
        goto LABEL_29;
      v8 = KsStreamPointerAdvanceOffsets(StreamPointer, InUsed, 0, 0) == 0;
      v76 = v8;
    }
    v11 = v65;
LABEL_30:
    v6 = v77;
    if ( Remaining < v12 )
      goto LABEL_33;
  }
  v8 = v76;
LABEL_33:
  p_ListEntry = &ListEntry.Next->Next;
LABEL_34:
  if ( (char *)v5 == (char *)&USBType1LockDelayCompleteCallback )
    goto LABEL_48;
  if ( Remaining )
  {
    if ( !v6 )
    {
      v32 = *((_QWORD *)Context + 19);
      if ( v5 == USBType1MsCompleteCallback && Remaining == v3->OffsetIn.Count )
      {
        *(_DWORD *)(v32 + 124) = v12 - Remaining;
        v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        v34 = v3->Context;
        v35 = (__int64 *)(v32 + 136);
        v36 = *v35;
        if ( *(__int64 **)(*v35 + 8) != v35 )
LABEL_79:
          __fastfail(3u);
        *v34 = v36;
        v34[1] = v35;
        *(_QWORD *)(v36 + 8) = v34;
        *v35 = (__int64)v34;
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v33);
        ExFreePool(v3);
      }
      else
      {
        KeWaitForSingleObject((PVOID)(v32 + 152), Executive, 0, 0, 0LL);
        v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
        v38 = *(_QWORD *)(v32 + 136);
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v37);
        v39 = *(void **)(v38 + 48);
        *(_DWORD *)(v38 + 36) = Remaining;
        memmove(v39, v3->OffsetIn.Data, Remaining);
        *(_DWORD *)(v32 + 124) = v12 - Remaining;
        if ( a2 != USBType1MsCompleteCallback )
          KsStreamPointerAdvanceOffsetsAndUnlock(v3, Remaining, 0, 0);
      }
LABEL_47:
      p_ListEntry = &ListEntry.Next->Next;
      goto LABEL_48;
    }
    v40 = v5 == USBType1MsCompleteCallback;
  }
  else
  {
    v40 = !v8;
  }
  if ( !v40 )
  {
    KsStreamPointerUnlock(v3, 0);
    goto LABEL_47;
  }
LABEL_48:
  v41 = v65;
  v42 = v72;
  while ( p_ListEntry != (_SLIST_ENTRY **)&ListEntry )
  {
    if ( !p_ListEntry[5] )
    {
      v52 = v69;
      while ( p_ListEntry != (_SLIST_ENTRY **)&ListEntry )
      {
        if ( p_ListEntry[1] != &ListEntry )
          goto LABEL_79;
        v53 = *p_ListEntry;
        if ( *((_SLIST_ENTRY ***)&(*p_ListEntry)->Next + 1) != p_ListEntry )
          goto LABEL_79;
        ListEntry.Next = *p_ListEntry;
        *((_QWORD *)&v53->Next + 1) = &ListEntry;
        v54 = *((_QWORD *)v52 + 16);
        ++*(_DWORD *)(v54 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v54) < *(_WORD *)(v54 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v54, (PSLIST_ENTRY)p_ListEntry);
        }
        else
        {
          ++*(_DWORD *)(v54 + 32);
          (*(void (__fastcall **)(_SLIST_ENTRY **))(v54 + 56))(p_ListEntry);
        }
        p_ListEntry = &ListEntry.Next->Next;
      }
      break;
    }
    if ( p_ListEntry[1] != &ListEntry )
      goto LABEL_79;
    v43 = *p_ListEntry;
    if ( *((_SLIST_ENTRY ***)&(*p_ListEntry)->Next + 1) != p_ListEntry )
      goto LABEL_79;
    ListEntry.Next = *p_ListEntry;
    *((_QWORD *)&v43->Next + 1) = &ListEntry;
    v44 = (IRP *)p_ListEntry[2];
    CurrentStackLocation = v44->Tail.Overlay.CurrentStackLocation;
    IoInitializeIrp(v44, 72 * *(char *)(*(_QWORD *)(v42 + 40) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v42 + 40) + 76LL));
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)p_ListEntry[3];
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
    v48 = v44->Tail.Overlay.CurrentStackLocation;
    v48[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)a2;
    v48[-1].Context = p_ListEntry;
    v48[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)Context + 14);
    if ( (char *)a2 != (char *)&USBType1LockDelayCompleteCallback )
    {
      v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      *((_QWORD *)Context + 10) += *((unsigned int *)p_ListEntry + 9);
      v50 = (_SLIST_ENTRY *)*((_QWORD *)Context + 9);
      if ( (char *)v50->Next != Context + 64 )
        goto LABEL_79;
      *p_ListEntry = (_SLIST_ENTRY *)(Context + 64);
      p_ListEntry[1] = v50;
      v50->Next = (struct _SLIST_ENTRY *)p_ListEntry;
      *((_QWORD *)Context + 9) = p_ListEntry;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v49);
    }
    LOBYTE(v46) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (LOBYTE(v47) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v47) = 0;
    }
    if ( (_BYTE)v46 || (_BYTE)v47 )
      WPP_RECORDER_AND_TRACE_SF_qqd(
        WPP_GLOBAL_Control->AttachedDevice,
        v46,
        v47,
        WPP_GLOBAL_Control->DeviceExtension,
        Timeout,
        v61,
        v62,
        v63,
        (char)p_ListEntry,
        (char)v3,
        *((_DWORD *)Context + 14));
    if ( IofCallDriver(*(PDEVICE_OBJECT *)(v42 + 40), (PIRP)p_ListEntry[2]) >= 0
      && (char *)a2 != (char *)&USBType1LockDelayCompleteCallback )
    {
      v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
      Context[45] = 1;
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v51);
    }
    p_ListEntry = &ListEntry.Next->Next;
    v41 = 0;
  }
  if ( v77 )
  {
    v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    v56 = Pin;
    v57 = v55;
    Context[44] = 1;
    for ( i = KsPinGetAndGate(v56); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
      ;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v57);
  }
  return v41;
}
