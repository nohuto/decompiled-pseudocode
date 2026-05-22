/*
 * XREFs of ?StartInjectionAnimation@CompositionManipulation@Composition@UI@Windows@@QEAAJPEAVInjectionAnimation@234@@Z @ 0x180161704
 * Callers:
 *     ?StartInjectionAnimation@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAUIInjectionAnimationTest@456@@Z @ 0x18011E2F0 (-StartInjectionAnimation@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?StartAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180075F00 (-StartAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionManipulation::StartInjectionAnimation(
        Windows::UI::Composition::CompositionManipulation *this,
        struct Windows::UI::Composition::InjectionAnimation *a2)
{
  int started; // eax
  unsigned int v5; // ebx
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]

  *((_BYTE *)this + 156) |= 1u;
  v8 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Injections", 0xBu, 0xAu);
  started = Windows::UI::Composition::ProxyObject::StartAnimation((__int64 *)this, v8, (__int64)a2, 0LL, 0LL);
  v5 = started;
  if ( started < 0 )
    DoStackCaptureDirect(started, 0x175u);
  *((_BYTE *)this + 156) &= ~1u;
  return v5;
}
