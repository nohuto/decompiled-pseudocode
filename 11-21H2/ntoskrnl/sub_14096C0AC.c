/*
 * XREFs of sub_14096C0AC @ 0x14096C0AC
 * Callers:
 *     sub_1406FC070 @ 0x1406FC070 (sub_1406FC070.c)
 *     sub_1406FD4A0 @ 0x1406FD4A0 (sub_1406FD4A0.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_140583E7C @ 0x140583E7C (sub_140583E7C.c)
 */

void __fastcall sub_14096C0AC(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = sub_140287970(a1);
  v4[0] = v2;
  v4[1] = *(_QWORD *)(*(_QWORD *)v1 + 64LL);
  sub_140583E7C(648 - (v3 != 0), 0x20400001u, (__int64)v4, 16, 4200706);
}
