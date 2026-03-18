/*
 * XREFs of GetJournallingQueue @ 0x1C005DF30
 * Callers:
 *     zzzSetDesktop @ 0x1C005DB40 (zzzSetDesktop.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C004DAB0 (PhkFirstGlobalValid.c)
 */

__int64 __fastcall GetJournallingQueue(__int64 a1)
{
  __int64 v2; // rbx
  __int64 GlobalValid; // rax

  if ( (*(_DWORD *)(a1 + 488) & 0x80u) != 0 )
    return 0LL;
  v2 = 0LL;
  if ( !*(_QWORD *)(a1 + 456) )
    return 0LL;
  GlobalValid = PhkFirstGlobalValid(a1, 1);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 432LL);
  GlobalValid = PhkFirstGlobalValid(a1, 0);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 432LL);
  return v2;
}
