/*
 * XREFs of sub_14023548C @ 0x14023548C
 * Callers:
 *     sub_140235054 @ 0x140235054 (sub_140235054.c)
 *     sub_140235150 @ 0x140235150 (sub_140235150.c)
 *     sub_1402353E4 @ 0x1402353E4 (sub_1402353E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023548C(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 - 3;
  if ( !v1 )
    return 4LL;
  if ( (unsigned __int64)(v1 - 1) < 2 )
    return 2LL;
  return 0xFFFFFFFFLL;
}
