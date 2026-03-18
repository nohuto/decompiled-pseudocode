/*
 * XREFs of ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C008138C
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C0070868 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

char __fastcall FxEventQueue::QueueToThreadWorker(FxEventQueue *this)
{
  KIRQL v2; // bp
  char v3; // bl
  const void *_a1; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  unsigned __int8 m_QueueFlags; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  if ( this->m_QueueHead == this->m_QueueTail )
  {
    v3 = 0;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
    WPP_IFR_SF_qq(
      *(_FX_DRIVER_GLOBALS **)(v6 + 16),
      4u,
      0xCu,
      0xCu,
      WPP_EventQueue_cpp_Traceguids,
      _a1,
      *(const void **)(v5 + 144));
  }
  else
  {
    m_QueueFlags = this->m_QueueFlags;
    v3 = 1;
    if ( (m_QueueFlags & 1) != 0 )
      v3 = 0;
    else
      this->m_QueueFlags = m_QueueFlags | 1;
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v2);
  return v3;
}
