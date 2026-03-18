/*
 * XREFs of ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x140009F70
 * Callers:
 *     ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x140009CF4 (--1-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14000230C (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x14000B90C (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::~FeatureStateData(struct _RTL_CRITICAL_SECTION *this)
{
  void *v2; // rdx
  wil::details *LockSemaphore; // rcx
  void *v4; // rdx

  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)this);
  LockSemaphore = (wil::details *)this[6].LockSemaphore;
  this[6].LockSemaphore = 0LL;
  if ( LockSemaphore )
    wil::details::FreeProcessHeap(LockSemaphore, v2);
  DeleteCriticalSection(this + 5);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)&this->LockCount, v4);
}
