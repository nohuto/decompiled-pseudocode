/*
 * XREFs of ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180133248
 * Callers:
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180133130 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1802DD7D6 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1801332FC (-GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ?empty@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NXZ @ 0x180133394 (-empty@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NXZ.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1801334E0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180524854 (-InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus(KeyboardHosting::TabTipAdapter *this)
{
  __int64 CurrentInputAppId; // rax
  __int64 v3; // rdx
  bool v4; // di
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE v8[32]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CurrentInputAppId = KeyboardHosting::TabTipAdapter::GetCurrentInputAppId(this, v8);
  v4 = (unsigned __int8)std::wstring::empty(CurrentInputAppId)
    && IsActiveSessionCountLimited()
    && *((_BYTE *)this + 485)
    && *((_BYTE *)this + 484);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(v8, v3);
  if ( !v4 )
    return 0LL;
  v5 = KeyboardHosting::TabTipAdapter::InvokeActivateInputApp(this);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB9F,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
