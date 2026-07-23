/*
 * XREFs of InitOnceGetStringTableOffset @ 0x1407E7580
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x140757EB4 (SdbFindFirstTag.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(PRTL_RUN_ONCE a1, char *a2, PVOID *a3)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v7; // rsi

  v3 = 0;
  if ( a2 && a3 )
  {
    FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 30721LL);
    v7 = a2 + 2632;
    *v7 = FirstTag;
    if ( FirstTag )
    {
      *a3 = v7;
      return 1;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    return v3;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
