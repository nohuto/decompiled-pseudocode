/*
 * XREFs of sub_140765430 @ 0x140765430
 * Callers:
 *     sub_140560174 @ 0x140560174 (sub_140560174.c)
 *     sub_140749ECC @ 0x140749ECC (sub_140749ECC.c)
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 *     sub_140768EA8 @ 0x140768EA8 (sub_140768EA8.c)
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_1409457D0 @ 0x1409457D0 (sub_1409457D0.c)
 *     sub_140947864 @ 0x140947864 (sub_140947864.c)
 *     sub_14094F860 @ 0x14094F860 (sub_14094F860.c)
 *     sub_1409568C8 @ 0x1409568C8 (sub_1409568C8.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_14095B398 @ 0x14095B398 (sub_14095B398.c)
 *     sub_14095B48C @ 0x14095B48C (sub_14095B48C.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_140765370 @ 0x140765370 (sub_140765370.c)
 *     sub_14076729C @ 0x14076729C (sub_14076729C.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 */

__int64 __fastcall sub_140765430(__int64 a1, char a2, int a3, int a4)
{
  __int64 v7; // rbx
  int v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]

  v7 = a1;
  if ( !a1 )
    return 3221225486LL;
  LOBYTE(a1) = 1;
  sub_1407756F4(a1);
  sub_140765370(v7, v7, a2, 2, 0);
  ExReleaseResourceLite(&stru_140C46AC0);
  sub_140775698(0LL);
  return sub_14076729C(*(PVOID *)(v7 + 32), 1, a3, a4, 0LL, v9, v10, 0LL, 0LL, 0LL, 0LL);
}
