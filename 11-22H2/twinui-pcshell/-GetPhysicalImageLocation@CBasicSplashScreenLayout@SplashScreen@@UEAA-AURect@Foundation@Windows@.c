/*
 * XREFs of ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x180059E50
 * Callers:
 *     <none>
 * Callees:
 *     ?_CenterImageWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@AEBUSize@45@AEBU345@@Z @ 0x180059F58 (-_CenterImageWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA-AURect@Foundation@Windows@@A.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_OWORD *__fastcall SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(_DWORD *a1, _OWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // edx
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  __int128 v13; // xmm0
  _OWORD *result; // rax
  _BYTE v15[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  float v17; // [rsp+38h] [rbp-30h]
  float v18; // [rsp+3Ch] [rbp-2Ch]

  v4 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 48LL))(a1);
  v5 = a1[6];
  v16 = 0LL;
  v6 = v4;
  v7 = MulDiv(300, v5, 100);
  v8 = a1[6];
  v9 = (float)v7;
  v18 = (float)v7;
  v10 = (float)MulDiv(620, v8, 100);
  v17 = v10;
  if ( v6 == 1 )
  {
    v11 = v9 * 0.75;
    v12 = v10 * 0.75;
    goto LABEL_4;
  }
  if ( !v6 )
  {
    v11 = v9 * 0.5;
    v12 = v10 * 0.5;
LABEL_4:
    v17 = v12;
    v18 = v11;
  }
  v13 = *(_OWORD *)SplashScreen::CBasicSplashScreenLayout::_CenterImageWithRounding(v15, a1 + 2, &v16);
  result = a2;
  *a2 = v13;
  return result;
}
