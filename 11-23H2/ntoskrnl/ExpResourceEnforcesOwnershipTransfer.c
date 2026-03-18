/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x14031A744
 * Callers:
 *     ExDeleteResourceLite @ 0x1402A8DC0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1403189A0 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14031A170 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer != 0;
}
