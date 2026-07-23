/*
 * XREFs of HalpHpetAcknowledgeInterrupt @ 0x1405201C0
 * Callers:
 *     <none>
 * Callees:
 *     HalSetTimerProblem @ 0x14051FE00 (HalSetTimerProblem.c)
 *     HalpHpetSetMatchValue @ 0x14052024C (HalpHpetSetMatchValue.c)
 */

void __fastcall HalpHpetAcknowledgeInterrupt(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    LOBYTE(a3) = 1;
    HalpHpetSetMatchValue(a1, *(unsigned int *)(a1 + 20), a3);
  }
  else if ( *(_DWORD *)(a1 + 8) == 2 && !*(_BYTE *)(a1 + 12) )
  {
    HalSetTimerProblem(a1, 2, 0);
  }
}
