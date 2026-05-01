/*
 * XREFs of CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180271D90
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_InitCoro$2 @ 0x180271CC4 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_InitCoro$2.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180188B6C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@2@AEBUCRect@Geometry@@I@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022B434 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@V-$vector@USnapLaunchTarg.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0GL@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0GL@$$CBG@Z @ 0x18025DAAC (--$CopilotHotkey_Output_Debug_String@AEAY0GL@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0GL@$$C.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180260EC0 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@ti.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261030 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802611F0 (--4-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x18026132C (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?Log_GetLastErrorMsg@in1diag3@details@wil@@YAKPEAXIPEBD1ZZ @ 0x180271BCC (-Log_GetLastErrorMsg@in1diag3@details@wil@@YAKPEAXIPEBD1ZZ.c)
 *     ?RestoreForeground@CopilotHotkeyManager@@AEAAXXZ @ 0x180272AF0 (-RestoreForeground@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ @ 0x1802734E4 (-TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180273F34 (-TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@wi.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1802746FC (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802758FC (-reset@-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@detail.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180392DF0 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CopilotHotkeyManager::MonitorForCopilotExtendedSignals__ResumeCoro_1(__int64 a1)
{
  __int64 v2; // rdi
  char *v3; // rcx
  __int64 v4; // rcx
  const char *v5; // [rsp+20h] [rbp-38h]
  const char *v6; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_14;
    case 2:
      v2 = *(_QWORD *)(a1 + 66);
      CopilotHotkeyManager::RestoreForeground((CopilotHotkeyManager *)v2);
      try
      {
        CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary((CopilotHotkeyManager *)v2);
        v3 = (char *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                         v2 + 432,
                         (__int64 *)(a1 + 16))
                    + 280);
        std::wstring::operator=(v3, (char *)(v2 + 192));
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 16));
        if ( *(_QWORD *)(v2 + 208) && (*(_QWORD *)(v2 + 312) || *(_QWORD *)(v2 + 352)) )
        {
          CopilotHotkeyManager::TakeFocusAndHandleInputStream((CopilotHotkeyManager *)v2);
          if ( IsWindow(*(HWND *)(v2 + 112)) )
          {
            AcquireSRWLockExclusive((PSRWLOCK)(v2 + 168));
            if ( SetTimer(*(HWND *)(v2 + 112), 0xC8uLL, 0x12Cu, 0LL) )
            {
              *(_WORD *)(v2 + 178) = 0;
              *(_BYTE *)(v2 + 176) = 0;
            }
            else
            {
              *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                            v2 + 432,
                            (__int64 *)(a1 + 48))
                       + 268) = 1;
              tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 48));
              wil::details::in1diag3::Log_GetLastErrorMsg(
                retaddr,
                (void *)0x64F,
                (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
                "Failed to set timer!",
                v5);
            }
            ReleaseSRWLockExclusive((PSRWLOCK)(v2 + 168));
          }
          else
          {
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                          v2 + 432,
                          (__int64 *)(a1 + 56))
                     + 267) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 56));
            wil::details::in1diag3::Log_HrMsg(
              retaddr,
              (void *)0x65B,
              (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
              (const char *)0x80070006LL,
              (int)"Faild to create invisible window!",
              v6);
          }
        }
        else
        {
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v2 + 432,
                        (__int64 *)(a1 + 24))
                   + 266) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 24));
          CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[107]>(v4);
          CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync(v2, a1 + 32, *(unsigned int *)(a1 + 74));
          tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((__int64 *)(v2 + 432));
          wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::reset(v2 + 432);
          *(_QWORD *)(a1 + 40) = 0LL;
          wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::operator=(
            (void **)(v2 + 432),
            (void **)(a1 + 40));
          wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>((void **)(a1 + 40));
        }
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
      }
      std::experimental::coroutine_traits<winrt::fire_and_forget,std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int>::promise_type::final_suspend(
        a1,
        (_BYTE *)(a1 + 64));
LABEL_14:
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1);
      break;
    default:
      __debugbreak();
      break;
  }
}
