/*
 * XREFs of RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08
 * Callers:
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x1C00508C4 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1C00528E0 (RaidUnitStorageTcgAssignLockingObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     RaidFillTcgLockingInfo @ 0x1C0059178 (RaidFillTcgLockingInfo.c)
 *     RaidGetTcgLockingObject @ 0x1C00599DC (RaidGetTcgLockingObject.c)
 *     RaidGetTcgLockingObjects @ 0x1C0059D28 (RaidGetTcgLockingObjects.c)
 *     TcglibAssignNamespaceLocking @ 0x1C00792A4 (TcglibAssignNamespaceLocking.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 *     TcglibSetBand @ 0x1C0079FC0 (TcglibSetBand.c)
 *     TcglibStartTransaction @ 0x1C007A908 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x1C007A998 (TcglibStopTransaction.c)
 */

__int64 __fastcall RaidAssignTcgNamespaceLockingObject(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        NTSTRSAFE_PSTR pszDest)
{
  int started; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int TcgLockingObjects; // eax
  _QWORD *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r14
  _DWORD *v16; // rax
  unsigned int v17; // ecx
  _QWORD *v18; // rax
  void *v19; // rdi
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  void *v25; // [rsp+70h] [rbp-90h]
  _OWORD v26[2]; // [rsp+78h] [rbp-88h] BYREF
  int v27; // [rsp+98h] [rbp-68h]
  _BYTE v28[80]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v29[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v30; // [rsp+120h] [rbp+20h]

  v24 = a4;
  v25 = a5;
  memset_0(v28, 0, sizeof(v28));
  P = 0LL;
  v23 = 0LL;
  v27 = 0;
  v30 = 0LL;
  memset(v26, 0, sizeof(v26));
  memset(v29, 0, sizeof(v29));
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v9 = *(_QWORD *)(a1 + 3496);
    if ( !v9 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v9 = *(_QWORD *)(a1 + 6008);
    if ( !v9 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 6016);
  }
  if ( !v10 || !*(_BYTE *)(v10 + 152) || !*(_BYTE *)(v10 + 153) || !*(_BYTE *)(v10 + 134) )
    return (unsigned int)-1073741637;
  TcgLockingObjects = RaidGetTcgLockingObjects(a1, &P, pszDest);
  v13 = P;
  started = TcgLockingObjects;
  if ( TcgLockingObjects >= 0 )
  {
    v14 = *(unsigned int *)(v10 + 128);
    v15 = 0LL;
    if ( (_DWORD)v14 )
    {
      v16 = (char *)P + 72;
      while ( !*(v16 - 16) || !*v16 || *v16 != a2 )
      {
        v15 = (unsigned int)(v15 + 1);
        v16 += 20;
        if ( (unsigned int)v15 >= (unsigned int)v14 )
          goto LABEL_24;
      }
      started = -1073741808;
      goto LABEL_31;
    }
LABEL_24:
    LOBYTE(v14) = 1;
    started = RaidFillTcgAuthKey(v9, v14, a3, v24, v26, pszDest);
    if ( started >= 0 )
    {
      started = TcglibOpenSession(v9, 2LL, v29);
      if ( started < 0 )
      {
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
        goto LABEL_31;
      }
      started = TcglibStartTransaction(v9, v29);
      if ( started < 0 )
      {
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibStartTransaction");
LABEL_30:
        TcglibCloseSession(v9, v29);
        goto LABEL_31;
      }
      started = TcglibAssignNamespaceLocking(v9, (unsigned int)v29, a2, (unsigned int)v26, (__int64)&v23);
      if ( started >= 0 )
      {
        v17 = *(_DWORD *)(v10 + 128);
        v15 = 0LL;
        if ( v17 )
        {
          v18 = v13;
          while ( *v18 != v23 )
          {
            v15 = (unsigned int)(v15 + 1);
            v18 += 10;
            if ( (unsigned int)v15 >= v17 )
              goto LABEL_41;
          }
          started = TcglibSetBand(v9, (unsigned int)v29, v13[10 * v15 + 1], 1, 1, 1, 1, 0LL, 0LL);
          if ( started < 0 )
            RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibSetBand");
        }
LABEL_41:
        if ( (_DWORD)v15 != *(_DWORD *)(v10 + 128) )
        {
LABEL_44:
          TcglibStopTransaction(v9, v29, (unsigned int)started);
          if ( started >= 0 )
          {
            TcglibCloseSession(v9, v29);
            v19 = v25;
            memset_0(v25, 0, 0x40uLL);
            started = RaidGetTcgLockingObject(a1, LODWORD(v13[10 * v15 + 1]), v28, pszDest);
            if ( started >= 0 )
              RaidFillTcgLockingInfo(v28, v19);
            goto LABEL_31;
          }
          goto LABEL_30;
        }
        started = -1073741275;
      }
      RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibAssignNamespaceLocking");
      goto LABEL_44;
    }
  }
LABEL_31:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x43546152u);
  return (unsigned int)started;
}
