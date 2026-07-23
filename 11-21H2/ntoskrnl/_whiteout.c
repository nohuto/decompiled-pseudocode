/*
 * XREFs of _whiteout @ 0x1403EA090
 * Callers:
 *     sub_1403EA0E8 @ 0x1403EA0E8 (sub_1403EA0E8.c)
 * Callees:
 *     sub_1403E3CE0 @ 0x1403E3CE0 (sub_1403E3CE0.c)
 *     sub_1403EAB5C @ 0x1403EAB5C (sub_1403EAB5C.c)
 */

__int64 __fastcall whiteout(_DWORD *a1, __int64 a2)
{
  unsigned __int16 v4; // bx

  do
  {
    ++*a1;
    v4 = sub_1403EAB5C(a2, a2);
  }
  while ( v4 != 0xFFFF && (unsigned int)sub_1403E3CE0(v4, 8) );
  return v4;
}
