/*
 * XREFs of FreeOperandValue @ 0x1409D32B8
 * Callers:
 *     GetOperandValue @ 0x1409D37CC (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1409D4B14 (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall FreeOperandValue(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    v2 = (void *)P[1];
    if ( v2 )
    {
      if ( !*(_BYTE *)P )
        ExFreePoolWithTag(v2, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}
