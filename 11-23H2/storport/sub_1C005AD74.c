/*
 * XREFs of sub_1C005AD74 @ 0x1C005AD74
 * Callers:
 *     sub_1C00228E0 @ 0x1C00228E0 (sub_1C00228E0.c)
 * Callees:
 *     sub_1C005ADDC @ 0x1C005ADDC (sub_1C005ADDC.c)
 *     sub_1C005AE70 @ 0x1C005AE70 (sub_1C005AE70.c)
 */

__int64 __fastcall sub_1C005AD74(__int64 a1, __int64 a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  char v6; // al

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = sub_1C005ADDC();
  if ( v4 == -1073741637 )
    v4 = sub_1C005AE70(a1, a2, 3221225659LL);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v6 = *(_BYTE *)(v5 + 109);
    if ( v6 >= 0 )
      *(_BYTE *)(v5 + 109) = v6 | 0x80;
  }
  return (unsigned int)v4;
}
