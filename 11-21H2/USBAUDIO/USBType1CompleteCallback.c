/*
 * XREFs of USBType1CompleteCallback @ 0x1C00048D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1C0005D1C (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall USBType1CompleteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  struct _SLIST_ENTRY *v4; // r14
  NTSTATUS v5; // r12d
  int v6; // r15d
  PVOID Context; // rdi
  __int64 v8; // rsi
  char v9; // bl
  int v10; // edx
  int v11; // r8d
  KIRQL v12; // r13
  __int64 v13; // rax
  struct _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY **v15; // rax
  __int64 v16; // rdi
  PDEVICE_OBJECT v17; // rcx
  char v18; // dl
  unsigned __int16 v19; // r8
  int v21; // [rsp+20h] [rbp-68h]
  PKSSTREAM_POINTER StreamPointer; // [rsp+98h] [rbp+10h]

  v3 = *(_QWORD *)(a3 + 24);
  v4 = (struct _SLIST_ENTRY *)a3;
  v5 = *(_DWORD *)(a2 + 48);
  StreamPointer = *(PKSSTREAM_POINTER *)(a3 + 40);
  v6 = 0;
  Context = StreamPointer->Pin->Context;
  v8 = *((_QWORD *)Context + 19);
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_qqqd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  if ( *(int *)(v3 + 4) < 0 )
    v5 = -1073741668;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
  if ( v5 < 0 )
  {
    *(_BYTE *)v8 = 1;
    *((_BYTE *)Context + 45) = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 14, 0xFFFFFFFF) == 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v10 || (_BYTE)v11 )
      WPP_RECORDER_AND_TRACE_SF_qqqd(WPP_GLOBAL_Control->AttachedDevice, v10, v11, WPP_GLOBAL_Control->DeviceExtension);
    *(_BYTE *)v8 = 1;
    v6 = 1;
    v13 = *((_QWORD *)Context + 19);
    *((_BYTE *)Context + 45) = 0;
    if ( !*(_BYTE *)(v13 + 12) )
    {
      *(_DWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0LL;
      *(_DWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 48) = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
    }
    KeSetEvent((PRKEVENT)Context + 5, 0, 0);
  }
  *((_QWORD *)Context + 11) += HIDWORD(v4[2].Next);
  Next = v4->Next;
  if ( *(&v4->Next->Next + 1) != v4 || (v15 = (struct _SLIST_ENTRY **)*((_QWORD *)&v4->Next + 1), *v15 != v4) )
    __fastfail(3u);
  *v15 = Next;
  *((_QWORD *)&Next->Next + 1) = v15;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v12);
  v16 = *(_QWORD *)(v8 + 128);
  ++*(_DWORD *)(v16 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v16) < *(_WORD *)(v16 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v16, v4);
  }
  else
  {
    ++*(_DWORD *)(v16 + 32);
    (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v16 + 56))(v4);
  }
  if ( v6 )
  {
    if ( !*(_BYTE *)(v8 + 98) && !*(_BYTE *)(v8 + 97) )
    {
      *(_BYTE *)(v8 + 97) = 1;
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v18 = 0;
      }
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v9 = 0;
      if ( v18 || v9 )
      {
        v19 = 16;
LABEL_58:
        WPP_RECORDER_AND_TRACE_SF_(
          (__int64)v17->AttachedDevice,
          v18,
          v9,
          (__int64)v17->DeviceExtension,
          v21,
          4u,
          v19,
          (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
      }
    }
  }
  else if ( *(_BYTE *)(v8 + 97) )
  {
    *(_BYTE *)(v8 + 97) = 0;
    v17 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v18 = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( v18 || v9 )
    {
      v19 = 17;
      goto LABEL_58;
    }
  }
  *(_BYTE *)(v8 + 98) = 0;
  if ( v5 < 0 )
    KsStreamPointerSetStatusCode(StreamPointer, v5);
  KsStreamPointerDelete(StreamPointer);
  return 3221225494LL;
}
