/*
 * XREFs of ValidateRegisterSymmetry @ 0x1C0030564
 * Callers:
 *     ValidateCpcSymmetry @ 0x1C002F65C (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C002FBA8 (ValidatePctPtcSymmetry.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateRegisterSymmetry(_BYTE *a1, const void *a2)
{
  __int64 v2; // rbx

  v2 = 2LL;
  if ( *a1 != 10 )
    v2 = 12LL;
  return RtlCompareMemory(a1, a2, (unsigned int)v2) == v2;
}
