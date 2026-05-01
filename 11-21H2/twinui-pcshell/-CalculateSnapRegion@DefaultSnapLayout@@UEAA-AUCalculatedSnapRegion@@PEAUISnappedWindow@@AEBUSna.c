/*
 * XREFs of ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805ABEB0
 * Callers:
 *     ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805AC930 (-CalculateSnapRegion@TopBottomSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUS.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x180595A30 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x1805A26E0 (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@2@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@2@@Z @ 0x1805A4E64 (-GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@.c)
 */

__int64 __fastcall DefaultSnapLayout::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r10
  SnapLayoutHelpers *v8; // r8
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
    v8 = *(SnapLayoutHelpers **)v7;
    v9 = (*(_DWORD *)(a5 + 24) >> 1) & 1;
    *(RECT *)v16 = rcSrc;
    v10 = v9 | 2;
    v11 = *(_BYTE *)(a5 + 28) == 0;
    v19 = 0LL;
    if ( v11 )
      v10 = v9;
    v20 = 0LL;
    RectForRegion = SnapLayoutHelpers::AdvancedSmartFill::GetRectForRegion(
                      &rcSrc,
                      v10,
                      v8,
                      (__int64 **)(v7 + 48),
                      (struct tagRECT *)v16,
                      (__int64)v18);
    if ( RectForRegion >= 0 )
    {
      v14 = CSnapComponentTelemetry::SendSnapFillTypeEvent(v18, *(_DWORD *)(a5 + 32), a3);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x42,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)(unsigned int)v14);
      if ( v16[0] >= v16[2] || v16[1] >= v16[3] )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x44,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)0x8000FFFFLL,
          v15);
      rcSrc = *(RECT *)v16;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
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
