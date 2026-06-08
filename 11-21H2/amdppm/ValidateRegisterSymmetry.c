/*
 * XREFs of ValidateRegisterSymmetry @ 0x1C002F74C
 * Callers:
 *     ValidateCpcSymmetry @ 0x1C002E824 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C002ED7C (ValidatePctPtcSymmetry.c)
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
