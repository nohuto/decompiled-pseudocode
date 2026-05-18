/*
 * XREFs of sub_18009E008 @ 0x18009E008
 * Callers:
 *     sub_18009D25C @ 0x18009D25C (sub_18009D25C.c)
 *     sub_18009D8E0 @ 0x18009D8E0 (sub_18009D8E0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001DCD4 @ 0x18001DCD4 (sub_18001DCD4.c)
 *     sub_180026640 @ 0x180026640 (sub_180026640.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18007A618 @ 0x18007A618 (sub_18007A618.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 */

char __fastcall sub_18009E008(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 *v7; // rax
  _QWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = (__int64 *)sub_18008E70C(a1);
  v3 = sub_180026640(v2, v10);
  v4 = *v3;
  v5 = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  v9[0] = *(_QWORD *)(a1 + 1832);
  v9[1] = *(_QWORD *)(a1 + 1840);
  *(_QWORD *)(a1 + 1832) = v4;
  *(_QWORD *)(a1 + 1840) = v5;
  sub_180010910((__int64)v9);
  sub_180010910((__int64)v10);
  v6 = *(_QWORD *)(a1 + 1832);
  v7 = sub_18001DCD4(v10, (_QWORD *)(a1 + 24), " DepthBuffer");
  sub_18002BC44(v6, v7);
  return sub_18007A618(*(__int64 **)(a1 + 1832), *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), 1u, 0, 0LL);
}
