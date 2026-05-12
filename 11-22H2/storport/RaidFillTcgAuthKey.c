/*
 * XREFs of RaidFillTcgAuthKey @ 0x1C0059084
 * Callers:
 *     RaidActivateTcgLocking @ 0x1C0057A8C (RaidActivateTcgLocking.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidEraseTcgLockingObject @ 0x1C0058E64 (RaidEraseTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x1C0059B18 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidRevertTcgConfiguration @ 0x1C005ABA4 (RaidRevertTcgConfiguration.c)
 *     RaidSetTcgLockingObject @ 0x1C005AEF8 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1C005B184 (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1C005B384 (RaidSetTcgLockingObjectMetadata.c)
 *     RaidSetTcgSpAuthorityKey @ 0x1C005B5F4 (RaidSetTcgSpAuthorityKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibGetMsid @ 0x1C0079BA0 (TcglibGetMsid.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 */

__int64 __fastcall RaidFillTcgAuthKey(
        __int64 a1,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int *a5,
        char *pszDest)
{
  int Msid; // ebx
  _OWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]

  Msid = 0;
  v10 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( a3 && a4 )
  {
    *a5 = a3;
    memmove(a5 + 1, a4, a3);
  }
  else if ( a2 )
  {
    Msid = TcglibOpenSession(a1, 1LL, v9);
    if ( Msid >= 0 )
    {
      Msid = TcglibGetMsid(a1, v9, a5);
      if ( Msid < 0 )
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibGetMsid");
      TcglibCloseSession(a1, v9);
    }
    else
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
    }
  }
  return (unsigned int)Msid;
}
