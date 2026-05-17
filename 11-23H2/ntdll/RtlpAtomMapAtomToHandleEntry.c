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

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
