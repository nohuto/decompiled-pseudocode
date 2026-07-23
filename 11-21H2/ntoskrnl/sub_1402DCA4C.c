/*
 * XREFs of sub_1402DCA4C @ 0x1402DCA4C
 * Callers:
 *     sub_1402DC420 @ 0x1402DC420 (sub_1402DC420.c)
 *     sub_1402DC668 @ 0x1402DC668 (sub_1402DC668.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402DCA4C(void *a1, unsigned __int64 a2, unsigned int a3)
{
  if ( !a2 || (unsigned __int64)a1 < a2 || (unsigned __int64)a1 >= a2 + a3 )
    ExFreePoolWithTag(a1, 0x76654D45u);
}
