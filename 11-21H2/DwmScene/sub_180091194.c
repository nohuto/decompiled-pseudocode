/*
 * XREFs of sub_180091194 @ 0x180091194
 * Callers:
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18004C658 @ 0x18004C658 (sub_18004C658.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     sub_180091160 @ 0x180091160 (sub_180091160.c)
 * Callees:
 *     sub_1800907CC @ 0x1800907CC (sub_1800907CC.c)
 */

__int64 __fastcall sub_180091194(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // r8d

  v2 = *(unsigned int *)(sub_1800907CC(a1, a2) + 40);
  result = *(_QWORD *)(v3 + 104);
  *(_DWORD *)(result + 40 * v2 + 32) = v5;
  return result;
}
