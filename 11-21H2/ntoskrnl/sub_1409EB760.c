/*
 * XREFs of sub_1409EB760 @ 0x1409EB760
 * Callers:
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409EB760(__int64 a1, char a2)
{
  unsigned int v2; // r8d
  bool v3; // cf
  __int64 v4; // rdx
  _DWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v8 = 0;
  v2 = *(_DWORD *)a1;
  v3 = a2 != 0;
  v4 = *(_QWORD *)(a1 + 1096);
  v5[0] = dword_140D0512C;
  v5[2] = dword_140D05130;
  v5[1] = dword_140D05134;
  v5[3] = dword_140D050AC;
  v6 = v5;
  v7 = 16;
  sub_1402AB170((__int64)&v6, v4, v2, 1u, 3916 - v3, 0x501903u);
}
