/*
 * XREFs of sub_180081F38 @ 0x180081F38
 * Callers:
 *     sub_1800817C4 @ 0x1800817C4 (sub_1800817C4.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180084078 @ 0x180084078 (sub_180084078.c)
 *     sub_180084E14 @ 0x180084E14 (sub_180084E14.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 */

__int64 __fastcall sub_180081F38(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  sub_18001246C(a1, a2);
  sub_18001246C((_QWORD *)(v3 + 16), (_QWORD *)(v2 + 16));
  result = v5;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v4 + 32);
  return result;
}
