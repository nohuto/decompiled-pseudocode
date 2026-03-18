/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z @ 0x1C006CFDC
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C006CCBC (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0046430 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C004A1A8 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // r8
  struct _KEVENT *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 24) )
  {
    v7 = *((_QWORD *)this + 16);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v8 = 4000LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + v7 + 952), &LockHandle);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v9 = DXGADAPTER::NumberOfVSyncWaiter(a2, a3);
      McTemplateK0qqqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v8 + v7 + 944),
        &EventDWMVsyncSignal,
        v10,
        *(_DWORD *)(v8 + v7 + 936),
        a4,
        *(_BYTE *)(v8 + v7 + 944),
        v9,
        4);
    }
    *(_BYTE *)(v8 + v7 + 960) = 1;
    KePulseEvent((PRKEVENT)(v8 + v7 + 904), 0, 0);
    v11 = *(struct _KEVENT **)(v8 + v7 + 928);
    if ( v11 )
    {
      *(_DWORD *)(v8 + v7 + 940) = a4;
      if ( *(_DWORD *)(v8 + v7 + 936) <= a4 )
      {
        if ( *(_BYTE *)(v8 + v7 + 944) )
        {
          *(_BYTE *)(v8 + v7 + 944) = 0;
          if ( *((_QWORD *)a2 + 350) )
          {
            DXGADAPTER::DecrementVSyncWaiter(a2, a3);
            v11 = *(struct _KEVENT **)(v8 + v7 + 928);
          }
        }
        KeSetEvent(v11, 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
