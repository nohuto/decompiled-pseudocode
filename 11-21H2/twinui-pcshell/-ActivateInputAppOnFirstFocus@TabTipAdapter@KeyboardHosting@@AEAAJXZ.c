/*
 * XREFs of ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180065890
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180064E40 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18022F548 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x180065D74 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18009EB10 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18045BB50 (-ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus(KeyboardHosting::TabTipAdapter *this)
{
  bool v2; // di
  int v4; // eax
  unsigned int v5; // ebx
  int v6[8]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = !*(_QWORD *)(TouchKeyboardExperienceManager::GetCurrentInputAppId(*((_QWORD *)this + 8), v6) + 16)
    && IsActiveSessionCountLimited()
    && *((_BYTE *)this + 533)
    && *((_BYTE *)this + 532);
  std::wstring::_Tidy_deallocate(v6);
  if ( !v2 )
    return 0LL;
  v4 = TouchKeyboardExperienceManager::ActivateInputApp(*((TouchKeyboardExperienceManager **)this + 8));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD25,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v4,
    v6[0]);
  return v5;
}
