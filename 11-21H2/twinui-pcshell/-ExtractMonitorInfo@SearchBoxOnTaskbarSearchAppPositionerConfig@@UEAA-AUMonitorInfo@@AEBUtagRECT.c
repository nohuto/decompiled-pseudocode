/*
 * XREFs of ?ExtractMonitorInfo@SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x1801A5350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1801A4914 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::ExtractMonitorInfo(
        __int64 a1,
        __int64 a2,
        const RECT *a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _BYTE v11[104]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF

  v12 = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v5 = SearchAppPositionerHelpers::ExtractMonitorInfo((__int64)v11, a3, &v12);
  v6 = *(_OWORD *)(v5 + 16);
  *(_OWORD *)a2 = *(_OWORD *)v5;
  v7 = *(_OWORD *)(v5 + 32);
  *(_OWORD *)(a2 + 16) = v6;
  v8 = *(_OWORD *)(v5 + 48);
  *(_OWORD *)(a2 + 32) = v7;
  v9 = *(_OWORD *)(v5 + 64);
  LODWORD(v5) = *(_DWORD *)(v5 + 80);
  *(_OWORD *)(a2 + 48) = v8;
  *(_OWORD *)(a2 + 64) = v9;
  *(_DWORD *)(a2 + 80) = v5;
  return a2;
}
