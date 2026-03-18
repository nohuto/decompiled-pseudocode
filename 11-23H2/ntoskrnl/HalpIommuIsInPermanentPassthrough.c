/*
 * XREFs of HalpIommuIsInPermanentPassthrough @ 0x140518320
 * Callers:
 *     HalpIommuJoinDmaDomain @ 0x140518344 (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x1405184B4 (HalpIommuLeaveDmaDomain.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuIsInPermanentPassthrough(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a2 + 8) == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 488LL) & 0x100) == 0;
}
