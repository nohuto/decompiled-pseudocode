/*
 * XREFs of CcDeallocateBcb @ 0x1402F41E0
 * Callers:
 *     CcDeleteMbcb @ 0x1402F4094 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1403C6848 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
