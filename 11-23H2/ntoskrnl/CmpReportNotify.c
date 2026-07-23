/*
 * XREFs of CmpReportNotify @ 0x1407D1E80
 * Callers:
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmpProcessLightWeightUOW @ 0x140A1CB5C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D53E0 (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 */

void __fastcall CmpReportNotify(__int64 a1, int a2, int a3, __int64 a4)
{
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
      a1 = *(_QWORD *)(a1 + 72);
    a1 = *(_QWORD *)(a1 + 72);
  }
  CmpStartKcbStackForTopLayerKcb((__int64)&v7, a1);
  CmpReportNotifyForKcbStack((__int64)&v7, a2, a3, a4);
  if ( *((_QWORD *)&v8 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v8 + 1));
}
