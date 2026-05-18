/*
 * XREFs of sub_18005BABC @ 0x18005BABC
 * Callers:
 *     sub_18005BB68 @ 0x18005BB68 (sub_18005BB68.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005BABC(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  result = 1LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 1LL;
  *(_DWORD *)(a1 + 20) = 1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 7;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 2139095039;
  *(_OWORD *)(a1 + 28) = xmmword_1801289A8;
  return result;
}
