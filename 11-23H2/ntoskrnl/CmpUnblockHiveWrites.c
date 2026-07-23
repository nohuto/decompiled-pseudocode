/*
 * XREFs of CmpUnblockHiveWrites @ 0x140A13C24
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1406DD500 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140A1A4B8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A1A6B4 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x14076A140 (CmpGetNextHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnblockHiveWrites(volatile signed __int32 *P, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  __int64 *NextHive; // rax

  v5 = P;
  if ( P )
  {
    HvUnlockHiveFlusherExclusive(P);
  }
  else
  {
    while ( 1 )
    {
      NextHive = CmpGetNextHive(P);
      v5 = (volatile signed __int32 *)NextHive;
      if ( !a2 || (a2 & (_DWORD)NextHive[514]) == a2 || NextHive == (__int64 *)CmpMasterHive )
      {
        HvUnlockHiveFlusherExclusive(NextHive);
        if ( _InterlockedExchangeAdd(v5 + 1058, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v5);
      }
      if ( v5 == a3 )
        break;
      P = v5;
    }
  }
  if ( _InterlockedExchangeAdd(v5 + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(v5);
}
