/*
 * XREFs of sub_14050918C @ 0x14050918C
 * Callers:
 *     sub_1403AEA08 @ 0x1403AEA08 (sub_1403AEA08.c)
 *     sub_140507ED8 @ 0x140507ED8 (sub_140507ED8.c)
 *     sub_14050C264 @ 0x14050C264 (sub_14050C264.c)
 *     sub_14050D048 @ 0x14050D048 (sub_14050D048.c)
 * Callees:
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 */

__int64 __fastcall sub_14050918C(unsigned int *a1, _DWORD *a2)
{
  _QWORD *v3; // rax
  int v4; // ecx

  *a2 = -1;
  v3 = sub_1402520D4(a1);
  if ( !v3 )
    return 3221225485LL;
  v4 = *((_DWORD *)v3 + 7);
  if ( v4 == -1 )
    return 3221225485LL;
  *a2 = v4;
  return 0LL;
}
