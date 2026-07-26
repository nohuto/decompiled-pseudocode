/*
 * XREFs of ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C011C4DC
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00306C0 (NdisFRegisterFilterDriver.c)
 *     NdisFDeregisterFilterDriver @ 0x1C0067930 (NdisFDeregisterFilterDriver.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C011E848 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
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
    v5.m_Lock = (KPushLockBase *)(qword_1C00F5728 + 16);
    v5.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v5);
    this->RunningDriver = a2;
    KLockHolder::~KLockHolder(&v5);
  }
  NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(&this->NDIS_BIND_DRIVER_BASE, a2 != 0LL, RunSynchronous);
  if ( !a2 )
  {
    v5.m_State = Unlocked;
    v5.m_Lock = (KPushLockBase *)(qword_1C00F5728 + 16);
    v5.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v5);
    this->RunningDriver = 0LL;
    KLockHolder::~KLockHolder(&v5);
  }
}
