/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180062B74
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180062260 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180062570 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x180062890 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1800629D0 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800F5CB0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180062BB0 (RtlIsValidIndexHandle.c)
 */

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
