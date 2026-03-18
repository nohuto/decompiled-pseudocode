/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015FD14
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C0160C10 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0002634 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01DAB10 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this)
{
  unsigned int CurrentProcessSessionId; // eax
  __int64 v3; // rsi
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v5; // rdi
  struct DXGGLOBAL *v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  DXGSESSIONDATA *v9; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v11[16]; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v12[16]; // [rsp+60h] [rbp-18h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  v3 = CurrentProcessSessionId;
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(this, CurrentProcessSessionId);
  v5 = SessionDataForSpecifiedSession;
  if ( SessionDataForSpecifiedSession )
  {
    if ( SessionDataForSpecifiedSession == *((struct DXGSESSIONDATA **)this + 17) )
    {
      WdLogSingleEntry1(1LL, 5168LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pConsoleSessionData != pSessionData",
        5168LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v5 == *((struct DXGSESSIONDATA **)this + 17) )
      {
        Global = DXGGLOBAL_GetGlobal();
        DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 122), 0);
      }
    }
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v6 = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    v6,
    DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2LL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v7 = *((unsigned int *)this + 20);
  if ( (unsigned int)v3 >= (unsigned int)v7 )
    v8 = 0LL;
  else
    v8 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3);
  WdLogSingleEntry3(4LL, v3, v8, v7);
  if ( (unsigned int)v3 < *((_DWORD *)this + 20) )
  {
    v9 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 6) + 8 * v3);
    if ( v9 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v9);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3) = 0LL;
    }
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
