/*
 * XREFs of ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180015C64
 * Callers:
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180034094 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D330 (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::~SubscriptionList(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  LockSemaphore = this[1].LockSemaphore;
  this[1].LockSemaphore = 0LL;
  if ( LockSemaphore )
    operator delete(LockSemaphore);
  DeleteCriticalSection(this);
}
