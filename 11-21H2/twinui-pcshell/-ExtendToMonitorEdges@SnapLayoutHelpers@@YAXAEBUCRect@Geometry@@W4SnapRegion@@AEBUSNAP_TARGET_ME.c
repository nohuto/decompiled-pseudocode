/*
 * XREFs of ?ExtendToMonitorEdges@SnapLayoutHelpers@@YAXAEBUCRect@Geometry@@W4SnapRegion@@AEBUSNAP_TARGET_METRICS@1@PEAU23@@Z @ 0x1805A3858
 * Callers:
 *     ?ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@_NPEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A20F8 (-ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PE.c)
 * Callees:
 *     ?HasCornerTargets@SNAP_TARGET_METRICS@SnapLayoutHelpers@@QEBA_NXZ @ 0x1805A6960 (-HasCornerTargets@SNAP_TARGET_METRICS@SnapLayoutHelpers@@QEBA_NXZ.c)
 *     ?HasHorizontalTargets@SNAP_TARGET_METRICS@SnapLayoutHelpers@@QEBA_NXZ @ 0x1805A6990 (-HasHorizontalTargets@SNAP_TARGET_METRICS@SnapLayoutHelpers@@QEBA_NXZ.c)
 *     ?HasVerticalTargets@SNAP_TARGET_METRICS@SnapLayoutHelpers@@QEBA_NXZ @ 0x1805A6AE0 (-HasVerticalTargets@SNAP_TARGET_METRICS@SnapLayoutHelpers@@QEBA_NXZ.c)
 */

void __fastcall SnapLayoutHelpers::ExtendToMonitorEdges(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // r8
  _DWORD *v8; // r9
  _DWORD *v9; // r11
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // r11
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  bool HasCornerTargets; // al
  _DWORD *v22; // r9
  _DWORD *v23; // r11
  bool HasVerticalTargets; // al

  switch ( a2 )
  {
    case 1:
      goto LABEL_43;
    case 2:
      if ( SnapLayoutHelpers::SNAP_TARGET_METRICS::HasHorizontalTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3) )
        *(_DWORD *)(v10 + 4) = *(_DWORD *)(v11 + 4);
      goto LABEL_15;
    case 3:
LABEL_43:
      if ( SnapLayoutHelpers::SNAP_TARGET_METRICS::HasCornerTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3) )
        *(_DWORD *)(v12 + 4) = *(_DWORD *)(v13 + 4);
      break;
    default:
      if ( a2 != 4 )
      {
        switch ( a2 )
        {
          case 5:
            goto LABEL_19;
          case 6:
            if ( SnapLayoutHelpers::SNAP_TARGET_METRICS::HasHorizontalTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3) )
              *(_DWORD *)(v5 + 12) = *(_DWORD *)(v6 + 12);
            goto LABEL_15;
          case 7:
LABEL_19:
            if ( !SnapLayoutHelpers::SNAP_TARGET_METRICS::HasCornerTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3) )
              goto LABEL_25;
            goto LABEL_20;
        }
        if ( a2 != 8 )
          break;
      }
      if ( SnapLayoutHelpers::SNAP_TARGET_METRICS::HasVerticalTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3)
        && (!*(_DWORD *)(a3 + 16) || *(float *)(a3 + 24) == 0.0) )
      {
        *(_DWORD *)(v3 + 4) = *(_DWORD *)(v4 + 4);
LABEL_20:
        *(_DWORD *)(v3 + 12) = *(_DWORD *)(v4 + 12);
      }
      break;
  }
LABEL_25:
  v14 = a2 - 1;
  if ( !v14 )
    goto LABEL_38;
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        HasVerticalTargets = SnapLayoutHelpers::SNAP_TARGET_METRICS::HasVerticalTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3);
        goto LABEL_36;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 != 1 )
              return;
            HasCornerTargets = SnapLayoutHelpers::SNAP_TARGET_METRICS::HasVerticalTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3);
            goto LABEL_39;
          }
LABEL_38:
          HasCornerTargets = SnapLayoutHelpers::SNAP_TARGET_METRICS::HasCornerTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3);
LABEL_39:
          if ( HasCornerTargets )
            *v22 = *v23;
          return;
        }
        goto LABEL_15;
      }
    }
    HasVerticalTargets = SnapLayoutHelpers::SNAP_TARGET_METRICS::HasCornerTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3);
LABEL_36:
    if ( !HasVerticalTargets )
      return;
    goto LABEL_37;
  }
LABEL_15:
  if ( SnapLayoutHelpers::SNAP_TARGET_METRICS::HasHorizontalTargets((SnapLayoutHelpers::SNAP_TARGET_METRICS *)a3)
    && (!*(_DWORD *)(v7 + 32) || *(float *)(v7 + 40) == 0.0) )
  {
    *v8 = *v9;
LABEL_37:
    v8[2] = v9[2];
  }
}
