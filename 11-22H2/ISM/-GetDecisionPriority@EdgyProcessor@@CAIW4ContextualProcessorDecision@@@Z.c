/*
 * XREFs of ?GetDecisionPriority@EdgyProcessor@@CAIW4ContextualProcessorDecision@@@Z @ 0x18017661C
 * Callers:
 *     ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x1801758B8 (-AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcesso.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgyProcessor::GetDecisionPriority(int a1)
{
  int v1; // ecx
  __int64 result; // rax
  int v3; // ecx

  if ( !a1 )
    return 3LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 0LL;
  result = 2LL;
  v3 = v1 - 2;
  if ( !v3 )
    return 1LL;
  if ( v3 != 1 )
    return 4LL;
  return result;
}
