/*
 * XREFs of sub_14023E500 @ 0x14023E500
 * Callers:
 *     <none>
 * Callees:
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 */

__int64 __fastcall sub_14023E500(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    sub_14032F1B0(v1);
  return 0LL;
}
