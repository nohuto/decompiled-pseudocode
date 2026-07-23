/*
 * XREFs of sub_140881BB6 @ 0x140881BB6
 * Callers:
 *     sub_140881750 @ 0x140881750 (sub_140881750.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 */

__int64 __fastcall sub_140881BB6(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rbx

  v1 = sub_140287970(a1);
  v2 = v1;
  if ( !*(_QWORD *)(v1 + 64) )
    return 0LL;
  v3 = sub_140281750(v1);
  v4 = *(_QWORD *)(v3 + 40);
  sub_140280D08(v2, v3);
  return v4;
}
