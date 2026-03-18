/*
 * XREFs of ViIovIoBuildSynchronousFsdRequest_Exit @ 0x1405D1EC0
 * Callers:
 *     <none>
 * Callees:
 *     ViSetIoBuildRequestFlag @ 0x1405D1F30 (ViSetIoBuildRequestFlag.c)
 */

__int64 __fastcall ViIovIoBuildSynchronousFsdRequest_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 72) )
    return ViSetIoBuildRequestFlag();
  return result;
}
