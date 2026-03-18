/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1C000E160
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000D460 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C000E630 (VidSchiProcessDpcDmaPacket.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BB8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001DA94 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C002DAA8 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C003AF64 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00416B4 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C0045440 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C00454A8 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0045DA4 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C004992C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 */

__int64 __fastcall VidSchDdiNotifyDpc(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 DxgAdapter; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  union _SLIST_HEADER *v9; // rdi
  PSLIST_ENTRY v10; // rax
  _QWORD *p_Next; // rcx
  int v12; // r15d
  unsigned int v13; // ecx
  struct _SLIST_ENTRY *v14; // r14
  struct _VIDSCH_VSYNC_COOKIE *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _SLIST_ENTRY *Next; // rbp
  unsigned int v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+30h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF

  v3 = 0LL;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v22 = 1;
    v20 = 5043;
    if ( byte_1C0076981 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 5043LL);
  }
  else
  {
    v22 = 0;
  }
  DxgCoreInterface[79]((ADAPTER_DISPLAY *)&v20, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)5043);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    DxgAdapter = DpiGetDxgAdapter(a1);
    v6 = DxgAdapter;
    if ( DxgAdapter )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2928) + 744LL);
      if ( v7 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1752), &LockHandle);
        v8 = *(_QWORD *)(v6 + 2928);
        v9 = *(union _SLIST_HEADER **)(v8 + 744);
        v10 = ExpInterlockedFlushSList(v9 + 111);
        if ( v10 )
        {
          do
          {
            p_Next = &v10->Next;
            v10 = v10->Next;
            *p_Next = v3;
            v3 = p_Next;
          }
          while ( v10 );
          v12 = 263304;
          do
          {
            v13 = *((_DWORD *)v3 - 4);
            v14 = (struct _SLIST_ENTRY *)(v3 - 2);
            v3 = (_QWORD *)*v3;
            if ( ((v13 - 1) & 0xFFFFFFF6) != 0 || v13 == 10 )
            {
              switch ( v13 )
              {
                case 0xBu:
                  VidSchiProcessMonitoredFenceSignaledDpc(v14);
                  break;
                case 0xFu:
                  Next = v14[2].Next;
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[378], v14);
                  if ( (byte_1C0076983 & 2) != 0 )
                    VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)Next);
                  break;
                case 0x10u:
                  VidSchiProcessGpuEngineTimeoutDpc(v14);
                  break;
                case 0xCu:
                  VidSchiProcessHwQueuePageFaultedDpc(v14);
                  break;
                case 0x11u:
                  VidSchiProcessSuspendContextCompletedDpc(v14);
                  break;
                default:
                  if ( v13 <= 0x12 && _bittest(&v12, v13) )
                  {
                    v15 = (struct _VIDSCH_VSYNC_COOKIE *)&v14[-1];
                    if ( *((_BYTE *)&v14[2].Next[3].Next + 11) )
                      VidSchiProcessDpcVSyncHwFlipQueue(v15);
                    else
                      VidSchiProcessDpcVSyncCookie(v15);
                    ExpInterlockedPushEntrySList(
                      (PSLIST_HEADER)(*(&v9[200].Alignment + *((unsigned int *)&v14[5].Next + 3)) + 44688),
                      v14);
                  }
                  else if ( v13 == 14 )
                  {
                    VidSchiProcessPeriodicNotificationCookie((struct _VIDSCH_GLOBAL *)v9);
                  }
                  break;
              }
            }
            else
            {
              _InterlockedExchange((volatile __int32 *)&v14[2].Next[6].Next[30].Next + 2, 1);
              if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
                VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(v8 + 768), 1u);
              VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v14[-1]);
            }
          }
          while ( v3 );
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  result = ((__int64 (__fastcall *)(unsigned int *))DxgCoreInterface[80])(&v20);
  if ( v22 )
  {
    result = (unsigned __int8)byte_1C0076981;
    if ( byte_1C0076981 < 0 )
      return McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  }
  return result;
}
