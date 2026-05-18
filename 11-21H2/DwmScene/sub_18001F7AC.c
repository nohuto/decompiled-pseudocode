/*
 * XREFs of sub_18001F7AC @ 0x18001F7AC
 * Callers:
 *     sub_1800E62C8 @ 0x1800E62C8 (sub_1800E62C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F7AC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  return sub_18001F7C8(a1, a2, v2);
}
