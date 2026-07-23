/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1402A07F0
 * Callers:
 *     sub_1406744E0 @ 0x1406744E0 (sub_1406744E0.c)
 *     sub_1406746F0 @ 0x1406746F0 (sub_1406746F0.c)
 *     sub_14070BACC @ 0x14070BACC (sub_14070BACC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
