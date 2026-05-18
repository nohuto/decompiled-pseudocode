/*
 * XREFs of sub_180029794 @ 0x180029794
 * Callers:
 *     sub_1800E0710 @ 0x1800E0710 (sub_1800E0710.c)
 * Callees:
 *     sub_18001206C @ 0x18001206C (sub_18001206C.c)
 *     sub_180027444 @ 0x180027444 (sub_180027444.c)
 *     sub_180029894 @ 0x180029894 (sub_180029894.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_180029794(unsigned int a1)
{
  const struct stdext::exception *v1; // rax
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v3[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_OWORD *)sub_180029894(v3, a1);
  v1 = (const struct stdext::exception *)sub_180027444((__int64)v4, &v2);
  sub_18001206C(v1);
}
