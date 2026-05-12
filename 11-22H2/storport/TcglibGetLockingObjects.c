/*
 * XREFs of TcglibGetLockingObjects @ 0x1C0079AD0
 * Callers:
 *     RaidGetTcgLockingObjects @ 0x1C0059D28 (RaidGetTcgLockingObjects.c)
 * Callees:
 *     TcglibpCheckContext @ 0x1C007AAC4 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1C007AB10 (TcglibpCheckError.c)
 *     TcglibpGetLockingObjectInfo @ 0x1C007B650 (TcglibpGetLockingObjectInfo.c)
 */

__int64 __fastcall TcglibGetLockingObjects(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdx
  unsigned int v9; // r10d
  unsigned int v10; // esi
  int LockingObjectInfo; // eax

  if ( a3 && a4 )
  {
    v9 = TcglibpCheckContext(a1);
    if ( !v9 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
      {
        return (unsigned int)-2147483631;
      }
      else
      {
        v10 = 0;
        if ( a3 )
        {
          while ( 1 )
          {
            LockingObjectInfo = TcglibpGetLockingObjectInfo(a1, a2, v10, a4 + 80LL * v10);
            v9 = LockingObjectInfo;
            if ( LockingObjectInfo < 0 )
              break;
            if ( ++v10 >= a3 )
              goto LABEL_11;
          }
          v9 = TcglibpCheckError(a1, a2, (unsigned int)LockingObjectInfo);
        }
LABEL_11:
        _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
