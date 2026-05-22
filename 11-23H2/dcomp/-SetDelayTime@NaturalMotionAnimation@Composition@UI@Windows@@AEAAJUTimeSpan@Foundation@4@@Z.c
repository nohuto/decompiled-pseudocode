/*
 * XREFs of ?SetDelayTime@NaturalMotionAnimation@Composition@UI@Windows@@AEAAJUTimeSpan@Foundation@4@@Z @ 0x180188D74
 * Callers:
 *     ?put_DelayTime@Api@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z @ 0x180189230 (-put_DelayTime@Api@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180086C8C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::NaturalMotionAnimation::SetDelayTime(__int64 a1, __int64 a2)
{
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]

  if ( (float)(int)a2 < 0.0 || a2 > 20740000000000LL )
  {
    v4 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"An invalid DelayTime is specified. It must be within the range of 0-24 days.",
      0x4Du,
      0x4Cu);
    RoOriginateError(2147942487LL, v4);
    return 2147942487LL;
  }
  else
  {
    *(_QWORD *)(a1 + 384) = a2;
    return 0LL;
  }
}
