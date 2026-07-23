/*
 * XREFs of sub_140818900 @ 0x140818900
 * Callers:
 *     sub_14081881C @ 0x14081881C (sub_14081881C.c)
 *     sub_140851328 @ 0x140851328 (sub_140851328.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1402DE820 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 */

PVOID __fastcall sub_140818900(PRTL_AVL_TABLE Table)
{
  _RTL_AVL_TABLE *i; // rbx
  PVOID result; // rax

  for ( i = Table; ; Table = i )
  {
    result = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !result )
      break;
    RtlDeleteElementGenericTableAvl(i, result);
  }
  return result;
}
