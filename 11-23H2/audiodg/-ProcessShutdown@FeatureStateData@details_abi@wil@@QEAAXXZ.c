/*
 * XREFs of ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x140089658
 * Callers:
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x140080C14 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x14008A704 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x14008022C (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x140080EA4 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x140089E3C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x14008BC40 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::FeatureStateData::ProcessShutdown(wil::details_abi::FeatureStateData *this)
{
  void *v2; // rdx
  _BYTE v3[200]; // [rsp+20h] [rbp-C8h] BYREF

  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v3);
  wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(this, (struct wil::details_abi::UsageIndexes *)v3);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v3);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v3, v2);
}
