/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x1403625E4
 * Callers:
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     MiWaitForRotateToComplete @ 0x140634154 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1406421F0 (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned __int8 v6; // dl

  v5 = *(_QWORD *)a1;
  v6 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
  {
    MiUnlockWorkingSetExclusive(v5, v6, a3, a4);
    *(_BYTE *)(a1 + 13) &= ~1u;
  }
  else
  {
    MiUnlockWorkingSetShared(v5, v6);
  }
}
