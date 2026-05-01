/*
 * XREFs of ?ComputeDefaultSafetyRectForRegion@CustomDragout@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU34@1HHHH@Z @ 0x180670848
 * Callers:
 *     ?GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA?AU?$pair@W4SnapRegion@@UCRect@Geometry@@@std@@AEBUCRect@Geometry@@0AEBUtagPOINT@@_N@Z @ 0x1806611A8 (-GetSnapRegionAndSafetyRectForPoint@CShellSnapComponent@@AEAA-AU-$pair@W4SnapRegion@@UCRect@Geom.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall SnapLayoutHelpers::CustomDragout::ComputeDefaultSafetyRectForRegion(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v9 = a2 - 1;
  if ( !v9 )
  {
    *(_DWORD *)(a1 + 4) = a3[1];
    *(_DWORD *)a1 = *a3;
    *(_DWORD *)(a1 + 12) = a8 + a4[1];
    goto LABEL_21;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_DWORD *)(a1 + 4) = a3[1];
    *(_DWORD *)a1 = a7 + *a4;
    *(_DWORD *)(a1 + 12) = a8 + a4[1];
    goto LABEL_18;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *(_DWORD *)(a1 + 4) = a3[1];
    *(_DWORD *)a1 = a4[2] - a6;
    *(_DWORD *)(a1 + 12) = a8 + a4[1];
    goto LABEL_16;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v18 = a8 + a4[1];
    *(_DWORD *)a1 = a4[2] - a6;
    *(_DWORD *)(a1 + 12) = a4[3] - a5;
    *(_DWORD *)(a1 + 4) = v18;
LABEL_16:
    v19 = a3[2];
LABEL_19:
    *(_DWORD *)(a1 + 8) = v19;
    return a1;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    *(_DWORD *)(a1 + 4) = a4[3] - a5;
    *(_DWORD *)a1 = a4[2] - a6;
    *(_DWORD *)(a1 + 12) = a3[3];
    *(_DWORD *)(a1 + 8) = a3[2];
    return a1;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    *(_DWORD *)(a1 + 4) = a4[3] - a5;
    v17 = a3[3];
    *(_DWORD *)a1 = a7 + *a4;
    *(_DWORD *)(a1 + 12) = v17;
LABEL_18:
    v19 = a4[2] - a6;
    goto LABEL_19;
  }
  v15 = (unsigned int)(v14 - 1);
  if ( !(_DWORD)v15 )
  {
    *(_DWORD *)(a1 + 4) = a4[3] - a5;
    *(_DWORD *)a1 = *a3;
    *(_DWORD *)(a1 + 12) = a3[3];
    goto LABEL_21;
  }
  if ( (_DWORD)v15 == 1 )
  {
    v16 = a8 + a4[1];
    *(_DWORD *)a1 = *a3;
    *(_DWORD *)(a1 + 12) = a4[3] - a5;
    *(_DWORD *)(a1 + 4) = v16;
LABEL_21:
    *(_DWORD *)(a1 + 8) = a7 + *a4;
    return a1;
  }
  MicrosoftTelemetryAssertTriggeredNoArgs(a1, v15);
  return a1;
}
