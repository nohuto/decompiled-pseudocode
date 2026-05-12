/*
 * XREFs of RaidDeassignTcgLockingObject @ 0x1C0058938
 * Callers:
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x1C0050BB8 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x1C0052C14 (RaidUnitStorageTcgDeassignLockingObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x1C00599DC (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibDeassignNamespaceLocking @ 0x1C00796A4 (TcglibDeassignNamespaceLocking.c)
 *     TcglibEraseBand @ 0x1C0079868 (TcglibEraseBand.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 *     TcglibSetBand @ 0x1C0079FC0 (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x1C007A198 (TcglibSetBandLocationEx.c)
 *     TcglibStartTransaction @ 0x1C007A908 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x1C007A998 (TcglibStopTransaction.c)
 */

__int64 __fastcall RaidDeassignTcgLockingObject(
        int *a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        NTSTRSAFE_PSTR pszDest)
{
  int v10; // eax
  __int64 v11; // rsi
  int TcgLockingObject; // ebx
  __int64 v14; // rdx
  int v15; // r9d
  const char *v16; // r8
  _OWORD v17[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  _OWORD v19[3]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h]
  _QWORD v21[7]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-8h]
  int v23; // [rsp+108h] [rbp+8h]
  _OWORD v24[3]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v25; // [rsp+140h] [rbp+40h]

  v20 = 0LL;
  memset(v19, 0, sizeof(v19));
  memset_0(v21, 0, 0x50uLL);
  v18 = 0;
  v25 = 0LL;
  v10 = *a1;
  memset(v17, 0, sizeof(v17));
  memset(v24, 0, sizeof(v24));
  if ( v10 != 1431193940 )
  {
    if ( v10 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v11 = *((_QWORD *)a1 + 751);
    if ( !v11 || !*((_QWORD *)a1 + 752) )
      return (unsigned int)-1073741637;
LABEL_11:
    TcgLockingObject = RaidGetTcgLockingObject(a1, a2, v21, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( !v22 && !v23 )
      return (unsigned int)-1073741811;
    LOBYTE(v14) = a3;
    TcgLockingObject = RaidFillTcgAuthKey(v11, v14, a4, a5, v17, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    LODWORD(v19[0]) = 56;
    TcgLockingObject = TcglibOpenSession(v11, 2LL, v24);
    if ( TcgLockingObject < 0 )
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
      return (unsigned int)TcgLockingObject;
    }
    TcgLockingObject = TcglibStartTransaction(v11, v24);
    if ( TcgLockingObject < 0 )
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibStartTransaction");
LABEL_28:
      TcglibCloseSession(v11, v24);
      return (unsigned int)TcgLockingObject;
    }
    if ( v22 )
    {
      LOBYTE(v15) = a3;
      TcgLockingObject = TcglibSetBandLocationEx(v11, (unsigned int)v24, a2, v15, (__int64)v17, (__int64)v19);
      if ( TcgLockingObject < 0 )
      {
        v16 = "TcglibSetBandLocationEx";
LABEL_25:
        RtlStringCbCopyA(pszDest, 0x20uLL, v16);
LABEL_27:
        TcglibStopTransaction(v11, v24, (unsigned int)TcgLockingObject);
        goto LABEL_28;
      }
    }
    else
    {
      TcgLockingObject = TcglibDeassignNamespaceLocking(v11, v24, v17, v21[0]);
      if ( TcgLockingObject < 0 )
      {
        v16 = "TcglibDeassignNamespaceLocking";
        goto LABEL_25;
      }
    }
    TcglibEraseBand(v11, v24, a2);
    TcglibSetBand(v11, (unsigned int)v24, a2, 1, 1, 1, 0, 0LL, 0LL);
    goto LABEL_27;
  }
  if ( (*((_BYTE *)a1 + 451) & 0x40) == 0 )
  {
    v11 = *((_QWORD *)a1 + 437);
    if ( v11 )
    {
      if ( *((_QWORD *)a1 + 438) )
        goto LABEL_11;
    }
  }
  return (unsigned int)-1073741637;
}
