/*
 * XREFs of KeReenterRetpolinedCode @ 0x140410C30
 * Callers:
 *     <none>
 * Callees:
 *     KxReenterRetpolinedCode @ 0x1405742F4 (KxReenterRetpolinedCode.c)
 */

unsigned __int8 KeReenterRetpolinedCode()
{
  unsigned __int8 result; // al

  result = KeGetPcr()->Prcb.BpbRetpolineState;
  if ( (result & 1) != 0 )
    return KxReenterRetpolinedCode();
  return result;
}
