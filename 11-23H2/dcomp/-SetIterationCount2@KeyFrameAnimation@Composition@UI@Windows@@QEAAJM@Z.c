/*
 * XREFs of ?SetIterationCount2@KeyFrameAnimation@Composition@UI@Windows@@QEAAJM@Z @ 0x180083688
 * Callers:
 *     ?put_IterationCount@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJH@Z @ 0x18000DF50 (-put_IterationCount@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJH@Z.c)
 *     ?SetIterationCount@Partner@KeyFrameAnimation@Composition@UI@Windows@@UEAAJM@Z @ 0x180083620 (-SetIterationCount@Partner@KeyFrameAnimation@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::SetIterationCount2(
        Windows::UI::Composition::KeyFrameAnimation *this,
        float a2)
{
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]

  if ( a2 <= 0.0 )
  {
    v4 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"An invalid IterationCount is specified. It must be greater than 0.",
      0x43u,
      0x42u);
    RoOriginateError(2147942487LL, v4);
    return 2147942487LL;
  }
  else
  {
    *((float *)this + 118) = a2;
    return 0LL;
  }
}
