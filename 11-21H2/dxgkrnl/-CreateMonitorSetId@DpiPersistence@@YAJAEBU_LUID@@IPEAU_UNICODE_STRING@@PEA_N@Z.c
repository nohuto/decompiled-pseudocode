/*
 * XREFs of ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01D6B10
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01D698C (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000EFE8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0019DB4 (-GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01A52B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C01D6E1C (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall DpiPersistence::CreateMonitorSetId(
        struct _LUID *this,
        const struct _LUID *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  DXGPROCESS *Current; // rax
  __int64 v17; // rbx
  SESSION_VIEW *SessionViewFromSource; // rbx
  unsigned __int16 v19; // r14
  unsigned __int16 v20; // r14
  unsigned __int16 v21; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v23; // r15
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // r13
  unsigned int v27; // edi
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rdx
  DMMVIDPNTOPOLOGY **v32; // rbx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned __int16 *v38; // rbx
  __int16 v39; // r14
  __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // r9
  __int64 v44; // rbx
  const wchar_t *v45; // r9
  NTSTATUS v46; // eax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned __int16 *v52; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v53; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v55; // [rsp+58h] [rbp-A8h]
  unsigned int v56[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v57; // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  struct DISPLAY_SOURCE *v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY **v61; // [rsp+88h] [rbp-78h]
  _BYTE v62[144]; // [rsp+90h] [rbp-70h] BYREF

  v60 = a3;
  LODWORD(v4) = 0;
  v5 = (unsigned int)a2;
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v10
    && (v11 = PsGetCurrentProcessSessionId(v9),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v11)) != 0LL) )
  {
    Current = DXGPROCESS::GetCurrent(v9, v12, v13, v14);
    v17 = (__int64)Current;
    if ( Current )
    {
      if ( DXGPROCESS::IsRemoteConnection(Current) )
      {
        WdLogSingleEntry1(2LL, v17);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225506LL;
      }
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionDataForSpecifiedSession, this, v5);
      if ( SessionViewFromSource )
      {
        if ( a4 )
          LOBYTE(a4->Length) = 0;
        v19 = *(_WORD *)(a3 + 2);
        if ( (v19 & 1) != 0 )
        {
          WdLogSingleEntry1(1LL, 264LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"io_MonitorId->MaximumLength % sizeof(WCHAR) == 0",
            264LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v19 = *(_WORD *)(a3 + 2);
        }
        v20 = v19 >> 1;
        v21 = v20;
        v57 = *(unsigned __int16 **)(v60 + 8);
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
        v59 = PrimaryDisplaySource;
        if ( !PrimaryDisplaySource )
        {
LABEL_35:
          v39 = v20 - v21;
          *(_WORD *)v60 = 2 * v39;
          if ( !(2 * v39) )
          {
            LODWORD(v4) = -1073741637;
            WdLogSingleEntry1(3LL, 418LL);
          }
          return (unsigned int)v4;
        }
        v23 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
        if ( !v23 )
        {
          WdLogSingleEntry1(1LL, 279LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 279LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( !*(_QWORD *)(v23 + 2792) )
        {
          WdLogSingleEntry1(1LL, 280LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
            280LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v24 = *(_QWORD *)(v23 + 404);
        *(_QWORD *)v56 = v24;
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, (struct DXGADAPTER *const)v23, 0LL);
        v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62, 0LL);
        LODWORD(v4) = v25;
        if ( v25 < 0 )
        {
          v41 = (int)v56[1];
          v42 = (unsigned int)v24;
          v43 = (unsigned int)v24;
          v44 = v25;
          WdLogSingleEntry3(2LL, v25, (int)v56[1], v43);
          v45 = L"Failed (0x%I64x) to acquire shared access for adapter LUID: 0x%I64x%08I64x";
        }
        else
        {
          if ( a4 )
            LOBYTE(a4->Length) = (unsigned int)ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(*(ADAPTER_DISPLAY **)(v23 + 2792)) != 0;
          v26 = 0LL;
          v27 = *((_DWORD *)v59 + 4);
          v28 = *(_QWORD *)(v23 + 2792);
          v55 = v27;
          v29 = *(_QWORD *)(v28 + 104);
          if ( v29 )
          {
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v59, *(_QWORD *)(v28 + 104));
            v30 = *(_QWORD *)(v29 + 128);
            v58 = 0LL;
            if ( v30 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v30 + 32));
              v31 = *(_QWORD *)(v29 + 128);
              LODWORD(v24) = v56[0];
            }
            else
            {
              v31 = 0LL;
            }
            auto_rc<DMMVIDPN const>::reset(&v58, v31);
            if ( v58 )
            {
              v32 = (DMMVIDPNTOPOLOGY **)(v58 + 96);
              v61 = (DMMVIDPNTOPOLOGY **)(v58 + 96);
              while ( 1 )
              {
                v54 = -1;
                v33 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v32, v27, v26, &v54);
                v4 = v33;
                if ( v33 < 0 )
                  break;
                if ( v54 == -1 )
                {
                  auto_rc<DMMVIDPN const>::reset(&v58, 0LL);
                  DXGFASTMUTEX::Release((struct _KTHREAD **)v59 + 5);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
                  goto LABEL_35;
                }
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v29 + 120) + 72LL));
                v36 = *(_QWORD *)(v29 + 120);
                TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v36, v54);
                if ( TargetById && *((_DWORD *)TargetById + 23) )
                {
                  if ( v36 )
                    ReferenceCounted::Release((ReferenceCounted *)(v36 + 64));
                }
                else
                {
                  if ( v36 )
                    ReferenceCounted::Release((ReferenceCounted *)(v36 + 64));
                  v38 = v57;
                  v53 = 0;
                  if ( v21 && v21 != v20 )
                  {
                    v46 = RtlStringCchCopyW(v57, v21, L"^");
                    LODWORD(v4) = v46;
                    if ( v46 == -2147483643 )
                    {
                      LODWORD(v4) = -1073741789;
                      goto LABEL_53;
                    }
                    if ( v46 < 0 )
                      goto LABEL_53;
                    --v21;
                    ++v38;
                  }
                  LODWORD(v4) = DpiPersistence::AppendMonitorId(
                                  (DpiPersistence *)v54,
                                  (unsigned int)v56,
                                  (const struct _LUID *)v29,
                                  (struct VIDPN_MGR *)v21,
                                  (unsigned __int16)&v53,
                                  v38,
                                  v52);
                  if ( (int)v4 < 0 )
                    goto LABEL_53;
                  v21 -= v53;
                  v57 = &v38[v53];
                }
                v32 = v61;
                ++v26;
                v27 = v55;
              }
              v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34);
              v48 = v55;
              v47[3] = v26;
              v47[4] = v48;
              v47[5] = v32;
              v47[6] = v4;
            }
            else
            {
              WdLogSingleEntry2(2LL, (int)v56[1], (unsigned int)v24);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Client VidPN is not set on adapter 0x%I64x%08I64x (i.e. no user initiated mode changes took place yet)",
                (int)v56[1],
                (unsigned int)v24,
                0LL,
                0LL,
                0LL);
              LODWORD(v4) = -1071774884;
            }
LABEL_53:
            auto_rc<DMMVIDPN const>::reset(&v58, 0LL);
            DXGFASTMUTEX::Release((struct _KTHREAD **)v59 + 5);
            goto LABEL_54;
          }
          v41 = (unsigned int)v24;
          v44 = (int)v56[1];
          WdLogSingleEntry2(2LL, (int)v56[1], (unsigned int)v41);
          v45 = L"Specified display adapter 0x%I64x%08I64x does not have a valid VidPN manager associated with it";
          LODWORD(v4) = -1071774923;
          v42 = 0LL;
        }
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v45, v44, v41, v42, 0LL, 0LL);
LABEL_54:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
        return (unsigned int)v4;
      }
      WdLogSingleEntry3(2LL, v5, this->HighPart, this->LowPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.",
        v5,
        this->HighPart,
        this->LowPart,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, 227LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get current DXGPROCESS",
        227LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v51 = PsGetCurrentProcessSessionId(v50);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v51,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
