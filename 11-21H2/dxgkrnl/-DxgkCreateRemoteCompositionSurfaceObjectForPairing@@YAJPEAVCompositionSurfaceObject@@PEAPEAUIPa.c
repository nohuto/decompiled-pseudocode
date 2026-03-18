/*
 * XREFs of ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02DF41C
 * Callers:
 *     NtDxgkVailPromoteCompositionSurface @ 0x1C0354840 (NtDxgkVailPromoteCompositionSurface.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02DF8F4 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02E1150 (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z @ 0x1C03527F0 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkCreateRemoteCompositionSurfaceObjectForPairing(
        struct CompositionSurfaceObject *a1,
        struct IPairedSurfaceObject **a2,
        void **a3,
        __int64 a4)
{
  void *v7; // r14
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rdi
  struct DXGPROCESS *Current; // rbp
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rsi
  unsigned int v20; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v22; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v24; // rcx
  unsigned int v25; // eax
  void *v26; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v27[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp+20h] BYREF

  v28 = 0;
  v26 = 0LL;
  v7 = 0LL;
  v8 = operator new[](0x40uLL, 0x4B677844u, 256LL, a4);
  if ( !v8 )
  {
    v14 = -1073741801;
    WdLogSingleEntry1(3LL, -1073741801LL);
    *a3 = 0LL;
    return v14;
  }
  *(_DWORD *)(v8 + 8) = 1;
  *(_QWORD *)v8 = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
  *(_WORD *)(v8 + 12) = 0;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_WORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_DWORD *)(v8 + 56) = 0;
  v9 = DXGCOMPOSITIONSURFACEPROXY::Initialize((DXGCOMPOSITIONSURFACEPROXY *)v8);
  v14 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    *a3 = 0LL;
    v15 = v8;
LABEL_21:
    DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)v15);
    return v14;
  }
  Current = DXGPROCESS::GetCurrent(v11, v10, v12, v13);
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  v15 = v8;
  if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
  {
    if ( *((_BYTE *)Current + 600) )
    {
      v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
      if ( v19
        && (v20 = PsGetCurrentProcessSessionId(v18),
            (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, v20)) != 0LL) )
      {
        v22 = DXGSESSIONDATA::VailSendCreateCompositionSurface(SessionDataForSpecifiedSession, &v28, &v26);
        v14 = v22;
        if ( v22 < 0 )
          WdLogSingleEntry1(3LL, v22);
        v7 = v26;
      }
      else
      {
        v14 = -1073741811;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
        WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
        v25 = PsGetCurrentProcessSessionId(v24);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v25,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        v15 = v8;
      }
    }
    else
    {
      v14 = -2147483611;
      WdLogSingleEntry1(3LL, -2147483611LL);
    }
  }
  KeLeaveCriticalRegion();
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  if ( (v14 & 0x80000000) != 0 )
  {
    *a3 = 0LL;
    if ( v15 )
      goto LABEL_21;
  }
  else
  {
    *(_DWORD *)(v15 + 20) = v28;
    *(_QWORD *)(v15 + 32) = v7;
    *(_QWORD *)(v15 + 24) = a1;
    *a2 = (struct IPairedSurfaceObject *)v15;
    *a3 = v7;
  }
  return v14;
}
