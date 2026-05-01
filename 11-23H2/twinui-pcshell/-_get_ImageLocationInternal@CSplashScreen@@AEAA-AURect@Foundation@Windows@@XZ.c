/*
 * XREFs of ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18004DC80
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18001EBEC (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18004DB5C (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x1803CB1D0 (-get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x18004DD80 (-GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

float *__fastcall CSplashScreen::_get_ImageLocationInternal(__int64 a1, float *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rsi
  int v6; // xmm1_4
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int LegacyModernScaleFactor; // ebx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  void **v27; // [rsp+20h] [rbp-20h] BYREF
  int v28; // [rsp+28h] [rbp-18h]
  int v29; // [rsp+2Ch] [rbp-14h]
  __int64 v30; // [rsp+30h] [rbp-10h]
  int v31; // [rsp+38h] [rbp-8h]
  int nNumerator; // [rsp+60h] [rbp+20h] BYREF
  int nDenominator; // [rsp+68h] [rbp+28h] BYREF
  __int64 v34; // [rsp+70h] [rbp+30h]

  v4 = *(_QWORD **)(a1 + 96);
  if ( !((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v4) >> 3)
    || (v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 32LL))(*v4)) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 144);
  }
  GetSystemScaleFactorForWindow(v5, &nNumerator);
  GetOverrideScaleFactorForWindow(v5, &nDenominator);
  v6 = *(_DWORD *)(a1 + 136);
  v27 = &SplashScreen::CBasicSplashScreenLayout::`vftable';
  v29 = v6;
  v34 = 0LL;
  v30 = 0LL;
  v28 = *(_DWORD *)(a1 + 132);
  v31 = nNumerator;
  SplashScreen::CBasicSplashScreenLayout::GetRelativeImageLocation(&v27, a2);
  if ( nDenominator != 100 )
  {
    v8 = MulDiv((int)*a2, 100, nDenominator);
    v9 = (int)a2[1];
    v10 = nDenominator;
    *a2 = (float)v8;
    v11 = MulDiv(v9, 100, v10);
    v12 = (int)a2[2];
    v13 = nDenominator;
    a2[1] = (float)v11;
    v14 = MulDiv(v12, 100, v13);
    v15 = (int)a2[3];
    v16 = nDenominator;
    a2[2] = (float)v14;
    a2[3] = (float)MulDiv(v15, 100, v16);
  }
  if ( *(_BYTE *)(a1 + 168) )
  {
    LegacyModernScaleFactor = GetLegacyModernScaleFactor((unsigned int)nNumerator);
    v18 = MulDiv((int)*a2, nNumerator, LegacyModernScaleFactor);
    v19 = (int)a2[1];
    v20 = nNumerator;
    *a2 = (float)v18;
    v21 = MulDiv(v19, v20, LegacyModernScaleFactor);
    v22 = (int)a2[2];
    v23 = nNumerator;
    a2[1] = (float)v21;
    v24 = MulDiv(v22, v23, LegacyModernScaleFactor);
    v25 = (int)a2[3];
    v26 = nNumerator;
    a2[2] = (float)v24;
    a2[3] = (float)MulDiv(v25, v26, LegacyModernScaleFactor);
  }
  return a2;
}
