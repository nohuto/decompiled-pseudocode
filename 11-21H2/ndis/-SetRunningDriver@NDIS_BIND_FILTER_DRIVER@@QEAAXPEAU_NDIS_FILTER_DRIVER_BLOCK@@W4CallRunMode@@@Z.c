/*
 * XREFs of ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C0111310
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C002B200 (NdisFRegisterFilterDriver.c)
 *     NdisFDeregisterFilterDriver @ 0x1C0062910 (NdisFDeregisterFilterDriver.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C010F404 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 */

void __fastcall NDIS_BIND_FILTER_DRIVER::SetRunningDriver(
        NDIS_BIND_FILTER_DRIVER *this,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        enum CallRunMode a3)
{
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v5.m_State = Unlocked;
    v5.m_Lock = (KPushLockBase *)(qword_1C00EC730 + 16);
    v5.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v5);
    this->RunningDriver = a2;
    KLockHolder::~KLockHolder(&v5);
  }
  NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(&this->NDIS_BIND_DRIVER_BASE, a2 != 0LL, RunSynchronous);
  if ( !a2 )
  {
    v5.m_State = Unlocked;
    v5.m_Lock = (KPushLockBase *)(qword_1C00EC730 + 16);
    v5.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v5);
    this->RunningDriver = 0LL;
    KLockHolder::~KLockHolder(&v5);
  }
}
