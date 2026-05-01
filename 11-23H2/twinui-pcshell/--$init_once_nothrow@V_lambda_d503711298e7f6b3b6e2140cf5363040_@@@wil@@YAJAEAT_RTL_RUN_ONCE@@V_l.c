/*
 * XREFs of ??$init_once_nothrow@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_d503711298e7f6b3b6e2140cf5363040_@@PEA_N@Z @ 0x18016BDC4
 * Callers:
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18016BDA0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::init_once_nothrow<_lambda_d503711298e7f6b3b6e2140cf5363040_>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  int ValueW; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 pcbData; // [rsp+50h] [rbp+8h] BYREF
  WINBOOL v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 pvData; // [rsp+60h] [rbp+18h] BYREF

  pvData = a3;
  pcbData = a1;
  v8 = 0;
  if ( !__std_init_once_begin_initialize(
          &`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried,
          0,
          &v8,
          0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x253, (int)"wil", v3);
  if ( v8 )
  {
    LODWORD(pvData) = 0;
    LODWORD(pcbData) = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Holographic",
               L"ClassicAppsEnabled",
               0x20000018u,
               0LL,
               &pvData,
               (LPDWORD)&pcbData);
    if ( ValueW > 0 )
      ValueW = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW == -2147024894 || ValueW == -2147024893 || ValueW == -2147023728 )
    {
      `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = 1;
    }
    else if ( ValueW )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D,
        (int)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
        (const char *)(unsigned int)ValueW);
    }
    else
    {
      `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = (_DWORD)pvData == 1;
    }
    InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 0, 0LL);
  }
  return 0LL;
}
