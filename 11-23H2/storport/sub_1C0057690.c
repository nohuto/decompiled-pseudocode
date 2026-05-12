/*
 * XREFs of sub_1C0057690 @ 0x1C0057690
 * Callers:
 *     sub_1C0059230 @ 0x1C0059230 (sub_1C0059230.c)
 *     sub_1C00592E8 @ 0x1C00592E8 (sub_1C00592E8.c)
 *     sub_1C0059468 @ 0x1C0059468 (sub_1C0059468.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0057690(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 3221225659LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 3221225485LL;
  v3 = v2 - 1;
  if ( v3 && (unsigned int)(v3 - 1) >= 2 )
    return 3221225473LL;
  else
    return 3221225860LL;
}
