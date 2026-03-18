/*
 * XREFs of PsGetSiloIdentifier @ 0x140864FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloIdentifier(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return *(unsigned int *)(a1 + 1428);
  return result;
}
