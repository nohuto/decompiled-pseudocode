/*
 * XREFs of RaidActivateTcgLocking @ 0x1C0057A8C
 * Callers:
 *     RaidAdapterStorageTcgActivateLocking @ 0x1C0050684 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x1C0052688 (RaidUnitStorageTcgActivateLocking.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RtlStringCbCopyA @ 0x1C00422B0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x1C0059084 (RaidFillTcgAuthKey.c)
 *     RaidRefreshTcg @ 0x1C005AB14 (RaidRefreshTcg.c)
 *     TcglibActivateLockingSpEx @ 0x1C0079150 (TcglibActivateLockingSpEx.c)
 *     TcglibCloseSession @ 0x1C0079424 (TcglibCloseSession.c)
 *     TcglibConfigureLockingSpEx @ 0x1C0079504 (TcglibConfigureLockingSpEx.c)
 *     TcglibOpenSession @ 0x1C0079C54 (TcglibOpenSession.c)
 */

__int64 __fastcall RaidActivateTcgLocking(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        NTSTRSAFE_PSTR pszDest)
{
  unsigned int v6; // r12d
  int refreshed; // ebx
  char v8; // r15
  __int64 v10; // rdi
  _BYTE *v11; // rax
  const char *v13; // r8
  __int64 v14; // r8
  _OWORD v15[2]; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+50h] [rbp-39h]
  _OWORD v17[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v18; // [rsp+88h] [rbp-1h]

  v6 = a3;
  v16 = 0;
  refreshed = 0;
  v18 = 0LL;
  v8 = a2;
  memset(v15, 0, sizeof(v15));
  memset(v17, 0, sizeof(v17));
  if ( a3 >= 2u || !(_BYTE)a2 && a3 != 1 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 3496);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *(_BYTE **)(a1 + 3504);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 6008);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *(_BYTE **)(a1 + 6016);
  }
  if ( !v11 || !(_BYTE)a2 && (!v11[152] || !v11[153]) )
    return (unsigned int)-1073741637;
  if ( !v11[53] )
  {
    LOBYTE(a2) = 1;
    refreshed = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _OWORD *, NTSTRSAFE_PSTR))RaidFillTcgAuthKey)(
                  v10,
                  a2,
                  a4,
                  a5,
                  v15,
                  pszDest);
    if ( refreshed >= 0 )
    {
      refreshed = TcglibOpenSession(v10, 1LL, v17);
      if ( refreshed < 0 )
      {
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
        return (unsigned int)refreshed;
      }
      refreshed = TcglibActivateLockingSpEx(v10, v17, v6, v15);
      if ( refreshed < 0 )
      {
        v13 = "TcglibActivateLockingSpEx";
LABEL_30:
        RtlStringCbCopyA(pszDest, 0x20uLL, v13);
        goto LABEL_31;
      }
      TcglibCloseSession(v10, v17);
      refreshed = RaidRefreshTcg(a1, pszDest);
      if ( refreshed >= 0 )
      {
        refreshed = TcglibOpenSession(v10, 2LL, v17);
        if ( refreshed < 0 )
        {
          v13 = "TcglibOpenSession";
          goto LABEL_30;
        }
        LOBYTE(v14) = v8 == 0;
        refreshed = TcglibConfigureLockingSpEx(v10, v17, v14, v15);
        if ( refreshed < 0 )
        {
          v13 = "TcglibConfigureLockingSpEx";
          goto LABEL_30;
        }
      }
LABEL_31:
      TcglibCloseSession(v10, v17);
    }
  }
  return (unsigned int)refreshed;
}
