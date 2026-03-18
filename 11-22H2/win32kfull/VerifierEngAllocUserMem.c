/*
 * XREFs of VerifierEngAllocUserMem @ 0x1C02A6E00
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A6B60 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierEngAllocUserMem(SIZE_T cjMemSize, ULONG ulTag)
{
  if ( (unsigned int)VerifierRandomFailure(cjMemSize) )
    return 0LL;
  else
    return EngAllocUserMem(cjMemSize, ulTag);
}
