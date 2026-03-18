/*
 * XREFs of CmpEnlistKeyBody @ 0x1406C1694
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     EnlistKeyBodyWithKCB @ 0x1406C16F8 (EnlistKeyBodyWithKCB.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x14071EE50 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpIsKeyStackDeleted @ 0x140720F74 (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpEnlistKeyBody(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (*(_DWORD *)(a2 + 184) & 0x400000) == 0 )
  {
    while ( (int)EnlistKeyBodyWithKCB(a1, (unsigned int)(a4 != 0) + 1) < 0 )
    {
      if ( (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(*(_QWORD *)(a1 + 8)) )
      {
        a4 = 1;
      }
      else
      {
        CmpUnlockKcb(*(_QWORD *)(a1 + 8));
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
        a4 = 1;
        if ( (unsigned __int8)CmpIsKeyStackDeleted(a5, a3) )
          return (unsigned int)-1073741444;
      }
    }
  }
  return v5;
}
