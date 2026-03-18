/*
 * XREFs of ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01DAB10
 * Callers:
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C015FD14 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkPreSessionDisconnected @ 0x1C01DA800 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C01DA9B0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C01F2CB0 (DxgkSessionReconnected.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0025B34 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C03480AC (-RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z @ 0x1C0349064 (-UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::SetConsoleSession(struct DXGSESSIONDATA **this, char a2)
{
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  struct DXGSESSIONDATA *v6; // rax
  CTTMDEVICE *v7; // rsi
  CTTMDEVICE *v8; // rbp
  CTTMDEVICE *v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  struct DXGSESSIONDATA *v12; // rcx
  _QWORD *i; // rbx
  CTTMDEVICE *v14; // rsi
  __int64 v15; // rcx
  _BYTE v16[16]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v17; // [rsp+60h] [rbp-58h] BYREF
  char v18; // [rsp+68h] [rbp-50h]
  _BYTE v19[8]; // [rsp+70h] [rbp-48h] BYREF
  DXGPUSHLOCK *v20; // [rsp+78h] [rbp-40h]
  int v21; // [rsp+80h] [rbp-38h]

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)SessionDataForSpecifiedSession + 2318, 0);
  DXGPUSHLOCK::AcquireExclusive(v20);
  v21 = 2;
  if ( a2 )
  {
    if ( this[17] )
    {
      WdLogSingleEntry1(1LL, 6650LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pConsoleSessionData == NULL", 6650LL, 0LL, 0LL, 0LL, 0LL);
    }
    this[17] = SessionDataForSpecifiedSession;
    *((_DWORD *)this + 36) = *(_DWORD *)SessionDataForSpecifiedSession;
    v6 = SessionDataForSpecifiedSession;
  }
  else
  {
    v6 = this[17];
  }
  if ( v6 && *((_BYTE *)v6 + 18497) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v17,
      (struct DXGPUSHLOCKFAST *)(this + 42));
    if ( a2 )
    {
      v7 = this[45];
      while ( v7 != (CTTMDEVICE *)(this + 45) )
      {
        v8 = v7;
        if ( *((_QWORD *)v7 + 4) )
        {
          WdLogSingleEntry1(1LL, 6680LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pTmmDevice->m_pRegisteredSession == NULL",
            6680LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v9 = v7;
        v7 = *(CTTMDEVICE **)v7;
        v10 = CTTMDEVICE::RegisterTtmDevice(v9, this[17]);
        if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073741130 )
        {
          v11 = v10;
          WdLogSingleEntry4(2LL, *((unsigned int *)v8 + 20), *((_QWORD *)v8 + 8), *(unsigned int *)this[17], v10);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to register TTM device for target 0x%I64x on adapter 0x%I64x to current console session 0x%I"
                      "64x, (Status = 0x%I64x).",
            *((unsigned int *)v8 + 20),
            *((_QWORD *)v8 + 8),
            *(unsigned int *)this[17],
            v11,
            0LL);
        }
      }
    }
    else
    {
      v12 = this[17];
      if ( v12 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v12 + 2326); i != (_QWORD *)((char *)v12 + 18608); v12 = this[17] )
        {
          v14 = (CTTMDEVICE *)(i - 2);
          if ( (struct DXGSESSIONDATA *)i[2] != v12 )
          {
            WdLogSingleEntry1(1LL, 6715LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pTmmDevice->m_pRegisteredSession == m_pConsoleSessionData",
              6715LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          i = (_QWORD *)*i;
          CTTMDEVICE::UnRegisterTtmDevice(v14, 1u);
        }
      }
    }
    if ( v18 )
    {
      v15 = v17;
      *(_QWORD *)(v17 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( !a2 )
  {
    if ( this[17] != SessionDataForSpecifiedSession )
    {
      WdLogSingleEntry1(1LL, 6733LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pConsoleSessionData == pSessionData",
        6733LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_DWORD *)this + 36) = -1;
    this[17] = 0LL;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
}
