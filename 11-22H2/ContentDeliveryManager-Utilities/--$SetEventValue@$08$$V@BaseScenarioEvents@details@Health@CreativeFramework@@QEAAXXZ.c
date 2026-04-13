/*
 * XREFs of ??$SetEventValue@$08$$V@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXXZ @ 0x18004EA60
 * Callers:
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18004D19C (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 * Callees:
 *     ??$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA_KAEB_K@Z @ 0x18004EB74 (--$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA.c)
 */

__int64 __fastcall CreativeFramework::Health::details::BaseScenarioEvents::SetEventValue<9,>(__int64 a1)
{
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  SystemTimeAsFileTime = (struct _FILETIME)(SystemTimeAsFileTime.dwLowDateTime
                                          + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32));
  return CreativeFramework::Health::details::BaseScenarioEvents::SetPlacementEventValueMember<unsigned __int64>(
           a1,
           a1 + 112,
           &SystemTimeAsFileTime);
}
