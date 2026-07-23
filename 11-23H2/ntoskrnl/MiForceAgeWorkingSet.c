/*
 * XREFs of MiForceAgeWorkingSet @ 0x140634DF0
 * Callers:
 *     MiForcedTrim @ 0x140634E30 (MiForcedTrim.c)
 *     MiSelfTrim @ 0x1406507AC (MiSelfTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14025BA00 (MiAgeWorkingSet.c)
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
