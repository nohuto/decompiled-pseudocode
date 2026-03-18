/*
 * XREFs of EmpFreePool @ 0x1402DCA4C
 * Callers:
 *     EmpEvaluateTargetRule @ 0x1402DC420 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x1402DC668 (EmpEvaluateNodeLink.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EmpFreePool(void *a1, unsigned __int64 a2, unsigned int a3)
{
  if ( !a2 || (unsigned __int64)a1 < a2 || (unsigned __int64)a1 >= a2 + a3 )
    ExFreePoolWithTag(a1, 0x76654D45u);
}
