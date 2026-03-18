/*
 * XREFs of MiForceAgeWorkingSet @ 0x1406348A0
 * Callers:
 *     MiForcedTrim @ 0x1406348E0 (MiForcedTrim.c)
 *     MiSelfTrim @ 0x14065025C (MiSelfTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14025B770 (MiAgeWorkingSet.c)
 */

__int64 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           1u,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 16920LL)
                               + 2346LL));
}
