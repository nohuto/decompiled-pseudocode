/*
 * XREFs of sub_1402E1D48 @ 0x1402E1D48
 * Callers:
 *     sub_1402E1704 @ 0x1402E1704 (sub_1402E1704.c)
 *     sub_14062CDF0 @ 0x14062CDF0 (sub_14062CDF0.c)
 *     sub_14079885C @ 0x14079885C (sub_14079885C.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

char __fastcall sub_1402E1D48(__int64 a1, char a2)
{
  unsigned int v4; // ecx
  ULONG v5; // r9d
  __int64 v6; // rdx
  unsigned int v7; // ecx

  if ( (*(_DWORD *)(a1 + 824) & 0x400) != 0 )
    return 0;
  if ( a2 || KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 9u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 0xAu) )
      return 0;
    v4 = *(_DWORD *)(a1 + 208);
    if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
      v4 *= 1000;
    v5 = 500;
    v6 = -10000LL * v4;
    v7 = v4 >> 2;
    if ( v7 < 0x1F4 )
      v5 = v7;
    KeSetCoalescableTimer((PKTIMER)(a1 + 504), (LARGE_INTEGER)v6, 0, v5, 0LL);
  }
  return 1;
}
