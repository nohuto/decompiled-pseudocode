/*
 * XREFs of ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18006B5E8
 * Callers:
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18006B4C0 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18009CDF4 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x18030ED70 (-get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@IAEBU345@@Z @ 0x18006B708 (-_PhysicalRectToScaledRectWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA-AURect@Foundati.c)
 *     ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x18014D210 (-GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSplashScreen::_get_ImageLocationInternal(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rsi
  int v6; // xmm0_4
  int v7; // xmm1_4
  _OWORD *v8; // rax
  int v9; // r8d
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // eax
  int v18; // ecx
  int v19; // r8d
  int LegacyModernScaleFactor; // ebx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int nNumerator; // [rsp+20h] [rbp-50h] BYREF
  int nDenominator; // [rsp+24h] [rbp-4Ch] BYREF
  void **v32; // [rsp+28h] [rbp-48h] BYREF
  int v33; // [rsp+30h] [rbp-40h]
  int v34; // [rsp+34h] [rbp-3Ch]
  __int64 v35; // [rsp+38h] [rbp-38h]
  unsigned int v36; // [rsp+40h] [rbp-30h]
  _BYTE v37[16]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v38[16]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_QWORD **)(a1 + 96);
  if ( !((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v4) >> 3)
    || (v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 32LL))(*v4)) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 144);
  }
  GetSystemScaleFactorForWindow(v5, &nNumerator);
  GetOverrideScaleFactorForWindow(v5, &nDenominator);
  v6 = *(_DWORD *)(a1 + 132);
  v7 = *(_DWORD *)(a1 + 136);
  v35 = 0LL;
  v32 = &SplashScreen::CBasicSplashScreenLayout::`vftable';
  v36 = nNumerator;
  v33 = v6;
  v34 = v7;
  SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(&v32, v38);
  v8 = (_OWORD *)SplashScreen::CBasicSplashScreenLayout::_PhysicalRectToScaledRectWithRounding(v37, v36, v38);
  v9 = nDenominator;
  *(_OWORD *)a2 = *v8;
  if ( v9 != 100 )
  {
    v11 = MulDiv((int)*(float *)a2, 100, v9);
    v12 = (int)*(float *)(a2 + 4);
    v13 = nDenominator;
    *(float *)a2 = (float)v11;
    v14 = MulDiv(v12, 100, v13);
    v15 = (int)*(float *)(a2 + 8);
    v16 = nDenominator;
    *(float *)(a2 + 4) = (float)v14;
    v17 = MulDiv(v15, 100, v16);
    v18 = (int)*(float *)(a2 + 12);
    v19 = nDenominator;
    *(float *)(a2 + 8) = (float)v17;
    *(float *)(a2 + 12) = (float)MulDiv(v18, 100, v19);
  }
  if ( *(_BYTE *)(a1 + 168) )
  {
    LegacyModernScaleFactor = GetLegacyModernScaleFactor((unsigned int)nNumerator);
    v21 = MulDiv((int)*(float *)a2, nNumerator, LegacyModernScaleFactor);
    v22 = (int)*(float *)(a2 + 4);
    v23 = nNumerator;
    *(float *)a2 = (float)v21;
    v24 = MulDiv(v22, v23, LegacyModernScaleFactor);
    v25 = (int)*(float *)(a2 + 8);
    v26 = nNumerator;
    *(float *)(a2 + 4) = (float)v24;
    v27 = MulDiv(v25, v26, LegacyModernScaleFactor);
    v28 = (int)*(float *)(a2 + 12);
    v29 = nNumerator;
    *(float *)(a2 + 8) = (float)v27;
    *(float *)(a2 + 12) = (float)MulDiv(v28, v29, LegacyModernScaleFactor);
  }
  return a2;
}
