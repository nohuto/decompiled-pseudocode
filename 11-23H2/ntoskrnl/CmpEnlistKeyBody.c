/*
 * XREFs of CmpEnlistKeyBody @ 0x1407C053C
 * Callers:
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 * Callees:
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1406D0F74 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3EDC (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     EnlistKeyBodyWithKCB @ 0x1407C05A0 (EnlistKeyBodyWithKCB.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpEnlistKeyBody(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (*(_DWORD *)(a2 + 184) & 0x400000) == 0 )
  {
    while ( (int)EnlistKeyBodyWithKCB(a1, (unsigned int)(a4 != 0) + 1) < 0 )
    {
      if ( CmpTryConvertKcbLockSharedToExclusive(*(_QWORD *)(a1 + 8)) )
      {
        a4 = 1;
      }
      else
      {
        CmpUnlockKcb(*(_QWORD *)(a1 + 8));
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
        a4 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x20000) != 0 || CmpIsKeyStackDeleted(a5) )
          return (unsigned int)-1073741444;
      }
    }
  }
  return v5;
}
