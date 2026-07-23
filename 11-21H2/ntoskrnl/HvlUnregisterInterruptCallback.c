/*
 * XREFs of HvlUnregisterInterruptCallback @ 0x140543840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall HvlUnregisterInterruptCallback(unsigned int a1, signed __int64 a2)
{
  signed __int64 result; // rax

  if ( a1 <= 4 )
    return _InterlockedCompareExchange64(
             (volatile signed __int64 *)&off_140D05510[a1],
             (signed __int64)sub_140543130,
             a2);
  return result;
}
