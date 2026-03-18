/*
 * XREFs of MincryptFree @ 0x140A3412C
 * Callers:
 *     SymCryptCallbackFree @ 0x140656BA8 (SymCryptCallbackFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MincryptFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x72634943u);
}
