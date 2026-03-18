/*
 * XREFs of KeReenterRetpolinedCode @ 0x1404109D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReenterRetpolinedCode @ 0x140573DB4 (KxReenterRetpolinedCode.c)
 */

unsigned __int8 KeReenterRetpolinedCode()
{
  unsigned __int8 result; // al

  result = KeGetPcr()->Prcb.BpbRetpolineState;
  if ( (result & 1) != 0 )
    return KxReenterRetpolinedCode();
  return result;
}
