/*
 * XREFs of sub_1409D7C2C @ 0x1409D7C2C
 * Callers:
 *     sub_1409D7F04 @ 0x1409D7F04 (sub_1409D7F04.c)
 *     sub_1409D8074 @ 0x1409D8074 (sub_1409D8074.c)
 *     sub_1409D82D4 @ 0x1409D82D4 (sub_1409D82D4.c)
 *     sub_1409D8588 @ 0x1409D8588 (sub_1409D8588.c)
 *     sub_1409D8AB0 @ 0x1409D8AB0 (sub_1409D8AB0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

__int64 __fastcall sub_1409D7C2C(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi

  v3 = 0LL;
  v4 = a1 + 32LL * (a2 & 0xF);
  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(v4 + 8)) )
  {
    if ( (*(_DWORD *)(v4 + 24) & 0xFFF) == a2 >> 4 )
      return *(_QWORD *)v4;
    else
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(v4 + 8));
  }
  return v3;
}
