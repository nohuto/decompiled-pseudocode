/*
 * XREFs of ?PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C02E0320
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C0352EE8 (-VailSendQueryStats@DXGSESSIONDATA@@QEAAJIPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedQueryStats(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct CSM_BUFFER_STATISTICS *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // edi
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int Stats; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  _BYTE v20[16]; // [rsp+50h] [rbp-18h] BYREF

  v5 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, a3, a4);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        if ( v10 && (v11 = PsGetCurrentProcessSessionId(v9), DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v11)) )
        {
          if ( *((_DWORD *)this + 5) && *((_BYTE *)this + 40) && *((_BYTE *)this + 41) )
          {
            v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
            if ( v13 )
            {
              CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
              SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                 v13,
                                                 CurrentProcessSessionId);
            }
            else
            {
              SessionDataForSpecifiedSession = 0LL;
            }
            Stats = DXGSESSIONDATA::VailSendQueryStats(SessionDataForSpecifiedSession, *((_DWORD *)this + 5), a2);
            v5 = Stats;
            if ( Stats < 0 )
              WdLogSingleEntry2(3LL, Stats, this);
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
          v17 = PsGetCurrentProcessSessionId(v9);
          WdLogSingleEntry2(2LL, v17, -1073741811LL);
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
        }
      }
      else
      {
        v5 = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v20[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
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
