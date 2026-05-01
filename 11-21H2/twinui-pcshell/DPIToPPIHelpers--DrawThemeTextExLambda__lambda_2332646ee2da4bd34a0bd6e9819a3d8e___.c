/*
 * XREFs of DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2332646ee2da4bd34a0bd6e9819a3d8e___ @ 0x1805F7FD0
 * Callers:
 *     ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x1805F82B8 (-DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEA.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

HRESULT __fastcall DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2332646ee2da4bd34a0bd6e9819a3d8e___(
        HTHEME hTheme,
        HDC hdc,
        __int64 a3,
        int a4,
        LPCWSTR pszText,
        int cchText,
        DWORD dwTextFlags,
        LPRECT pRect,
        DTTOPTS *a9,
        LPARAM a10)
{
  DTTOPTS *pOptions; // r8
  _DWORD v15[20]; // [rsp+50h] [rbp-58h] BYREF

  memset_0(v15, 0, 0x48uLL);
  pOptions = (DTTOPTS *)v15;
  v15[0] = 72;
  if ( a9 )
    pOptions = a9;
  pOptions->dwFlags |= 0x3000u;
  pOptions->pfnDrawTextCallback = (DTT_CALLBACK_PROC)CCLambdaAdapter<int (*)(HDC__ *,unsigned short *,int,tagRECT *,unsigned int,__int64),6>::Adapt<_lambda_2332646ee2da4bd34a0bd6e9819a3d8e_>;
  pOptions->lParam = a10;
  return DrawThemeTextEx(hTheme, hdc, 14, a4, pszText, cchText, dwTextFlags, pRect, pOptions);
}
