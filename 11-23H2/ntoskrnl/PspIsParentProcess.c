/*
 * XREFs of PspIsParentProcess @ 0x1402269BC
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7ED8 (PspOneDirectionSecurityDomainCombine.c)
 *     PspThreadOpen @ 0x1406B8090 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1406B8150 (PspProcessOpen.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsParentProcess(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a2 + 1344) == *(_QWORD *)(a1 + 1088) )
    return *(_QWORD *)(a2 + 2296) > *(_QWORD *)(a1 + 2296);
  return result;
}
