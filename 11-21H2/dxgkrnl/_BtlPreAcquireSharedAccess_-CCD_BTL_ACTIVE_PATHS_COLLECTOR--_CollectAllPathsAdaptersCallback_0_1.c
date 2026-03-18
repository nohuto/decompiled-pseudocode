/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01E8CE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000F8B8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C002C514 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C004D070 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00601EC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C01AB8B4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01AC3D4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  DMMVIDPNTOPOLOGY *v7; // rdi
  __int64 v8; // rsi
  struct VIDPN_MGR *v9; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  struct DMMVIDPN *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rbx
  _QWORD *v16; // r8
  __int64 v17; // r13
  struct DMMVIDPNTOPOLOGY *v18; // rdi
  int v19; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-E0h]
  unsigned int v33; // [rsp+50h] [rbp-B0h]
  struct DMMVIDPN *v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTOPOLOGY *v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  DMMVIDPNTOPOLOGY *v40; // [rsp+88h] [rbp-78h]
  _BYTE v41[8]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v42; // [rsp+98h] [rbp-68h]
  char v43; // [rsp+A0h] [rbp-60h]
  _BYTE v44[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v45[144]; // [rsp+C0h] [rbp-40h] BYREF

  v42 = a1;
  v43 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45, 0LL);
  LODWORD(v7) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_33;
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v25[3] = a1;
    v25[4] = *((int *)a1 + 102);
    v25[5] = *((unsigned int *)a1 + 101);
    v25[6] = this;
    goto LABEL_40;
  }
  if ( *((_BYTE *)a1 + 2705)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v8 = *((_QWORD *)a1 + 349)) == 0 )
  {
LABEL_40:
    LODWORD(v7) = 0;
    goto LABEL_33;
  }
  v9 = *(struct VIDPN_MGR **)(v8 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, (__int64)v9);
  v34 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, (__int64 *)&v34);
  v7 = (DMMVIDPNTOPOLOGY *)ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v26 = *((_QWORD *)v9 + 1);
    if ( !v26 )
    {
      WdLogSingleEntry0(1LL);
      v26 = *((_QWORD *)v9 + 1);
    }
    WdLogSingleEntry5(
      2LL,
      v7,
      v9,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(v26 + 16) + 408LL),
      *(unsigned int *)(*(_QWORD *)(v26 + 16) + 404LL));
    v27 = *((_QWORD *)v9 + 1);
    if ( !v27 )
    {
      WdLogSingleEntry0(1LL);
      v27 = *((_QWORD *)v9 + 1);
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create copy of the client VidPN from last-client committed vidpn. (Status = 0x%I64x, pVidPnMgr "
                "= 0x%I64x, m_pTopology = 0x%I64x, i_pAdapter->GetLuid() = 0x%I64x%08I64x)",
      (__int64)v7,
      (__int64)v9,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(v27 + 16) + 408LL),
      *(unsigned int *)(*(_QWORD *)(v27 + 16) + 404LL));
    goto LABEL_50;
  }
  v11 = v34;
  v40 = (struct DMMVIDPN *)((char *)v34 + 96);
  if ( v34 == (struct DMMVIDPN *)-96LL )
  {
    v28 = *((_QWORD *)v9 + 1);
    if ( !v28 )
    {
      WdLogSingleEntry0(1LL);
      v28 = *((_QWORD *)v9 + 1);
    }
    WdLogSingleEntry5(
      3LL,
      -96LL,
      this,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(v28 + 16) + 408LL),
      *(unsigned int *)(*(_QWORD *)(v28 + 16) + 404LL));
    goto LABEL_50;
  }
  LODWORD(v7) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v34, 1);
  if ( (int)v7 < 0 )
  {
    v29 = *((_QWORD *)v9 + 1);
    if ( !v29 )
    {
      WdLogSingleEntry0(1LL);
      v29 = *((_QWORD *)v9 + 1);
    }
    WdLogSingleEntry5(
      2LL,
      v11,
      this,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(v29 + 16) + 408LL),
      *(unsigned int *)(*(_QWORD *)(v29 + 16) + 404LL));
    goto LABEL_50;
  }
  v37 = 0LL;
  v12 = VIDPN_MGR::CreateClientVidPn(v9, &v37);
  v7 = (DMMVIDPNTOPOLOGY *)v12;
  if ( v12 < 0 )
  {
    v30 = *((_QWORD *)v9 + 1);
    if ( !v30 )
    {
      WdLogSingleEntry0(1LL);
      v30 = *((_QWORD *)v9 + 1);
    }
    WdLogSingleEntry5(
      2LL,
      v7,
      v9,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(v30 + 16) + 408LL),
      *(unsigned int *)(*(_QWORD *)(v30 + 16) + 404LL));
    goto LABEL_49;
  }
  v38 = (DMMVIDPNTOPOLOGY *)(v37 + 96);
  if ( v37 == -96 )
  {
    v31 = *((_QWORD *)v9 + 1);
    if ( !v31 )
    {
      WdLogSingleEntry0(1LL);
      v31 = *((_QWORD *)v9 + 1);
    }
    WdLogSingleEntry5(
      2LL,
      -96LL,
      this,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(v31 + 16) + 408LL),
      *(unsigned int *)(*(_QWORD *)(v31 + 16) + 404LL));
    goto LABEL_49;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 15) + 72LL));
  v13 = *((_QWORD *)a1 + 349);
  v14 = 0;
  v15 = *((_QWORD *)v9 + 15);
  v39 = v15;
  v33 = 0;
  if ( !*(_DWORD *)(v13 + 96) )
  {
LABEL_30:
    if ( v15 )
      ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
    auto_rc<DMMVIDPN>::reset(&v37, 0LL);
    auto_rc<DMMVIDPN>::reset((__int64 *)&v34, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v35 + 40));
    goto LABEL_33;
  }
  v16 = (_QWORD *)(v15 + 24);
  while ( 1 )
  {
    v17 = 0LL;
    if ( (_QWORD *)*v16 != v16 )
      v17 = *v16 - 8LL;
    if ( v17 )
      break;
LABEL_29:
    v33 = ++v14;
    if ( v14 >= *(_DWORD *)(*((_QWORD *)a1 + 349) + 96LL) )
      goto LABEL_30;
  }
  while ( 1 )
  {
    v36 = *(_DWORD *)(v17 + 24);
    if ( DMMVIDPNTOPOLOGY::FindPath(v40, v14, v36) || *(_DWORD *)(v17 + 84) == 15 && !*(_QWORD *)(v17 + 112) )
      goto LABEL_27;
    v18 = v38;
    if ( *((_QWORD *)v38 + 5) )
    {
      WdLogSingleEntry1(1LL, 823LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pScratchVidPnTopology->GetNumPaths() == 0",
        823LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = VIDPN_MGR::AddPathToVidPnTopology(
            v9,
            v18,
            v33,
            v36,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_IGNORE);
    v7 = (DMMVIDPNTOPOLOGY *)v19;
    if ( v19 == -1071774975 )
    {
      LODWORD(v7) = 0;
      goto LABEL_27;
    }
    if ( v19 < 0 )
      break;
    v7 = v38;
    if ( *((_QWORD *)v38 + 5) != 1LL )
    {
      WdLogSingleEntry1(1LL, 854LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pScratchVidPnTopology->GetNumPaths() == 1",
        854LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v7, v33, v36);
    LODWORD(v7) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
    if ( (int)v7 < 0 )
      goto LABEL_64;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v44, (__int64)v38 + 56, 2u, v21, v32, 255LL);
    DMMVIDPNTOPOLOGY::RemovePath(v38, v33, v36, 0LL);
    if ( *((_QWORD *)v38 + 5) )
    {
      WdLogSingleEntry1(1LL, 878LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pScratchVidPnTopology->GetNumPaths() == 0",
        878LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v44, v22);
LABEL_27:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                   (DMMVIDEOPRESENTTARGETSET *)v15,
                   (const struct DMMVIDEOPRESENTTARGET *const)v17);
    v14 = v33;
    v17 = (__int64)NextTarget;
    if ( !NextTarget )
    {
      v16 = (_QWORD *)(v15 + 24);
      goto LABEL_29;
    }
  }
  WdLogSingleEntry1(2LL, v19);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"AddPathToVidPnTopology() failed. (Status = 0x%I64x)",
    (__int64)v7,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_64:
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v39);
LABEL_49:
  auto_rc<DMMVIDPN>::reset(&v37, 0LL);
LABEL_50:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v34, 0LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v35);
LABEL_33:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
  if ( v43 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
  return (unsigned int)v7;
}
