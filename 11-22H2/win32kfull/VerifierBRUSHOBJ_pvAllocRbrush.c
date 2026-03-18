/*
 * XREFs of VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C02A6C00
 * Callers:
 *     <none>
 * Callees:
 *     BRUSHOBJ_pvAllocRbrush @ 0x1C0265080 (BRUSHOBJ_pvAllocRbrush.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A6B60 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierBRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  if ( (unsigned int)VerifierRandomFailure((__int64)pbo) )
    return 0LL;
  else
    return BRUSHOBJ_pvAllocRbrush(pbo, cj);
}
