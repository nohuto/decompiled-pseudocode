/*
 * XREFs of sub_1405D6A80 @ 0x1405D6A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 */

char __fastcall sub_1405D6A80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char result; // al

  if ( a1 == a2 + 112 )
  {
    v2 = 248LL;
  }
  else
  {
    result = a2 + 120;
    if ( a1 != a2 + 376 )
      return result;
    v2 = 512LL;
  }
  return sub_14036AAC4(v2 + a2, DelayedWorkQueue);
}
