/*
 * XREFs of sub_1800A1A68 @ 0x1800A1A68
 * Callers:
 *     sub_1800A1684 @ 0x1800A1684 (sub_1800A1684.c)
 *     sub_1800A1768 @ 0x1800A1768 (sub_1800A1768.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 */

_QWORD *__fastcall sub_1800A1A68(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a3;
  sub_18001D3F8(&v8);
  v6 = sub_180028C50(v5, v4);
  sub_1800100E8(v6, 0x28uLL);
  *a2 = v8;
  return a2;
}
