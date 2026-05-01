/*
 * XREFs of InitOnceGetStringTableOffset @ 0x1800990B0
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  const char *v6; // r9
  int v7; // r8d
  int FirstTag; // eax
  _DWORD *v10; // rsi

  v3 = 0;
  if ( !a2 )
  {
    v6 = "PDB was not supplied for InitOnceGetStringTableOffset";
    v7 = 690;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"InitOnceGetStringTableOffset", v7, (_DWORD)v6);
    return 0LL;
  }
  if ( !a3 )
  {
    v6 = "No return context was supplied for InitOnceGetStringTableOffset";
    v7 = 696;
    goto LABEL_3;
  }
  FirstTag = SdbFindFirstTag(a2, 0, 30721);
  v10 = (_DWORD *)(a2 + 1352);
  *v10 = FirstTag;
  if ( FirstTag )
  {
    *a3 = v10;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"InitOnceGetStringTableOffset", 706, (unsigned int)"No stringtable in DB");
  }
  return v3;
}
