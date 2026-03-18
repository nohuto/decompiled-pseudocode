/*
 * XREFs of ?xxxHandleNoDockTargetToDockTargetMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@KAEBUtagRECT@@PEAK@Z @ 0x1C020D59C
 * Callers:
 *     ?xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F75C (-xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z @ 0x1C020AB64 (-MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C020AF14 (-SetCurrentHitTargetMonitor@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020AF98 (-SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxGetArrangeRectFromHitTarget@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020CCA4 (-xxxGetArrangeRectFromHitTarget@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTI.c)
 */

__int64 __fastcall xxxHandleNoDockTargetToDockTargetMove(
        __int64 a1,
        unsigned int a2,
        struct tagMONITOR *a3,
        int a4,
        _OWORD *a5,
        _DWORD *a6)
{
  int v7; // ecx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v7 = *(_DWORD *)(a1 + 200);
  v15 = 0LL;
  v16 = 0LL;
  if ( (v7 & 0x40000) == 0 )
  {
    CkptRestore(*(struct tagWND **)(a1 + 16), (struct tagRECT *)(a1 + 120));
    v7 = *(_DWORD *)(a1 + 200) | 0x40000;
    *(_DWORD *)(a1 + 200) = v7;
    if ( (v7 & 0x1000000) != 0 )
      *(_OWORD *)(a1 + 152) = *a5;
  }
  if ( (v7 & 0x2000000) == 0 )
  {
    result = MoveRect(a1, a4, 0);
    if ( !(_DWORD)result )
      return result;
    *a6 |= 4u;
    *(_DWORD *)(a1 + 200) |= 0x2000000u;
  }
  ThreadLock((__int64)a3, (__int64 *)&v15);
  xxxGetArrangeRectFromHitTarget(a1, (__int64)a3, a2);
  if ( a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  else
    SetDragInToDragOutThreshold((struct MOVESIZEDATA *)a1);
  MakeArrangedStateObservable((const struct MOVESIZEDATA *)a1);
  *(_DWORD *)(a1 + 240) = a2;
  SetCurrentHitTargetMonitor((struct MOVESIZEDATA *)a1, a3, 1);
  ThreadUnlock1(v13, v12, v14);
  return 1LL;
}
