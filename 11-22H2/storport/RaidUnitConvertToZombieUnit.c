/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1C0021B54
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C00A1444 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0017F88 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x1C0021B8C (RaidAdapterInsertZombieUnit.c)
 */

__int64 __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 448) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    return RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
  return result;
}
