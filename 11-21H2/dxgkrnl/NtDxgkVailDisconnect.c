/*
 * XREFs of NtDxgkVailDisconnect @ 0x1C0354450
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C004B314 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0057A18 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0336D84 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0350FD8 (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0351E48 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall NtDxgkVailDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rbx
  __int64 v9; // rdi
  struct DXGVAILOBJECT *v10; // rbx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int v13; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGPROCESS *v25; // r15
  int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  char v34; // [rsp+60h] [rbp-31h]
  int v35; // [rsp+68h] [rbp-29h] BYREF
  __int64 v36; // [rsp+70h] [rbp-21h]
  char v37; // [rsp+78h] [rbp-19h]
  _BYTE v38[16]; // [rsp+80h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-1h] BYREF
  char v40; // [rsp+C0h] [rbp+2Fh]

  v35 = -1;
  v36 = 0LL;
  v3 = 1;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2217;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2217);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2217);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    if ( *((_QWORD *)Current + 74) )
    {
      v10 = DXGPROCESS::ReferenceVailObject((struct _KTHREAD **)Current);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v10 + 11);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, (struct DXGVAILOBJECT *)((char *)v10 + 40), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
      DXGVAILOBJECT::DisableVmBusChannel((struct _KTHREAD **)v10);
      LODWORD(v9) = DXGVAILOBJECT::DestroyVmBusHostSubscribers(v10);
      if ( v34 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
      DxgkCompositionObject::Release(v10);
    }
    else if ( *((_QWORD *)DXGGLOBAL_GetGlobal() + 124) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      Object = 0LL;
      v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
      if ( v12
        && (v13 = PsGetCurrentProcessSessionId(v11),
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, v13),
            (v15 = SessionDataForSpecifiedSession) != 0LL) )
      {
        v16 = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, (struct _EPROCESS **)&Object);
        v9 = v16;
        if ( v16 >= 0 )
        {
          v40 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
          v25 = DXGPROCESS::GetCurrent(v22, v21, v23, v24);
          if ( *((_BYTE *)v25 + 600) )
          {
            v26 = DXGSESSIONDATA::VailGuestDisconnect(v15);
            LODWORD(v9) = v26;
            if ( v26 >= 0 )
              v3 = 0;
            else
              WdLogSingleEntry1(3LL, v26);
            *((_BYTE *)v25 + 600) = v3;
          }
          else
          {
            LODWORD(v9) = -2147483611;
            WdLogSingleEntry1(3LL, -2147483611LL);
          }
          if ( v40 )
            KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17);
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, v9);
          v20 = PsGetCurrentProcessSessionId(v19);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v20,
            v9,
            0LL,
            0LL,
            0LL);
        }
        if ( Object )
          ObfDereferenceObject(Object);
      }
      else
      {
        v27 = PsGetCurrentProcessSessionId(v11);
        WdLogSingleEntry2(2LL, v27, -1073741790LL);
        v29 = PsGetCurrentProcessSessionId(v28);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v29,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v9) = -1073741790;
      }
    }
    else
    {
      LODWORD(v9) = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
    }
    KeLeaveCriticalRegion();
    if ( v38[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  }
  else
  {
    LODWORD(v9) = -1073741811;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 )
  {
    LOBYTE(v30) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v35);
  }
  return (unsigned int)v9;
}
