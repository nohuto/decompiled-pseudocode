/*
 * XREFs of sub_1405D8820 @ 0x1405D8820
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 */

char sub_1405D8820()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&dword_140D00BC0, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = sub_14036AAC4((__int64)&unk_140C1F8C8, DelayedWorkQueue);
  return v0;
}
