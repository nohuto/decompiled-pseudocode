/*
 * XREFs of ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x18004EA64
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_10_unsigned_int_unsigned___int64_ @ 0x18004D300 (_anonymous_namespace_--PlacementHealth--HandleEvent_10_unsigned_int_unsigned___int64_.c)
 * Callees:
 *     ??$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA_KAEB_K@Z @ 0x18004EB24 (--$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA.c)
 *     ??$WriteInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUPlacementReportedInfo@123@AEA_N2PEBG@Z @ 0x18004F394 (--$WriteInfo@UPlacementReportedInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@detail.c)
 *     ?EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ @ 0x180055CCC (-EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ.c)
 */

__int64 __fastcall CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<10,unsigned int,unsigned __int64>(
        CreativeFramework::Health::details::BaseScenarioEvents *this,
        int a2,
        __int64 a3)
{
  struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  SystemTimeAsFileTime = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                                          + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
  CreativeFramework::Health::details::BaseScenarioEvents::SetPlacementEventValueMember<unsigned __int64>(
    this,
    (char *)this + 112,
    &SystemTimeAsFileTime);
  CreativeFramework::Health::details::BaseScenarioEvents::SetPlacementEventValueMember<unsigned __int64>(
    this,
    (char *)this + 120,
    &SystemTimeAsFileTime);
  CreativeFramework::Health::details::BaseScenarioEvents::EnsurePlacementReportedInfoRead(this);
  if ( a2 != *((_DWORD *)this + 34) )
  {
    *((_DWORD *)this + 34) = a2;
    *((_BYTE *)this + 251) = 1;
    CreativeFramework::Health::details::BaseScenarioEvents::WriteInfo<CreativeFramework::Health::details::PlacementReportedInfo>(
      this,
      (char *)this + 104);
  }
  return CreativeFramework::Health::details::BaseScenarioEvents::SetPlacementEventValueMember<unsigned __int64>(
           this,
           (char *)this + 128,
           &v7);
}
