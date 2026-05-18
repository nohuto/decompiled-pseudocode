/*
 * XREFs of sub_180040BB8 @ 0x180040BB8
 * Callers:
 *     sub_1800405C8 @ 0x1800405C8 (sub_1800405C8.c)
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18003B0A8 @ 0x18003B0A8 (sub_18003B0A8.c)
 *     sub_18003F010 @ 0x18003F010 (sub_18003F010.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180040BB8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  sub_18002A404(a1 + 16);
  sub_180011D4C(a1, &v8);
  v4 = sub_18001C190();
  if ( v4 )
  {
    v5 = sub_18001246C(v10, &v8);
    v4 = sub_18003B0A8(v6, v5);
  }
  sub_18003F010(a2, v4);
  if ( v9 )
    sub_180010530(v9);
  return a2;
}
