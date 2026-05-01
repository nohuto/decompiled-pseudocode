/*
 * XREFs of ?SaveUserSetting@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHH@Z @ 0x180515DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     ??$wnf_publish@K@wil@@YAXAEBU_WNF_STATE_NAME@@AEBK@Z @ 0x18050BD28 (--$wnf_publish@K@wil@@YAXAEBU_WNF_STATE_NAME@@AEBK@Z.c)
 *     ?UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x18051BD50 (-UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSetti.c)
 */

__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::SaveUserSetting(
        __int64 a1,
        int a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  try
  {
    if ( (unsigned __int8)SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateUserSetting(v3) )
    {
      v7 = a2;
      v8 = a2;
      v4 = _RegSetKeyValueWithSDDL(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
             L"TouchKeyboardTapInvoke",
             4u,
             (BYTE *)&v8,
             4u);
      if ( v4 > 0 )
        v4 = (unsigned __int16)v4 | 0x80070000;
      if ( v4 >= 0 )
        wil::wnf_publish<unsigned long>((__int64)retaddr, (__int64)&v7);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x109,
          (int)"shellcommon\\internal\\shell\\inc\\TouchKeyboardTapInvokeSetting.h",
          (const char *)(unsigned int)v4);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
