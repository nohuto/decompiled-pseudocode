/*
 * XREFs of sub_140232FC4 @ 0x140232FC4
 * Callers:
 *     sub_140232EF0 @ 0x140232EF0 (sub_140232EF0.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406AB320 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     sub_140233054 @ 0x140233054 (sub_140233054.c)
 *     sub_1406AB544 @ 0x1406AB544 (sub_1406AB544.c)
 */

char __fastcall sub_140232FC4(__int64 a1, __int64 *a2, __int64 a3)
{
  bool v5; // zf
  __int64 *v7; // rax
  __int64 **v8; // rcx

  if ( (*((_BYTE *)a2 + 22) & 1) != 0 )
    return 0;
  v5 = (*((_WORD *)a2 + 10))-- == 1;
  if ( !v5 )
    return 0;
  if ( a2 != (__int64 *)(a1 + 16) )
  {
    v7 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v8 = (__int64 **)a2[1], *v8 != a2) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    sub_1406AB544(a2);
    if ( (*(_BYTE *)(a1 + 38) & 1) != 0 )
      return 0;
    v5 = (*(_WORD *)(a1 + 36))-- == 1;
    if ( !v5 )
      return 0;
  }
  sub_140233054(a1, a3);
  return 1;
}
