/*
 * XREFs of ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C032B4D0
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C032FC50 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C00037DC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01E1158 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01E11B4 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C032AD60 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C032AEA0 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C032B224 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C032DD00 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDuplInternal(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  struct DXGADAPTER **v18; // r9
  D3DKMT_HANDLE hAdapter; // edx
  int v20; // eax
  struct DXGADAPTER *v21; // r12
  struct DXGADAPTER *v22; // rsi
  struct DXGADAPTER *v23; // rdx
  int OutputDuplManager; // eax
  OUTPUTDUPL_MGR *v25; // rsi
  __int64 v26; // rcx
  DXGSESSIONMGR *v27; // rsi
  unsigned int v28; // eax
  struct DXGSESSIONDATA *v29; // rax
  OUTPUTDUPL_SESSION_MGR *v30; // r15
  __int64 v31; // rbx
  const wchar_t *v32; // r9
  unsigned int v33; // eax
  __int64 v34; // rsi
  UINT KeyedMutexCount; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  int OutputDuplication; // eax
  __int64 v38; // rcx
  struct DXGPROCESS *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 Current; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v47[8]; // [rsp+68h] [rbp-98h] BYREF
  DXGPUSHLOCK *v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h]
  struct DXGADAPTER *v50; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v51; // [rsp+88h] [rbp-78h] BYREF
  OUTPUTDUPL_MGR *v52; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h]
  char v55; // [rsp+A8h] [rbp-58h]
  DXGADAPTER *v56; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v57[144]; // [rsp+C0h] [rbp-40h] BYREF

  v53 = -1;
  v3 = 0LL;
  v54 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2061);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v53, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    WdLogSingleEntry1(1LL, 3171LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(ULONG_PTR)pCreate > MM_USER_PROBE_ADDRESS",
      3171LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = (unsigned __int64)DXGPROCESS::GetCurrent(v6);
  v7 = Current;
  if ( !Current )
  {
    v8 = 3176LL;
    WdLogSingleEntry1(2LL, 3176LL);
    v9 = L"Invalid process context.";
    LODWORD(v10) = -1073741811;
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_66;
  }
  v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v12 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v12, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4738) )
  {
    v8 = 3184LL;
    WdLogSingleEntry1(2LL, 3184LL);
    v9 = L"Screen capture (DDA) is disabled in VAIL container";
    LODWORD(v10) = -1073741790;
    goto LABEL_18;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    v8 = 3191LL;
    WdLogSingleEntry1(2LL, 3191LL);
    v9 = L"Screen capture (DDA) is disabled because of MDM policy";
    LODWORD(v10) = -1073741790;
    goto LABEL_18;
  }
  v16 = (*(_DWORD *)a2 ^ (32 * DxgIsRemoteSessionUsingXddmMonitors(v15))) & 0x20;
  v44 = 0;
  *(_DWORD *)a2 ^= v16;
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*(_QWORD *)(v7 + 88) + 224LL))(&v44, 0LL, 0LL);
  if ( !v44 )
  {
    v8 = 3203LL;
    WdLogSingleEntry1(2LL, 3203LL);
    v9 = L"Output duplication is not supported on disconnected session";
    LODWORD(v10) = -2147483611;
    goto LABEL_18;
  }
  v17 = *(_DWORD *)a2;
  v18 = &v45;
  hAdapter = a1->hAdapter;
  v45 = 0LL;
  if ( (v17 & 0x20) != 0 )
    v18 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v56, hAdapter, (struct _KTHREAD **)v7, v18, 1);
  v20 = *(_DWORD *)a2;
  LODWORD(v10) = 0;
  v52 = 0LL;
  v21 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  if ( (v20 & 0x20) == 0 )
  {
    v22 = v45;
    if ( !v45 )
    {
      v23 = (struct DXGADAPTER *)a1->hAdapter;
      v10 = -1073741811LL;
LABEL_26:
      WdLogSingleEntry2(3LL, v23, v10);
      goto LABEL_64;
    }
    OutputDuplManager = FindOutputDuplManager(
                          v45,
                          a1->VidPnSourceId,
                          &v50,
                          (unsigned __int64 *)&v45,
                          &v51,
                          &Current,
                          &v52);
    v10 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v23 = v22;
      goto LABEL_26;
    }
    v21 = v50;
    v3 = v51;
    v25 = v52;
    goto LABEL_37;
  }
  v27 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v27
    && (v28 = PsGetCurrentProcessSessionId(v26),
        (v29 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v27, v28)) != 0LL) )
  {
    v30 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)v29 + 1);
    if ( v30 )
    {
      v25 = (OUTPUTDUPL_MGR *)*((_QWORD *)v30 + 15);
      if ( !v25 )
      {
        v33 = (*(__int64 (**)(void))(*(_QWORD *)(Current + 88) + 328LL))();
        v34 = v33;
        LODWORD(v10) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(v30, v33);
        if ( (int)v10 < 0 )
        {
          WdLogSingleEntry1(2LL, (unsigned int)v34);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create remote output duplication manager for 0x%I64x sources",
            v34,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_64;
        }
        v25 = (OUTPUTDUPL_MGR *)*((_QWORD *)v30 + 15);
      }
      v7 = Current;
LABEL_37:
      KeyedMutexCount = a1->KeyedMutexCount;
      if ( KeyedMutexCount )
      {
        if ( KeyedMutexCount > 3 )
        {
          WdLogSingleEntry1(2LL, a1->KeyedMutexCount);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid KeyedMutexCount specified 0x%I64x",
            a1->KeyedMutexCount,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = -1073741811;
          goto LABEL_64;
        }
        *(_DWORD *)a2 &= ~0x10u;
      }
      else
      {
        *(_DWORD *)a2 |= 0x10u;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, v21, v3);
      if ( (*(_DWORD *)a2 & 0x20) == 0 )
      {
        DXGADAPTER::ReleaseReference(v21);
        DXGADAPTER::ReleaseReference(v3);
        LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57, 0LL);
        if ( (int)v10 < 0 )
          goto LABEL_48;
      }
      VidPnSourceId = a1->VidPnSourceId;
      if ( VidPnSourceId >= *((_DWORD *)v25 + 19) )
      {
        WdLogSingleEntry1(2LL, VidPnSourceId);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid source ID 0x%I64x",
          a1->VidPnSourceId,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v10) = -1071774972;
LABEL_48:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
        goto LABEL_64;
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47, (struct _KTHREAD **)v25 + 3, 0);
      DXGPUSHLOCK::AcquireExclusive(v48);
      v49 = 2;
      if ( !*((_DWORD *)v25 + 18) )
      {
        WdLogSingleEntry1(2LL, 3325LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Connection currently not allowed",
          3325LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v10) = -2147483611;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
        goto LABEL_48;
      }
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)a2 & 0x10) != 0 )
          goto LABEL_54;
        OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v25, a1);
      }
      else
      {
        OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v25, a1, a2);
      }
      LODWORD(v10) = OutputDuplication;
LABEL_54:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
      if ( (int)v10 >= 0 && (*(_DWORD *)a2 & 1) != 0 && (*(_DWORD *)a2 & 0x10) == 0 )
      {
        v39 = DXGPROCESS::GetCurrent(v38);
        v40 = v39 ? *((_QWORD *)v39 + 11) : 0LL;
        v48 = (DXGPUSHLOCK *)v7;
        LOBYTE(v49) = 0;
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v47, 1u);
        (*(void (**)(void))(v40 + 192))();
        if ( (_BYTE)v49 )
        {
          LOBYTE(v49) = 0;
          (*(void (**)(void))(*((_QWORD *)v48 + 11) + 40LL))();
        }
      }
      goto LABEL_64;
    }
    v31 = 3257LL;
    WdLogSingleEntry1(2LL, 3257LL);
    v32 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
    v31 = 3250LL;
    WdLogSingleEntry1(2LL, 3250LL);
    v32 = L"DXGSESSIONDATA is NULL";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v32, v31, 0LL, 0LL, 0LL, 0LL);
  LODWORD(v10) = -1073741801;
LABEL_64:
  if ( v56 )
    DXGADAPTER::ReleaseReference(v56);
LABEL_66:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( v55 )
  {
    LOBYTE(v41) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v53);
  }
  return (unsigned int)v10;
}
