/*
 * XREFs of sub_1402F4380 @ 0x1402F4380
 * Callers:
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402F3FE0 @ 0x1402F3FE0 (sub_1402F3FE0.c)
 *     sub_1402F42D4 @ 0x1402F42D4 (sub_1402F42D4.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402F4380(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // ax
  __int64 v3; // r9

  v2 = 0;
  if ( !*a2 )
    return 0LL;
  while ( 1 )
  {
    v3 = *(_QWORD *)&a2[4 * v2 + 4];
    if ( v3 )
    {
      if ( v2 != *(unsigned __int8 *)(a1 + 208) || v3 != *(_QWORD *)(a1 + 200) )
        break;
    }
    if ( ++v2 >= *a2 )
      return 0LL;
  }
  return 1LL;
}
