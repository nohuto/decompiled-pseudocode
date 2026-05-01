/*
 * XREFs of ?ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x180534DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18017B6A0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::ShouldShowEmojiTipsOnHotKey(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned __int8 *a2)
{
  unsigned __int8 v3; // bl
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF

  std::wstring::wstring(v5, (__int64)this + 648);
  v3 = 0;
  if ( std::wstring::_Equal((char *)v5, (char *)L"Chrome")
    || std::wstring::_Equal((char *)v5, (char *)L"MSEdge")
    || std::wstring::_Equal((char *)v5, (char *)L"MSEdgeDev") )
  {
    v3 = 1;
  }
  *a2 = v3;
  std::wstring::_Tidy_deallocate((__int64)v5);
  return 0LL;
}
