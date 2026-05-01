/*
 * XREFs of ??R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA?AUSnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISnapLayoutEventArgsFactory@23456@@Z @ 0x180589118
 * Callers:
 *     ??$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@?$factory_cache_entry@USnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@UISnapLayoutEventArgsFactory@23456@@impl@winrt@@QEAA?AUSnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@2@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@Z @ 0x1805886A0 (--$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@-$factory_cache_entry@USnapLayoutEventAr.c)
 *     ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x18058AF40 (-OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ?CreateInstance@?$consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUSnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@3@AEBW4SnapLayoutOperation@56783@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@@Z @ 0x180589640 (-CreateInstance@-$consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory@UISnapLa.c)
 */

__int64 __fastcall _lambda_06ad3909e536a51ee0f1eb0ad05e39fd_::operator()(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a1;
  v7 = *(_OWORD *)a1[1];
  ((void (__fastcall *)(__int64, __int64, __int64, __int128 *))winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory<winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::CreateInstance)(
    a3,
    a2,
    v5,
    &v7);
  return a2;
}
