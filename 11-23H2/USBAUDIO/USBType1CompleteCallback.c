/*
 * XREFs of USBType1CompleteCallback @ 0x1C0003930
 * Callers:
 *     <none>
 * Callees:
 *     USBHwResetFrameTimestamps @ 0x1C0003D04 (USBHwResetFrameTimestamps.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqd @ 0x1C000AFB0 (WPP_RECORDER_AND_TRACE_SF_qqqd.c)
 */

__int64 __fastcall USBType1CompleteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KSSTREAM_POINTER *v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // r14
  NTSTATUS v6; // ebp
  int v7; // r12d
  char *Context; // rdi
  __int64 v9; // rsi
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  KIRQL v14; // r15
  _QWORD *v15; // rcx
  void **v16; // rax
  int v17; // edx
  int v18; // r8d
  PDEVICE_OBJECT v20; // rcx

  v3 = *(struct _KSSTREAM_POINTER **)(a3 + 40);
  v4 = (_QWORD *)a3;
  v5 = *(_QWORD *)(a3 + 24);
  v6 = *(_DWORD *)(a2 + 48);
  v7 = 0;
  Context = (char *)v3->Pin->Context;
  v9 = *((_QWORD *)Context + 19);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(a3) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_qqqd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  v10 = (KSPIN_LOCK *)(Context + 112);
  if ( *(int *)(v5 + 4) < 0 )
  {
    v6 = -1073741668;
    v14 = KeAcquireSpinLockRaiseToDpc(v10);
  }
  else
  {
    v14 = KeAcquireSpinLockRaiseToDpc(v10);
    if ( v6 >= 0 )
      goto LABEL_9;
  }
  *(_BYTE *)v9 = 1;
  Context[45] = 0;
LABEL_9:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 14, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v12) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v11 || (_BYTE)v12 )
      WPP_RECORDER_AND_TRACE_SF_qqqd(WPP_GLOBAL_Control->AttachedDevice, v11, v12, WPP_GLOBAL_Control->DeviceExtension);
    v7 = 1;
    *(_BYTE *)v9 = 1;
    Context[45] = 0;
    USBHwResetFrameTimestamps(Context, v11, v12, v13);
    KeSetEvent((PRKEVENT)Context + 5, 0, 0);
  }
  *((_QWORD *)Context + 11) += *((unsigned int *)v4 + 9);
  v15 = (_QWORD *)*v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v16 = (void **)v4[1], *v16 != v4) )
    __fastfail(3u);
  *v16 = v15;
  v15[1] = v16;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v14);
  ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v9 + 128), v4);
  if ( v7 )
  {
    if ( !*(_BYTE *)(v9 + 98) && !*(_BYTE *)(v9 + 97) )
    {
      *(_BYTE *)(v9 + 97) = 1;
      v20 = WPP_GLOBAL_Control;
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v18) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      if ( (_BYTE)v17 || (_BYTE)v18 )
        goto LABEL_63;
    }
  }
  else if ( *(_BYTE *)(v9 + 97) )
  {
    *(_BYTE *)(v9 + 97) = 0;
    v20 = WPP_GLOBAL_Control;
    LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v18) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v17 || (_BYTE)v18 )
LABEL_63:
      WPP_RECORDER_AND_TRACE_SF_(v20->AttachedDevice, v17, v18, v20->DeviceExtension);
  }
  *(_BYTE *)(v9 + 98) = 0;
  if ( v6 < 0 )
    KsStreamPointerSetStatusCode(v3, v6);
  KsStreamPointerDelete(v3);
  return 3221225494LL;
}
