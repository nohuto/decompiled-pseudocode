/*
 * XREFs of sub_18001F3E0 @ 0x18001F3E0
 * Callers:
 *     sub_18002E0A8 @ 0x18002E0A8 (sub_18002E0A8.c)
 * Callees:
 *     sub_18001F40C @ 0x18001F40C (sub_18001F40C.c)
 */

__int64 __fastcall sub_18001F3E0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  sub_18001F40C(a1, a2, v3);
  return a1;
}
