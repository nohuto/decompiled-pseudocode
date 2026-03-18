/*
 * XREFs of ?MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z @ 0x1C020AB64
 * Callers:
 *     ?HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagRECT@@PEAK@Z @ 0x1C020A088 (-HandleMovingAwayFromDockTargetMove@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@KUtagPOINT@@AEBUtagREC.c)
 *     ?HandleSameDockTargetSameMonitorMove@@YAHPEAUMOVESIZEDATA@@KH@Z @ 0x1C020A514 (-HandleSameDockTargetSameMonitorMove@@YAHPEAUMOVESIZEDATA@@KH@Z.c)
 *     ?xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@UtagPOINT@@KPEAK@Z @ 0x1C020D334 (-xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtag.c)
 *     ?xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@KAEBUtagRECT@@PEAK@Z @ 0x1C020D59C (-xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUt.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F75C (-xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C020F9AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01DFFD4 (TransformRegionBetweenCoordinateSpaces.c)
 */

__int64 __fastcall MoveRect(__int64 a1, int a2, int a3)
{
  int *v3; // r14
  int v4; // edi
  int v6; // ebp
  int v7; // r8d
  int v8; // r8d
  int v10; // edi
  INT v11; // ebx
  int v12; // ebp
  int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ebx
  unsigned int v18; // edi
  __int128 v19; // [rsp+20h] [rbp-38h]
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v3 = (int *)(a1 + 40);
  v4 = (__int16)a2;
  v6 = SHIWORD(a2);
  v19 = *(_OWORD *)(a1 + 40);
  v20 = 0LL;
  if ( !a3 )
  {
    v12 = SHIWORD(a2) - *(_DWORD *)(a1 + 44);
    goto LABEL_10;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    v12 = SHIWORD(a2) - *(_DWORD *)(a1 + 44) - 1;
    v13 = (__int16)a2 - (*(_DWORD *)(a1 + 48) - *v3) / 2 - *v3;
LABEL_11:
    LODWORD(v19) = v13 + v19;
    DWORD2(v19) += v13;
    HIDWORD(v19) += v12;
    DWORD1(v19) += v12;
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = EngMulDiv(*(_DWORD *)(a1 + 48) - *v3, *(_DWORD *)(a1 + 248), *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 24));
    v12 = v6
        - *(_DWORD *)(a1 + 44)
        - EngMulDiv(
            *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 44),
            *(_DWORD *)(a1 + 252),
            *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 28));
    v4 -= v11;
LABEL_10:
    v13 = v4 - *v3;
    goto LABEL_11;
  }
  if ( v8 != 1 )
    return 0LL;
  v10 = (__int16)a2 - *v3;
  LODWORD(v19) = v10 + v19;
  DWORD2(v19) += v10;
LABEL_12:
  v14 = *(_DWORD *)(a1 + 200);
  if ( (v14 & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 72) = v19;
  else
    *(_OWORD *)v3 = v19;
  if ( (v14 & 0x40) != 0 )
    return 1LL;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD *)(v15 + 104);
  v21 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 168LL);
  if ( !v21 )
    return IntersectRect(&v20, v3, (int *)(a1 + 88));
  v17 = TransformRegionBetweenCoordinateSpaces(v15, v16, &v21);
  v18 = GreRectInRegion(v21, v3);
  if ( v17 )
    GreDeleteObject(v21);
  return v18;
}
