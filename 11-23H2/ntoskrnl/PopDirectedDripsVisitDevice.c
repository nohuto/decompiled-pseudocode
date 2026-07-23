/*
 * XREFs of PopDirectedDripsVisitDevice @ 0x1409A0410
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x14099FD50 (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x1409A009C (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsMarkDfxDevice @ 0x1409A02E4 (PopDirectedDripsMarkDfxDevice.c)
 *     PopDirectedDripsVisitPs4Device @ 0x1409A0464 (PopDirectedDripsVisitPs4Device.c)
 * Callees:
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x14099F370 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 */

signed __int32 __fastcall PopDirectedDripsVisitDevice(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // r10
  _QWORD *v5; // rax

  v4 = (_QWORD *)(a2 + 16);
  if ( (_QWORD *)*v4 == v4 )
  {
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 32);
    v5 = *(_QWORD **)(a1 + 8);
    if ( *v5 != a1 )
      __fastfail(3u);
    *v4 = a1;
    *(_QWORD *)(a2 + 24) = v5;
    *v5 = v4;
    *(_QWORD *)(a1 + 8) = v4;
  }
  return PopDirectedDripsDiagTraceBroadcastVisit(a2 - 728, a3, a4);
}
