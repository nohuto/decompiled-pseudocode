/*
 * XREFs of sub_14096D0B8 @ 0x14096D0B8
 * Callers:
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 * Callees:
 *     sub_140583E7C @ 0x140583E7C (sub_140583E7C.c)
 */

void __fastcall sub_14096D0B8(__int64 a1, __int64 a2, char a3)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v3[0] = a1;
  v5 = 0;
  v3[1] = a2;
  v4 = a3 & 0xF;
  sub_140583E7C(0x27Fu, 0x20008000u, (__int64)v3, 20, 4200706);
}
