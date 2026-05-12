/*
 * XREFs of RaidGetTcgLockingObjectMetadata @ 0x1C0059B18
 * Callers:
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x1C0051360 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x1C00533E4 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x1C00599DC (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibGetBandMetadata @ 0x1C0079954 (TcglibGetBandMetadata.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 *     TcglibStartTransaction @ 0x1C007A908 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x1C007A998 (TcglibStopTransaction.c)
 */

__int64 __fastcall RaidGetTcgLockingObjectMetadata(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        const void *a6,
        char *pszDest)
{
  size_t v8; // r15
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int TcgLockingObject; // ebx
  int v16; // r9d
  const char *v17; // r8
  _OWORD v18[2]; // [rsp+38h] [rbp-B9h] BYREF
  int v19; // [rsp+58h] [rbp-99h]
  _BYTE v20[56]; // [rsp+60h] [rbp-91h] BYREF
  __int64 v21; // [rsp+98h] [rbp-59h]
  int v22; // [rsp+A8h] [rbp-49h]
  _OWORD v23[3]; // [rsp+B0h] [rbp-41h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-11h]

  v8 = a3;
  memset_0(v20, 0, 0x50uLL);
  v19 = 0;
  v24 = 0LL;
  v11 = *(_DWORD *)a1;
  memset(v18, 0, sizeof(v18));
  memset(v23, 0, sizeof(v23));
  if ( v11 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 3496);
    if ( !v12 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( v11 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6008);
    if ( !v12 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 6016);
  }
  if ( v13 )
  {
    TcgLockingObject = RaidGetTcgLockingObject((int *)a1, a2, (__int64)v20, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( !v21 && !v22
      || !(_DWORD)v8
      || (unsigned int)v8 > *(_DWORD *)(v13 + 140) / (unsigned int)*(unsigned __int16 *)(v13 + 136) )
    {
      return (unsigned int)-1073741811;
    }
    memset_0(a4, 0, v8);
    TcgLockingObject = RaidFillTcgAuthKey(v12, 0, a5, a6, (unsigned int *)v18, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    TcgLockingObject = TcglibOpenSession(v12, 2LL, v23);
    if ( TcgLockingObject < 0 )
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
      return (unsigned int)TcgLockingObject;
    }
    TcgLockingObject = TcglibStartTransaction(v12, v23);
    if ( TcgLockingObject >= 0 )
    {
      TcgLockingObject = TcglibGetBandMetadata(v12, (unsigned int)v23, a2, v16, v8, (__int64)a4);
      TcglibStopTransaction(v12, v23, (unsigned int)TcgLockingObject);
      if ( TcgLockingObject >= 0 )
      {
LABEL_26:
        TcglibCloseSession(v12, v23);
        return (unsigned int)TcgLockingObject;
      }
      v17 = "TcglibGetBandMetadata";
    }
    else
    {
      v17 = "TcglibStartTransaction";
    }
    RtlStringCbCopyA(pszDest, 0x20uLL, v17);
    goto LABEL_26;
  }
  return (unsigned int)-1073741637;
}
