/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x14031A9D4
 * Callers:
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x140318C30 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14031A400 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer != 0;
}
