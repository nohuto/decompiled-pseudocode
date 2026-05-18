/*
 * XREFs of sub_1800889C0 @ 0x1800889C0
 * Callers:
 *     sub_1800319BC @ 0x1800319BC (sub_1800319BC.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 */

__int64 *__fastcall sub_1800889C0(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 *result; // rax
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  memset(a1, 0, 0x78uLL);
  a1[1] = 0LL;
  v6 = a1 + 2;
  *(_BYTE *)a1 = 0;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v6 = (__int64 *)sub_180011088(0xA8uLL);
  sub_18001DE8C(v6, (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)&v6);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)&v6);
  *(_WORD *)(v4 + 24) = 257;
  result = a1;
  a1[2] = v4;
  *((_DWORD *)a1 + 28) = 0;
  *((_DWORD *)a1 + 29) = 0;
  return result;
}
