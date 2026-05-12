/*
 * XREFs of RaidGetTcgLockingObject @ 0x1C00599DC
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x1C0059B18 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidSetTcgLockingObject @ 0x1C005AEF8 (RaidSetTcgLockingObject.c)
 *     RaidSetTcgLockingObjectAuthKey @ 0x1C005B184 (RaidSetTcgLockingObjectAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1C005B384 (RaidSetTcgLockingObjectMetadata.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibGetLockingObject @ 0x1C0079A50 (TcglibGetLockingObject.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 */

__int64 __fastcall RaidGetTcgLockingObject(int *a1, unsigned int a2, __int64 a3, char *a4)
{
  int v5; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ebx
  _OWORD v12[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h]

  v13 = 0LL;
  v5 = *a1;
  memset(v12, 0, sizeof(v12));
  if ( v5 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v8 = *((_QWORD *)a1 + 437);
    if ( !v8 )
      return (unsigned int)-1073741637;
    v9 = *((_QWORD *)a1 + 438);
  }
  else
  {
    if ( v5 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v8 = *((_QWORD *)a1 + 751);
    if ( !v8 )
      return (unsigned int)-1073741637;
    v9 = *((_QWORD *)a1 + 752);
  }
  if ( !v9 )
    return (unsigned int)-1073741637;
  v10 = TcglibOpenSession(v8, 2LL, v12);
  if ( v10 >= 0 )
  {
    v10 = ((__int64 (__fastcall *)(__int64, _OWORD *, _QWORD, __int64))TcglibGetLockingObject)(v8, v12, a2, a3);
    if ( v10 >= 0 )
    {
      *(_QWORD *)(a3 + 48) *= *(unsigned int *)(v9 + 100);
      *(_QWORD *)(a3 + 56) *= *(unsigned int *)(v9 + 100);
    }
    else
    {
      RtlStringCbCopyA(a4, 0x20uLL, "TcglibGetLockingObject");
    }
    TcglibCloseSession(v8, v12);
  }
  else
  {
    RtlStringCbCopyA(a4, 0x20uLL, "TcglibOpenSession");
  }
  return (unsigned int)v10;
}
