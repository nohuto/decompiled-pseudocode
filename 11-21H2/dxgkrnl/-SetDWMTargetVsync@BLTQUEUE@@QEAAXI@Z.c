/*
 * XREFs of ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C006CF0C
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0178000 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C02C2B20 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0046430 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::SetDWMTargetVsync(BLTQUEUE *this, unsigned int a2)
{
  struct _KEVENT *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  _BYTE v7[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)this + 51, 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v4 = (struct _KEVENT *)*((_QWORD *)this + 48);
  v9 = 2;
  KeResetEvent(v4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qqqqq_EtwWriteTransfer(
      v5,
      &EventDWMVsyncCountWait,
      v6,
      a2,
      *((_DWORD *)this + 112),
      0,
      0,
      *((_DWORD *)this + 34));
  *((_DWORD *)this + 98) = a2;
  if ( a2 <= *((_DWORD *)this + 112) && a2 )
    KeSetEvent(*((PRKEVENT *)this + 48), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
