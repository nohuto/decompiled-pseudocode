/*
 * XREFs of ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x18004DD80
 * Callers:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18004DC80 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 * Callees:
 *     ?_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@IAEBU345@@Z @ 0x18004DDF0 (-_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA-AURect@Foundati.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SplashScreen::CBasicSplashScreenLayout::GetRelativeImageLocation(unsigned int *a1, __int64 a2)
{
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(unsigned int *, _BYTE *))(*(_QWORD *)a1 + 32LL))(a1, v5);
  SplashScreen::CBasicSplashScreenLayout::_PhysicalRectToScaledRectWithRounding(a2, a1[6], v5);
  return a2;
}
