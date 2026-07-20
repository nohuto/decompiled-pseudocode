/*
 * XREFs of SmpExecPgm @ 0x1400028A0
 * Callers:
 *     <none>
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpSetCoreProcessIds @ 0x140002724 (SmpSetCoreProcessIds.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x140002858 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpSbCreateSession @ 0x140002B4C (SmpSbCreateSession.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140003734 (SmpSearchKnownSubSysDatabase.c)
 *     SmpGetMuSessionIdFromClientContext @ 0x140003A84 (SmpGetMuSessionIdFromClientContext.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpExecPgm(__int64 a1, __int64 a2)
{
  unsigned int MuSessionIdFromClientContext; // r15d
  __int64 v5; // rax
  unsigned int v6; // edi
  BOOL v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // r14
  int Session; // eax
  int v11; // eax
  __int128 v12; // xmm1
  __int64 v13; // rcx
  _BYTE *v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-98h]
  _OWORD v21[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  unsigned int v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+1A8h] [rbp+A8h]
  __int64 v26; // [rsp+1B0h] [rbp+B0h]

  MuSessionIdFromClientContext = SmpGetMuSessionIdFromClientContext(a2, &v17);
  if ( !v17 )
  {
    v5 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    v6 = -1073741823;
    SmpGlobalLog[2 * v5 + 2] = 164;
LABEL_10:
    SmpGlobalLog[2 * v5 + 3] = v6;
    *(_QWORD *)&SmpGlobalLog[2 * v5 + 4] = a1;
    return v6;
  }
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 32);
    v7 = **(_DWORD **)(v8 + 16) == 2;
  }
  Session = SmpSbCreateSession(MuSessionIdFromClientContext, v17, a1 + 48);
  v6 = Session;
  if ( v7 && Session >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 120);
    if ( v11 != 1 )
    {
      v18 = 1;
      v19 = 0LL;
      v20 = v11;
      v9 = SmpSearchKnownSubSysDatabase(MuSessionIdFromClientContext, &v18);
      if ( !v9 )
      {
        v5 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v5 + 2] = 242;
        goto LABEL_10;
      }
    }
    v15 = (_BYTE *)v9;
    if ( MuSessionIdFromClientContext == *(_DWORD *)SmpCoreProcessIds )
    {
      if ( *(_DWORD *)(a1 + 120) == 1 )
        SmpCoreSubsysProcess[0] = (HANDLE)-1LL;
      else
        SmpCoreSubsysProcess[0] = *(HANDLE *)(v9 + 32);
    }
    v16 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(v8 + 72) != SmpUniqueProcessId )
    {
      if ( !v9 || (unsigned int)(*(_DWORD *)(v9 + 24) - 2) > 1 )
      {
        v6 = -1073741823;
        goto LABEL_24;
      }
      if ( (*(_BYTE *)v8 & 1) != 0
        || (_m_prefetchw((const void *)v8), (_InterlockedOr((volatile signed __int32 *)v8, 1u) & 1) != 0) )
      {
        v6 = -1073741823;
        goto LABEL_25;
      }
      v12 = *(_OWORD *)(v8 + 80);
      v21[0] = *(_OWORD *)(v8 + 64);
      v22 = *(_QWORD *)(v8 + 96);
      v21[1] = v12;
      v23 = 5LL;
      v24 = MuSessionIdFromClientContext;
      v25 = v16;
      v26 = *(_QWORD *)(v9 + 48);
      NtAlpcSendWaitReceivePort(SmpApiConnectionPort, 0x10000LL, v21, 0LL, 0LL, 0LL, 0LL, 0LL, v15);
    }
    if ( (unsigned int)SmpSessionIdToInitialSessionIndex(MuSessionIdFromClientContext) != -1 )
      SmpSetCoreProcessIds(v13, &v15);
    if ( MuSessionIdFromClientContext != *(_DWORD *)SmpCoreProcessIds )
    {
LABEL_24:
      if ( !v9 )
        return v6;
LABEL_25:
      SmpDereferenceKnownSubSys((_BYTE *)v9);
    }
  }
  return v6;
}
