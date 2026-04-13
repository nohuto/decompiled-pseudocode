/*
 * XREFs of ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x18002C5D4
 * Callers:
 *     ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18002BD70 (--1-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18002C768 (--1SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180039E8C (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details_abi::FeatureStateData::~FeatureStateData(wil::details_abi::FeatureStateData *this)
{
  wil::details_abi::FeatureStateData::ProcessShutdown(this);
  wil::details_abi::SubscriptionList::~SubscriptionList((wil::details_abi::FeatureStateData *)((char *)this + 200));
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::FeatureStateData *)((char *)this + 8));
}
