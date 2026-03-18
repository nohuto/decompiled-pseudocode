/*
 * XREFs of CmpBlockHiveWrites @ 0x140A137A4
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1406DD4D0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140A1A208 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A1A404 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpDeleteHive @ 0x14074E6D4 (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x140769F50 (CmpGetNextHive.c)
 *     CmpReferenceHive @ 0x14076A58C (CmpReferenceHive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(__int64 *a1, int a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *i; // rcx
  __int64 *NextHive; // rax
  volatile signed __int32 *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = (volatile signed __int32 *)NextHive;
    if ( !NextHive )
      return a1 != 0LL ? 0xC0000034 : 0;
    if ( a1 == NextHive || !a1 )
    {
      if ( !a2 || (a2 & (_DWORD)NextHive[514]) == a2 || NextHive == (__int64 *)CmpMasterHive )
      {
        CmpReferenceHive((__int64)NextHive);
        if ( a3 )
          *a3 = v8;
        HvLockHiveFlusherExclusive(v8);
      }
      if ( a1 == (__int64 *)v8 )
        break;
    }
  }
  if ( _InterlockedExchangeAdd(v8 + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(v8);
  return 0LL;
}
