/*
 * XREFs of sub_140A27790 @ 0x140A27790
 * Callers:
 *     sub_140A23D44 @ 0x140A23D44 (sub_140A23D44.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 *     sub_140A24D6C @ 0x140A24D6C (sub_140A24D6C.c)
 *     sub_140A25124 @ 0x140A25124 (sub_140A25124.c)
 *     sub_140A25D48 @ 0x140A25D48 (sub_140A25D48.c)
 *     sub_140A28530 @ 0x140A28530 (sub_140A28530.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077A710 @ 0x14077A710 (sub_14077A710.c)
 *     sub_140A279B4 @ 0x140A279B4 (sub_140A279B4.c)
 */

__int64 __fastcall sub_140A27790(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax

  v5 = sub_14077A710(a3);
  sub_140A279B4(a1, v6, v5);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return sub_14042A5E0(a1, a2);
  return result;
}
