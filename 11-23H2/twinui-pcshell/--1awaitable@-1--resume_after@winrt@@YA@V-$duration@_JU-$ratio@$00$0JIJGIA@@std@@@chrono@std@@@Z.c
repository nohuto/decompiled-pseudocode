/*
 * XREFs of ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180071960
 * Callers:
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1 @ 0x1801DF350 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1.c)
 *     _CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1801DF77E (_CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1_--_1_--dtor$4.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x1802185E0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1802185E0.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x180218A66 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_180218A66.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x180218A8F (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_180218A8F.c)
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator() @ 0x18021B1C0 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1--operator().c)
 *     __lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x18021B350 (__lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1--operator()_--_1_--dtor$0.c)
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 *     __lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator()_::_1_::dtor$5 @ 0x1802773B2 (__lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator()_--_1_--dtor$5.c)
 *     __lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator()_::_1_::dtor$8 @ 0x1802773DB (__lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator()_--_1_--dtor$8.c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_1802829E0.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$7 @ 0x180283765 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_180283765.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$19 @ 0x1802838AE (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_1802838AE.c)
 * Callees:
 *     ?close@?$handle_type@Utimer_traits@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x18018F8B8 (-close@-$handle_type@Utimer_traits@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$.c)
 */

__int64 __fastcall `winrt::resume_after'::`2'::awaitable::~awaitable(volatile __int64 **a1)
{
  __int64 result; // rax
  volatile __int64 *v3; // rbx

  result = _close___handle_type_Utimer_traits_awaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(a1 + 1);
  v3 = *a1;
  if ( v3 )
  {
    while ( 1 )
    {
      result = _InterlockedExchange64(v3, 0LL);
      if ( result != 1 )
        break;
      _Thrd_yield();
    }
  }
  return result;
}
