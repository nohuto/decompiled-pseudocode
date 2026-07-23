/*
 * XREFs of KiInsertNonMaxOverQuotaScb @ 0x140308D7C
 * Callers:
 *     KiAddThreadToScbQueue @ 0x140305CB0 (KiAddThreadToScbQueue.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14030889C (KiTransitionSchedulingGroupGeneration.c)
 * Callees:
 *     KiResortScbQueue @ 0x140305990 (KiResortScbQueue.c)
 *     KiInsertSchedulingGroupQueue @ 0x140308DDC (KiInsertSchedulingGroupQueue.c)
 */

void __fastcall KiInsertNonMaxOverQuotaScb(__int64 a1, _RTL_RB_TREE *a2, __int64 a3)
{
  char v3; // si
  char v6; // al

  v3 = a3;
  do
  {
    v6 = *(_BYTE *)(a1 + 112);
    if ( (v6 & 2) != 0 )
      break;
    if ( (v6 & 1) != 0 )
    {
      KiResortScbQueue(a2, a1, 0);
    }
    else
    {
      LOBYTE(a3) = v3;
      KiInsertSchedulingGroupQueue(a2, a1, a3);
    }
    a1 = *(_QWORD *)(a1 + 408);
  }
  while ( a1 );
}
