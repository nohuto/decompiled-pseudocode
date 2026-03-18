/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800D3C3C
 * Callers:
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@A@EAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180108F30 (-GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@A@EAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180109F30 (-GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18010A550 (-GetPresentStatisticsDWM@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::GetPresentStatisticsDWM(
        CLegacySwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this - 41);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v2 + 160LL))(v2, a2);
    v8 = v3;
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180347570, 3LL, v3, 0x1F8u);
    TranslateDXGIorD3DErrorInContext(v5, 0, &v8);
    return v8;
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_180347570, 3LL, -2003304307, 0x200u);
  }
  return v6;
}
