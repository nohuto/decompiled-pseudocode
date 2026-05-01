/*
 * XREFs of ?OnTapInvokeEffectiveSettingChanged@TouchKeyboardExperienceManager@@AEAAXW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x180084F58
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A5144 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable___lambda_2ff518be94006a07a4ff2e3891cd65cc___::Invoke @ 0x18020A860 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18020A860.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnTapInvokeEffectiveSettingChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_QWORD *)(a1 + 584) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x13B0,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      a4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**(_QWORD **)(*(_QWORD *)(a1 + 584) + 128LL) + 128LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 584) + 128LL),
             a2,
             &v7);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAFA,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)result,
      v5);
  return result;
}
