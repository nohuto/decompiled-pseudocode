/*
 * XREFs of ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C02E21B0
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
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1C0363678 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJI_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::InsertCompletedToken(
        DXGCOMPOSITIONSURFACEPROXY *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct tagCloneableFlipTokenData *a4)
{
  unsigned int v5; // edi
  struct DXGPROCESS *Current; // rsi
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  _BYTE v22[16]; // [rsp+50h] [rbp-28h] BYREF

  v5 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v12
          && (v13 = PsGetCurrentProcessSessionId(v11), DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, v13)) )
        {
          if ( *((_DWORD *)this + 5) && *((_BYTE *)this + 40) && *((_BYTE *)this + 41) )
          {
            v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
            if ( v15 )
            {
              CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                 v15,
                                                 CurrentProcessSessionId);
            }
            else
            {
              SessionDataForSpecifiedSession = 0LL;
            }
            v18 = DXGSESSIONDATA::VailSendEnqueueFlipExToken(
                    SessionDataForSpecifiedSession,
                    *((_DWORD *)this + 5),
                    a2,
                    a3,
                    a4);
            v5 = v18;
            if ( v18 < 0 )
              WdLogSingleEntry2(3LL, v18, this);
          }
          else
          {
            WdLogSingleEntry4(
              3LL,
              *((unsigned int *)this + 5),
              *((unsigned __int8 *)this + 40),
              *((unsigned __int8 *)this + 41),
              this);
          }
        }
        else
        {
          v5 = -1073741811;
          v19 = PsGetCurrentProcessSessionId(v11);
          WdLogSingleEntry2(2LL, v19, -1073741811LL);
          v21 = PsGetCurrentProcessSessionId(v20);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v21,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v5 = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v22[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    return v5;
  }
  else
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
}
