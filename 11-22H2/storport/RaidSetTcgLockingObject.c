/*
 * XREFs of RaidSetTcgLockingObject @ 0x1C005AEF8
 * Callers:
 *     RaidAdapterStorageTcgSetLockingObject @ 0x1C0051C34 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1C0053CC8 (RaidUnitStorageTcgSetLockingObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x1C00599DC (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 *     TcglibSetBand @ 0x1C0079FC0 (TcglibSetBand.c)
 *     TcglibStartTransaction @ 0x1C007A908 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x1C007A998 (TcglibStopTransaction.c)
 */

__int64 __fastcall RaidSetTcgLockingObject(
        __int64 a1,
        unsigned int a2,
        char a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        unsigned int a9,
        const void *a10,
        NTSTRSAFE_PSTR pszDest)
{
  int v14; // esi
  int v15; // eax
  __int64 v16; // r14
  int TcgLockingObject; // ebx
  int v19; // edi
  int v20; // edi
  int v21; // edi
  const char *v22; // r8
  _OWORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+80h] [rbp-80h]
  _BYTE v26[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-38h]
  char v28; // [rsp+D0h] [rbp-30h]
  char v29; // [rsp+D1h] [rbp-2Fh]
  char v30; // [rsp+D2h] [rbp-2Eh]
  char v31; // [rsp+D3h] [rbp-2Dh]
  char v32; // [rsp+D4h] [rbp-2Ch]
  int v33; // [rsp+D8h] [rbp-28h]
  _OWORD v34[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v35; // [rsp+110h] [rbp+10h]

  memset_0(v26, 0, 0x50uLL);
  v25 = 0;
  v35 = 0LL;
  v14 = 0;
  v15 = *(_DWORD *)a1;
  memset(v24, 0, sizeof(v24));
  memset(v34, 0, sizeof(v34));
  if ( v15 != 1431193940 )
  {
    if ( v15 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v16 = *(_QWORD *)(a1 + 6008);
    if ( !v16 || !*(_QWORD *)(a1 + 6016) )
      return (unsigned int)-1073741637;
LABEL_11:
    TcgLockingObject = RaidGetTcgLockingObject((int *)a1, a2, (__int64)v26, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( !v27 && !v33 )
      return (unsigned int)-1073741811;
    TcgLockingObject = RaidFillTcgAuthKey(v16, 0, a9, a10, (unsigned int *)v24, pszDest);
    if ( TcgLockingObject < 0 )
      return (unsigned int)TcgLockingObject;
    if ( a3 )
    {
      v19 = a4 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            v14 = 3;
        }
        else
        {
          v14 = 2;
        }
      }
      else
      {
        v14 = 1;
      }
      v21 = v14;
    }
    else
    {
      v21 = 1;
      v14 = 1;
      if ( v28 )
      {
        if ( v30 )
        {
          v14 = 3;
        }
        else if ( v32 )
        {
          v14 = 2;
        }
      }
      if ( v29 )
      {
        if ( v31 )
        {
          v21 = 3;
        }
        else if ( v32 )
        {
          v21 = 2;
        }
      }
    }
    TcgLockingObject = TcglibOpenSession(v16, 2LL, v34);
    if ( TcgLockingObject < 0 )
    {
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
      return (unsigned int)TcgLockingObject;
    }
    TcgLockingObject = TcglibStartTransaction(v16, v34);
    if ( TcgLockingObject >= 0 )
    {
      TcgLockingObject = TcglibSetBand(
                           v16,
                           (unsigned int)v34,
                           a2,
                           v14,
                           v21,
                           a5,
                           a6,
                           a8 & -(__int64)(a7 != 0),
                           (__int64)v24);
      TcglibStopTransaction(v16, v34, (unsigned int)TcgLockingObject);
      if ( TcgLockingObject >= 0 )
      {
LABEL_41:
        TcglibCloseSession(v16, v34);
        return (unsigned int)TcgLockingObject;
      }
      v22 = "TcglibSetBand";
    }
    else
    {
      v22 = "TcglibStartTransaction";
    }
    RtlStringCbCopyA(pszDest, 0x20uLL, v22);
    goto LABEL_41;
  }
  if ( (*(_BYTE *)(a1 + 451) & 0x40) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 3496);
    if ( v16 )
    {
      if ( *(_QWORD *)(a1 + 3504) )
        goto LABEL_11;
    }
  }
  return (unsigned int)-1073741637;
}
