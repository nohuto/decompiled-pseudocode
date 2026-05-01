/*
 * XREFs of InitOnceGetStringTableOffset @ 0x180093E10
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  int FirstTag; // eax
  _DWORD *v9; // rsi

  v4 = 0;
  if ( !a2 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceGetStringTableOffset",
      690,
      (unsigned int)"PDB was not supplied for InitOnceGetStringTableOffset");
    return 0LL;
  }
  if ( !a3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceGetStringTableOffset",
      696,
      (unsigned int)"No return context was supplied for InitOnceGetStringTableOffset");
    return 0LL;
  }
  FirstTag = SdbFindFirstTag(a2, 0LL, 30721LL, a4);
  v9 = (_DWORD *)(a2 + 2632);
  *v9 = FirstTag;
  if ( FirstTag )
  {
    *a3 = v9;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"InitOnceGetStringTableOffset", 706, (unsigned int)"No stringtable in DB");
  }
  return v4;
}
