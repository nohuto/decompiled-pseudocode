/*
 * XREFs of ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067ED90
 * Callers:
 *     ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067F670 (-CalculateSnapRegion@TopBottomSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUS.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x180670BEC (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x180672A68 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x180676E98 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 */

__int64 __fastcall DefaultSnapLayout::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r10
  SnapRectHelpers *v8; // r8
  int v9; // eax
  char v10; // dl
  bool v11; // zf
  int RectForRegion; // eax
  int v14; // eax
  int v15; // [rsp+20h] [rbp-41h]
  int v16[4]; // [rsp+30h] [rbp-31h] BYREF
  RECT rcSrc; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v18[4]; // [rsp+50h] [rbp-11h] BYREF
  __int128 v19; // [rsp+60h] [rbp-1h]
  __int128 v20; // [rsp+70h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)&rcSrc, *(_DWORD *)(a5 + 32), (int *)(a4 + 8));
  if ( *(_BYTE *)(a5 + 36) && a3 && *(_QWORD *)(v7 + 56) )
  {
    v8 = *(SnapRectHelpers **)v7;
    v9 = (*(_DWORD *)(a5 + 24) >> 1) & 1;
    *(RECT *)v16 = rcSrc;
    v10 = v9 | 2;
    v11 = *(_BYTE *)(a5 + 28) == 0;
    v19 = 0LL;
    if ( v11 )
      v10 = v9;
    v20 = 0LL;
    RectForRegion = SnapLayoutHelpers::GetRectForRegion(
                      &rcSrc,
                      v10,
                      v8,
                      (void *)(v7 + 48),
                      (struct tagRECT *)v16,
                      (__int64)v18);
    if ( RectForRegion >= 0 )
    {
      v14 = CSnapComponentTelemetry::SendSnapFillTypeEvent(v18, *(_DWORD *)(a5 + 32), a3);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x40,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)(unsigned int)v14);
      if ( v16[0] >= v16[2] || v16[1] >= v16[3] )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x42,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)0x8000FFFFLL,
          v15);
      rcSrc = *(RECT *)v16;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)(unsigned int)RectForRegion);
    }
  }
  *(_QWORD *)(a2 + 20) = 0LL;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_BYTE *)a2 = 0;
  CopyRect((LPRECT)(a2 + 4), &rcSrc);
  CopyRect((LPRECT)(a2 + 20), (const RECT *)(a5 + 40));
  return a2;
}
