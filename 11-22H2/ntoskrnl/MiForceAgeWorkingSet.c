/*
 * XREFs of MiForceAgeWorkingSet @ 0x140634910
 * Callers:
 *     MiForcedTrim @ 0x140634950 (MiForcedTrim.c)
 *     MiSelfTrim @ 0x1406502CC (MiSelfTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14025B650 (MiAgeWorkingSet.c)
 */

__int64 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           1u,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 16920LL)
                               + 2346LL));
}
