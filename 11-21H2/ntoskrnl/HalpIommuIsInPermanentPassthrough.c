/*
 * XREFs of HalpIommuIsInPermanentPassthrough @ 0x14051B360
 * Callers:
 *     HalpIommuJoinDmaDomain @ 0x14051B384 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x14051B4F4 (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuIsInPermanentPassthrough(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a2 + 8) == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 472LL) & 0x100) == 0;
}
