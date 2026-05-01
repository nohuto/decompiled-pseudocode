/*
 * XREFs of ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x1805A3200
 * Callers:
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805A1DC4 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1805A33B4 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1805A33B4.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1805A1A04 (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 */

__int64 __fastcall SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(int *a1, int *a2, __int64 a3)
{
  int v3; // esi
  unsigned int v4; // edi
  int v5; // r11d
  __int64 v6; // r9
  int v7; // r10d
  SnapLayoutHelpers *v8; // rcx
  unsigned int v9; // ebx
  int v10; // r13d
  int v11; // r12d
  __int64 v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // ebp
  unsigned int v15; // r14d
  int v16; // esi

  v3 = *a1;
  v4 = 0;
  v5 = a1[2];
  if ( *a1 < v5 )
  {
    v6 = (unsigned int)a1[1];
    v7 = a1[3];
    if ( (int)v6 < v7 )
    {
      v8 = (SnapLayoutHelpers *)(unsigned int)a2[1];
      v9 = 2 * a3;
      v10 = *a2;
      v11 = a2[2];
      v12 = (unsigned int)a2[3];
      v13 = a3 + v3 - v10;
      v14 = a3 + v5 - v11;
      v15 = a3 + v7 - v12;
      if ( (int)a3 + (int)v6 - (int)v8 > (unsigned int)(2 * a3) )
      {
        if ( v15 > v9 )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
            1u,
            a3,
            v6);
          if ( v13 <= v9 && v14 <= v9 )
            return 10;
        }
        else
        {
          if ( v13 <= v9 && v14 <= v9 && (int)v6 > (int)v8 )
            return 6;
          if ( v3 >= v10 && v14 <= v9 && (int)v6 > (int)v8 )
          {
            v16 = 5;
            return v16 & (unsigned int)-SnapLayoutHelpers::AreQuadrantsEnabled(v8, v12, a3, v6);
          }
          if ( v13 <= v9 && v5 < v11 && (int)v6 > (int)v8 )
          {
            v16 = 7;
            return v16 & (unsigned int)-SnapLayoutHelpers::AreQuadrantsEnabled(v8, v12, a3, v6);
          }
        }
      }
      else
      {
        if ( v13 <= v9 )
        {
          if ( v14 <= v9 && v7 < (int)v12 )
            return 2;
          if ( v5 < v11 && v7 < (int)v12 && v15 > v9 )
          {
            v16 = 1;
            return v16 & (unsigned int)-SnapLayoutHelpers::AreQuadrantsEnabled(v8, v12, a3, v6);
          }
        }
        if ( v3 > v10 && v14 <= v9 && v7 < (int)v12 && v15 > v9 )
        {
          v16 = 3;
          return v16 & (unsigned int)-SnapLayoutHelpers::AreQuadrantsEnabled(v8, v12, a3, v6);
        }
        if ( v13 > v9 || v5 >= v11 || v15 > v9 )
        {
          if ( v3 <= v10 || v14 > v9 || v15 > v9 )
          {
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
              `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
              1u,
              a3,
              v6);
            if ( v15 <= v9 && v14 > v9 && v13 > v9 )
              return 9;
          }
          else
          {
            return 4;
          }
        }
        else
        {
          return 8;
        }
      }
    }
  }
  return v4;
}
