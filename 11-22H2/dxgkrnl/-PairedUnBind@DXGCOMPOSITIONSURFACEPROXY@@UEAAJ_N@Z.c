/*
 * XREFs of ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1C02E2BB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z @ 0x1C036401C (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJIH@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedUnBind(DXGCOMPOSITIONSURFACEPROXY *this, unsigned __int8 a2)
{
  __int64 v2; // r14
  int v3; // edi
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  _BYTE v20[16]; // [rsp+50h] [rbp-28h] BYREF

  v2 = a2;
  v3 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
  {
    if ( !*((_BYTE *)Current + 600) )
    {
      v3 = -2147483611;
      WdLogSingleEntry1(3LL, -2147483611LL);
LABEL_18:
      KeLeaveCriticalRegion();
LABEL_20:
      WdLogSingleEntry2(3LL, v3, this);
      goto LABEL_21;
    }
    v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v8
      || (v9 = PsGetCurrentProcessSessionId(v7),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, v9)) == 0LL) )
    {
      v3 = -1073741811;
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v19 = PsGetCurrentProcessSessionId(v18);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
        v19,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_18;
    }
    v14 = *((unsigned int *)this + 5);
    if ( !(_DWORD)v14 || !*((_BYTE *)this + 41) )
    {
      WdLogSingleEntry4(
        3LL,
        *((unsigned int *)this + 5),
        this,
        *((unsigned __int8 *)this + 40),
        *((unsigned __int8 *)this + 41));
      goto LABEL_16;
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v10, v11, v12);
    v15[3] = *((unsigned int *)this + 5);
    v15[4] = this;
    v15[5] = v2;
    v16 = DXGSESSIONDATA::VailSendUnbindCompositionSurface(SessionDataForSpecifiedSession, *((_DWORD *)this + 5), v2);
    v3 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry4(3LL, *((unsigned int *)this + 5), this, v2, v16);
      goto LABEL_18;
    }
    if ( !(_BYTE)v2 )
    {
      *((_BYTE *)this + 41) = 0;
LABEL_16:
      KeLeaveCriticalRegion();
      goto LABEL_21;
    }
  }
  KeLeaveCriticalRegion();
  if ( v3 < 0 )
    goto LABEL_20;
LABEL_21:
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return (unsigned int)v3;
}
