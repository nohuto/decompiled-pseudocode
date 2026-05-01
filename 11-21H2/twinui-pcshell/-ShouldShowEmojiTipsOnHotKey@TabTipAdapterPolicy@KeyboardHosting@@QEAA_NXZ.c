/*
 * XREFs of ?ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18048314C
 * Callers:
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180476FA0 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18014E7C0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::ShouldShowEmojiTipsOnHotKey(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  char v1; // bl
  char v3[32]; // [rsp+20h] [rbp-38h] BYREF

  std::wstring::wstring((__int64)v3, (__int64)this + 624);
  v1 = 0;
  if ( std::wstring::_Equal(v3, (char *)L"Chrome")
    || std::wstring::_Equal(v3, (char *)L"MSEdge")
    || std::wstring::_Equal(v3, (char *)L"MSEdgeDev") )
  {
    v1 = 1;
  }
  std::wstring::_Tidy_deallocate((__int64)v3);
  return v1;
}
