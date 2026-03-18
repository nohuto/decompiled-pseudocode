/*
 * XREFs of EtwpFreeKeyNameList @ 0x14083CBB8
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x14083BACC (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14083CAD4 (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14031E9D0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x140371720 (RtlEnumerateGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  RTL_AVL_TABLE *i; // rbx
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
