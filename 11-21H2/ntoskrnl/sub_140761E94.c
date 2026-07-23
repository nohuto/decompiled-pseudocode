/*
 * XREFs of sub_140761E94 @ 0x140761E94
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140761F24 @ 0x140761F24 (sub_140761F24.c)
 */

__int64 __fastcall sub_140761E94(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v7; // [rsp+30h] [rbp-88h]
  int v8; // [rsp+34h] [rbp-84h]
  _QWORD v9[15]; // [rsp+40h] [rbp-78h] BYREF

  memset(v9, 0, 0x68uLL);
  v2 = *(_DWORD *)(a1 + 64);
  v9[0] = a1;
  LODWORD(v9[3]) = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  v3 = sub_14027B520();
  v4 = *(_QWORD *)(a1 + 48);
  v8 = 0;
  v7 = 0;
  v9[2] = v3;
  v6[0] = v9;
  v6[1] = sub_1402DBF3C(v4);
  sub_140761F24(a1, sub_140972700, v6);
  return v7;
}
