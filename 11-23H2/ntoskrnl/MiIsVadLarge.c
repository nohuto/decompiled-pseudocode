/*
 * XREFs of MiIsVadLarge @ 0x14028A6C4
 * Callers:
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 *     MiRemoveVadCharges @ 0x1406FB650 (MiRemoveVadCharges.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A51F4 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x200000) == 0 )
    return HIBYTE(*(_DWORD *)(a1 + 64)) & 1;
  return (v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000;
}
