/*
 * XREFs of NtDxgkVailDisconnect @ 0x1C0364E20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z @ 0x1C00169D0 (-FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C0048768 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0056728 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C03458A0 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0361A38 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0362858 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rdi
  struct DXGVAILOBJECT *v7; // rbx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int v10; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  struct DXGPROCESS *v19; // r15
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  char v28; // [rsp+60h] [rbp-31h]
  int v29; // [rsp+68h] [rbp-29h] BYREF
  __int64 v30; // [rsp+70h] [rbp-21h]
  char v31; // [rsp+78h] [rbp-19h]
  _BYTE v32[16]; // [rsp+80h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-1h] BYREF
  char v34; // [rsp+C0h] [rbp+2Fh]

  v29 = -1;
  v30 = 0LL;
  v3 = 1;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2217;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2217);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2217);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
    if ( *((_QWORD *)Current + 74) )
    {
      v7 = DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v7 + 11);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGVAILOBJECT *)((char *)v7 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
      DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v7);
      LODWORD(v6) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v7);
      if ( v28 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
      FlipManagerDwmReleaseFlipManagerObject(v7);
    }
    else if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 120) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      Object = 0LL;
      v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
      if ( v9
        && (v10 = PsGetCurrentProcessSessionId(v8),
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v10),
            (v12 = SessionDataForSpecifiedSession) != 0LL) )
      {
        v13 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
        v6 = v13;
        if ( v13 >= 0 )
        {
          v34 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
          v19 = DXGPROCESS::GetCurrent(v18);
          if ( *((_BYTE *)v19 + 600) )
          {
            v20 = DXGSESSIONDATA::VailGuestDisconnect(v12);
            LODWORD(v6) = v20;
            if ( v20 >= 0 )
              v3 = 0;
            else
              WdLogSingleEntry1(3LL, v20);
            *((_BYTE *)v19 + 600) = v3;
          }
          else
          {
            LODWORD(v6) = -2147483611;
            WdLogSingleEntry1(3LL, -2147483611LL);
          }
          if ( v34 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, v6);
          v17 = PsGetCurrentProcessSessionId(v16);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v17,
            v6,
            0LL,
            0LL,
            0LL);
        }
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        v21 = PsGetCurrentProcessSessionId(v8);
        WdLogSingleEntry2(2LL, v21, -1073741790LL);
        v23 = PsGetCurrentProcessSessionId(v22);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v23,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v6) = -1073741790;
      }
    }
    else
    {
      LODWORD(v6) = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
    }
    KeLeaveCriticalRegion();
    if ( v32[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  }
  else
  {
    LODWORD(v6) = -1073741811;
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
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 )
  {
    LOBYTE(v24) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v29);
  }
  return (unsigned int)v6;
}
