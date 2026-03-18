/*
 * XREFs of ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x1801A4650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::IsBufferingOutput(__int64 a1)
{
  return CInteractionProcessor::IsBufferingOutput(a1 + 24);
}
