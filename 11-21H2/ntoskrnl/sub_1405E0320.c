/*
 * XREFs of sub_1405E0320 @ 0x1405E0320
 * Callers:
 *     sub_14085DE38 @ 0x14085DE38 (sub_14085DE38.c)
 * Callees:
 *     sub_140243794 @ 0x140243794 (sub_140243794.c)
 *     sub_14024393C @ 0x14024393C (sub_14024393C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1405E0320(unsigned int a1)
{
  int *v2; // rbp
  char v3; // bl
  KIRQL v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  v2 = &dword_140C1BF00[14 * a1];
  sub_14024393C((__int64)v2, &v5);
  v3 = sub_14042A5E0(a1, 0LL);
  sub_140243794((__int64)v2, v5);
  return v3;
}
