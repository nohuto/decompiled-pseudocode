/*
 * XREFs of ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1805E8910
 * Callers:
 *     <none>
 * Callees:
 *     ?_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@IAEBU345@@Z @ 0x18006B708 (-_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA-AURect@Foundati.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_OWORD *__fastcall SplashScreen::CBasicSplashScreenLayout::GetRelativeImageLocation(int *a1, _OWORD *a2)
{
  __int128 v4; // xmm0
  _OWORD *result; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  float v7[4]; // [rsp+30h] [rbp-28h] BYREF

  (*(void (__fastcall **)(int *, float *))(*(_QWORD *)a1 + 32LL))(a1, v7);
  v4 = *(_OWORD *)SplashScreen::CBasicSplashScreenLayout::_PhysicalRectToScaledRectWithRounding((__int64)v6, a1[6], v7);
  result = a2;
  *a2 = v4;
  return result;
}
