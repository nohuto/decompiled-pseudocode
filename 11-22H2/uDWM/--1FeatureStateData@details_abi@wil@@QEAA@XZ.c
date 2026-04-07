/*
 * XREFs of ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x18009AD0C
 * Callers:
 *     ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18009AAD4 (--1-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800580D8 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18009CA1C (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::~FeatureStateData(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rcx

  wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)this);
  LockSemaphore = this[6].LockSemaphore;
  this[6].LockSemaphore = 0LL;
  if ( LockSemaphore )
    MemoryFree(LockSemaphore);
  DeleteCriticalSection(this + 5);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)&this->LockCount);
}
