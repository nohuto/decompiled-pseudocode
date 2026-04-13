/*
 * XREFs of ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18002C7F4
 * Callers:
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x18002C5D4 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180039E8C (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18003BA40 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     _wil::details_abi::FeatureStateData::RecordUsage_::_1_::dtor$0 @ 0x1800D5B44 (_wil--details_abi--FeatureStateData--RecordUsage_--_1_--dtor$0.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180032E00 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::UsageIndexes::~UsageIndexes(wil::details_abi::UsageIndexes *this, void *a2)
{
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, a2);
  v4 = (wil::details *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v4 )
    wil::details::FreeProcessHeap(v4, a2);
  v5 = (wil::details *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v5 )
    wil::details::FreeProcessHeap(v5, a2);
}
