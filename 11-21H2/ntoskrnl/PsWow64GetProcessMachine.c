/*
 * XREFs of PsWow64GetProcessMachine @ 0x1407048B0
 * Callers:
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_140298680 @ 0x140298680 (sub_140298680.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessMachine(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 1408) )
    return 34404LL;
  result = *(unsigned __int16 *)(a1 + 2412);
  if ( !(_WORD)result )
    return 34404LL;
  return result;
}
