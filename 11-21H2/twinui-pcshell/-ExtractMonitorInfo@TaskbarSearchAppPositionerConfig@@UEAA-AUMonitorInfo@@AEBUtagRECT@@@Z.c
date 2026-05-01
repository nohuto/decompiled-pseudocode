/*
 * XREFs of ?ExtractMonitorInfo@TaskbarSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x1800F9B90
 * Callers:
 *     <none>
 * Callees:
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1801A4914 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarSearchAppPositionerConfig::ExtractMonitorInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v8[104]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+90h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v9 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = SearchAppPositionerHelpers::ExtractMonitorInfo(v8, a3, &v9);
  *(_OWORD *)a2 = *(_OWORD *)v6;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v6 + 16);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(v6 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(v6 + 48);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(v6 + 64);
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(v6 + 80);
  return a2;
}
