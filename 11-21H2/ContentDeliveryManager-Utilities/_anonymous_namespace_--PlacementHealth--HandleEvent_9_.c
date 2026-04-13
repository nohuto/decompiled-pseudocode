/*
 * XREFs of _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x180052998
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x180052028 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$02$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18005EED8 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$02$00@details@Health@CreativeF.c)
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18005F0BC (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800630C4 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     _anonymous_namespace_::StartsWith @ 0x180065AE4 (_anonymous_namespace_--StartsWith.c)
 *     ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180066928 (-WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18006C3DC (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::PlacementHealth::HandleEvent_9_(_WORD *Src)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  CreativeFramework::Health::details::BaseScenarioEvents *v4; // rdi
  unsigned __int64 v5; // rsi
  CreativeFramework::Health::details::BaseScenarioEvents *v6; // rdi
  unsigned __int64 v7; // rsi
  CreativeFramework::Health::details::BaseScenarioEvents *v8; // rdi
  unsigned __int64 v9; // rsi
  CreativeFramework::Health::details::BaseScenarioEvents *v10; // rdi
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp-40h] BYREF
  CreativeFramework::Health::details::BaseScenarioEvents *v12[2]; // [rsp+38h] [rbp-38h] BYREF
  void *v13[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp-10h]

  v2 = -1LL;
  if ( CompareStringOrdinal(Src, -1, L"LockScreen", -1, 1) == 2 )
  {
    std::to_wstring(v13);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(v12, v13);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v4 = v12[0];
    if ( !*((_BYTE *)v12[0] + 252) )
      CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(v12[0]);
    if ( v3 != *((_QWORD *)v4 + 14) )
    {
      *((_QWORD *)v4 + 14) = v3;
      *((_BYTE *)v4 + 251) = 1;
      CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(v4);
    }
  }
  else if ( CompareStringOrdinal(Src, -1, L"LockScreenOverlay", -1, 1) == 2 )
  {
    std::to_wstring(v13);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(v12, v13);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v6 = v12[0];
    if ( !*((_BYTE *)v12[0] + 252) )
      CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(v12[0]);
    if ( v5 != *((_QWORD *)v6 + 14) )
    {
      *((_QWORD *)v6 + 14) = v5;
      *((_BYTE *)v6 + 251) = 1;
      CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(v6);
    }
  }
  else if ( CompareStringOrdinal(Src, -1, L"StartMenu", -1, 1) == 2 )
  {
    std::to_wstring(v13);
    CreativeFramework::Health::details::GenericOffersHealthTracker<3,1>::GetOrCreateBaseEventForPlacementId(v12, v13);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v7 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v8 = v12[0];
    if ( !*((_BYTE *)v12[0] + 252) )
      CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(v12[0]);
    if ( v7 != *((_QWORD *)v8 + 14) )
    {
      *((_QWORD *)v8 + 14) = v7;
      *((_BYTE *)v8 + 251) = 1;
      CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(v8);
    }
  }
  else
  {
    if ( !(unsigned __int8)anonymous_namespace_::StartsWith(Src) )
      return;
    v14 = 7LL;
    v13[2] = 0LL;
    LOWORD(v13[0]) = 0;
    if ( *Src )
    {
      do
        ++v2;
      while ( Src[v2] );
    }
    std::wstring::assign(v13, Src);
    CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::GetOrCreateBaseEventForPlacementId(v12, v13);
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v9 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v10 = v12[0];
    if ( !*((_BYTE *)v12[0] + 252) )
      CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(v12[0]);
    if ( v9 != *((_QWORD *)v10 + 14) )
    {
      *((_QWORD *)v10 + 14) = v9;
      *((_BYTE *)v10 + 251) = 1;
      CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(v10);
    }
  }
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(v12);
  if ( v14 >= 8 )
    operator delete(v13[0]);
}
