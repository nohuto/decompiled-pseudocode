/*
 * XREFs of ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18003F7FC
 * Callers:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18003F85C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     _wil::details_abi::FeatureStateData::RecordUsage_::_1_::dtor$0 @ 0x180065799 (_wil--details_abi--FeatureStateData--RecordUsage_--_1_--dtor$0.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180093DE8 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180094FE4 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     _wil::details_abi::FeatureStateData::ProcessShutdown_::_1_::dtor$0 @ 0x180095027 (_wil--details_abi--FeatureStateData--ProcessShutdown_--_1_--dtor$0.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18001398C (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::UsageIndexes::~UsageIndexes(wil::details_abi::UsageIndexes *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v2 )
    MemoryFree(v2);
  v3 = (void *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
    MemoryFree(v3);
  v4 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 )
    MemoryFree(v4);
}
