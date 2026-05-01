/*
 * XREFs of ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x1805A26E0
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x18059F50C (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@_NPEAUtagRECT@@6PEAUSMART_FILL_OUTPUT@1@@Z @ 0x1805A568C (-GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PE.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805A9578 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805ABEB0 (-CalculateSnapRegion@DefaultSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSna.c)
 *     ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805AC930 (-CalculateSnapRegion@TopBottomSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutHelpers::DetermineDefaultSnapRegionRect(__int64 a1, int a2, int *a3)
{
  float v3; // xmm2_4
  float *v4; // rax
  float v5; // xmm3_4
  int v6; // edx
  float v7; // xmm0_4
  int v8; // eax
  int v9; // edx
  float v10; // xmm0_4
  int v11; // eax

  v3 = FLOAT_N1_0;
  v4 = (float *)&unk_1806EF280;
  v5 = FLOAT_N1_0;
  while ( *(_DWORD *)v4 != a2 )
  {
    v4 += 3;
    if ( v4 == (float *)"pcshell\\twinui\\snapcomponent\\lib\\snapmigrationhandler.cpp" )
      goto LABEL_6;
  }
  v3 = v4[1];
  v5 = v4[2];
LABEL_6:
  *(_OWORD *)a1 = *(_OWORD *)a3;
  if ( a2 <= 0 )
    return a1;
  if ( a2 <= 3 )
  {
    if ( a2 == 1 )
    {
      *(_DWORD *)(a1 + 8) = (int)(float)((float)((float)(a3[2] - *a3) * v3) + (float)*a3);
    }
    else if ( a2 == 3 )
    {
      *(_DWORD *)a1 = (int)(float)((float)a3[2] - (float)((float)(a3[2] - *a3) * v3));
    }
    v8 = (int)(float)((float)((float)(a3[3] - a3[1]) * v5) + (float)a3[1]);
    goto LABEL_28;
  }
  if ( a2 == 4 )
  {
    *(_DWORD *)a1 = (int)(float)((float)a3[2] - (float)((float)(a3[2] - *a3) * v3));
    return a1;
  }
  if ( a2 <= 7 )
  {
    if ( a2 == 5 )
    {
      *(_DWORD *)a1 = (int)(float)((float)a3[2] - (float)((float)(a3[2] - *a3) * v3));
    }
    else if ( a2 == 7 )
    {
      *(_DWORD *)(a1 + 8) = (int)(float)((float)((float)(a3[2] - *a3) * v3) + (float)*a3);
    }
    *(_DWORD *)(a1 + 4) = (int)(float)((float)a3[3] - (float)((float)(a3[3] - a3[1]) * v5));
    return a1;
  }
  switch ( a2 )
  {
    case 8:
      v11 = (int)(float)((float)((float)(a3[2] - *a3) * v3) + (float)*a3);
      goto LABEL_16;
    case 9:
      v9 = *a3;
      v10 = (float)(a3[2] - *a3) * v3;
      *(_DWORD *)a1 = *a3 + (int)v10;
      v11 = (int)v10 + v9 + (int)v10;
LABEL_16:
      *(_DWORD *)(a1 + 8) = v11;
      return a1;
    case 10:
      v6 = a3[1];
      v7 = (float)(a3[3] - v6) * v5;
      *(_DWORD *)(a1 + 4) = v6 + (int)v7;
      v8 = (int)v7 + v6 + (int)v7;
LABEL_28:
      *(_DWORD *)(a1 + 12) = v8;
      break;
  }
  return a1;
}
