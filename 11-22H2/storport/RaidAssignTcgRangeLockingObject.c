/*
 * XREFs of RaidAssignTcgRangeLockingObject @ 0x1C005806C
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
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 *     TcglibSetBand @ 0x1C0079FC0 (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x1C007A198 (TcglibSetBandLocationEx.c)
 *     TcglibStartTransaction @ 0x1C007A908 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x1C007A998 (TcglibStopTransaction.c)
 */

__int64 __fastcall RaidAssignTcgRangeLockingObject(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        void *a7,
        NTSTRSAFE_PSTR pszDest)
{
  unsigned int v11; // r15d
  int started; // ebx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v16; // r8d
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  int TcgLockingObjects; // eax
  PVOID v20; // r13
  unsigned int v21; // ebx
  unsigned int v22; // r8d
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  int v30; // r9d
  const char *v31; // r8
  void *v32; // rdi
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  void *v38; // [rsp+78h] [rbp-88h]
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h]
  __int128 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  _OWORD v43[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v44; // [rsp+D8h] [rbp-28h]
  _BYTE v45[80]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v46[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v47; // [rsp+160h] [rbp+60h]

  v37 = a6;
  v38 = a7;
  v35 = a3;
  v36 = a2;
  v11 = 0;
  v39 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  memset_0(v45, 0, sizeof(v45));
  v44 = 0;
  P = 0LL;
  v47 = 0LL;
  memset(v43, 0, sizeof(v43));
  memset(v46, 0, sizeof(v46));
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 3496);
    if ( !v13 )
      return (unsigned int)-1073741637;
    v14 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v13 = *(_QWORD *)(a1 + 6008);
    if ( !v13 )
      return (unsigned int)-1073741637;
    v14 = *(_QWORD *)(a1 + 6016);
  }
  if ( !v14 || *(_BYTE *)(v14 + 152) && *(_BYTE *)(v14 + 153) && *(_BYTE *)(v14 + 134) )
    return (unsigned int)-1073741637;
  v16 = *(_DWORD *)(v14 + 100);
  v17 = *(_DWORD *)(v14 + 112) * v16;
  v18 = (unsigned int)(*(_DWORD *)(v14 + 104) * v16);
  if ( (a2 - v17) % v18 || a3 % v18 )
    return (unsigned int)-1073741811;
  TcgLockingObjects = RaidGetTcgLockingObjects(a1, &P, pszDest);
  v20 = P;
  started = TcgLockingObjects;
  if ( TcgLockingObjects >= 0 )
  {
    v21 = *(_DWORD *)(v14 + 128);
    v22 = 0;
    if ( v21 )
    {
      v23 = (unsigned __int64 *)((char *)P + 48);
      do
      {
        if ( *((_DWORD *)v23 - 10) )
        {
          v24 = v23[1];
          if ( v24 )
          {
            if ( (v25 = *v23, v26 = *v23 + v24, v36 >= *v23) && v36 < v26
              || (v20 = P, v27 = v36 + v35, v36 + v35 > v25) && v27 <= v26
              || v36 < v25 && v27 > v26 )
            {
              started = -1073741808;
              goto LABEL_52;
            }
          }
          if ( !*v23 && !v24 && !v11 )
            v11 = v22;
        }
        ++v22;
        v23 += 10;
      }
      while ( v22 < v21 );
      if ( !v11 )
        goto LABEL_51;
      LODWORD(v39) = 56;
      *((_QWORD *)&v39 + 1) = v36 / *(unsigned int *)(v14 + 100);
      v28 = *(unsigned int *)(v14 + 100);
      v29 = v35 % v28;
      LOBYTE(v29) = a4;
      *(_QWORD *)&v40 = v35 / v28;
      started = RaidFillTcgAuthKey(v13, v29, a5, v37, v43, pszDest);
      if ( started < 0 )
        goto LABEL_52;
      started = TcglibOpenSession(v13, 2LL, v46);
      if ( started < 0 )
      {
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
        goto LABEL_52;
      }
      started = TcglibStartTransaction(v13, v46);
      if ( started < 0 )
      {
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibStartTransaction");
LABEL_42:
        TcglibCloseSession(v13, v46);
        goto LABEL_52;
      }
      LOBYTE(v30) = a4;
      started = TcglibSetBandLocationEx(v13, (unsigned int)v46, v11, v30, (__int64)v43, (__int64)&v39);
      if ( started < 0 )
      {
        v31 = "TcglibSetBandLocationEx";
      }
      else
      {
        started = TcglibSetBand(v13, (unsigned int)v46, v11, 1, 1, 1, 1, 0LL, 0LL);
        if ( started >= 0 )
          goto LABEL_48;
        v31 = "TcglibSetBand";
      }
      RtlStringCbCopyA(pszDest, 0x20uLL, v31);
LABEL_48:
      TcglibStopTransaction(v13, v46, (unsigned int)started);
      if ( started >= 0 )
      {
        TcglibCloseSession(v13, v46);
        v32 = v38;
        memset_0(v38, 0, 0x40uLL);
        started = RaidGetTcgLockingObject(a1, v11, v45, pszDest);
        if ( started >= 0 )
          RaidFillTcgLockingInfo(v45, v32);
        goto LABEL_52;
      }
      goto LABEL_42;
    }
LABEL_51:
    started = -1073741670;
  }
LABEL_52:
  if ( v20 )
    ExFreePoolWithTag(v20, 0x43546152u);
  return (unsigned int)started;
}
