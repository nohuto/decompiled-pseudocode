/*
 * XREFs of ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x18007077C
 * Callers:
 *     __lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_::operator()_::_1_::catch$12 @ 0x1800D7A6F (__lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_--operator()_--_1_--catch$12.c)
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::catch$14 @ 0x1800D7CA5 (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--catch$14.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer_::_1_::catch$6 @ 0x1800DCED2 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--GetSubscriptionCo_ea_1800DCED2.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::catch$18 @ 0x1800DD205 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800DD205.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$23 @ 0x1800DD30C (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800DD30C.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$24 @ 0x1800DD38A (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800DD38A.c)
 * Callees:
 *     ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x18006D414 (--$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_CaughtExceptionMsg(
        wil::details::in1diag3 *this,
        unsigned __int16 *a2,
        int a3,
        const char *a4,
        const char *a5,
        ...)
{
  int v6; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtExceptionMsg<2>(
           (int)this,
           a2,
           a3,
           (__int64)a4,
           v6,
           retaddr,
           (unsigned __int64)a4,
           (char *)&a5);
}
