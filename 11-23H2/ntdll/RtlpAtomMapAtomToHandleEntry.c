/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180003C68
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180003390 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1800036A0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x180003980 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x180003AC0 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800F6E10 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180003CA0 (RtlIsValidIndexHandle.c)
 */

_RTL_HANDLE_TABLE_ENTRY *__fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, ULONG a2)
{
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), a2, &Handle) )
    return Handle[1].NextFree;
  else
    return 0LL;
}
