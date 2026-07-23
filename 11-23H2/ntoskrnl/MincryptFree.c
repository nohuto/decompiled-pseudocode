/*
 * XREFs of MincryptFree @ 0x140A71FE0
 * Callers:
 *     SymCryptCallbackFree @ 0x14067DF68 (SymCryptCallbackFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
