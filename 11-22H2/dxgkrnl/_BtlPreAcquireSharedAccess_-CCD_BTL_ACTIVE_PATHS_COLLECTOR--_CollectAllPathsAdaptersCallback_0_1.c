/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01E9020
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0004F9C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006D74 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00070E4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000A4DC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0025AC8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C004A740 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C005F0CC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0199DD4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0199F4C (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C019ADDC (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C019B448 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C019B54C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01B0208 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01B06C0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C01E20E4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DMMVIDPNTOPOLOGY *v9; // rdi
  __int64 v10; // rsi
  VIDPN_MGR *v11; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  struct DMMVIDPN *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // r13
  struct DMMVIDPNTOPOLOGY *v20; // rdi
  int v21; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // [rsp+20h] [rbp-E0h]
  unsigned int v41; // [rsp+50h] [rbp-B0h]
  struct DMMVIDPN *v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTOPOLOGY *v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h] BYREF
  DMMVIDPNTOPOLOGY *v48; // [rsp+88h] [rbp-78h]
  _BYTE v49[8]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v50; // [rsp+98h] [rbp-68h]
  char v51; // [rsp+A0h] [rbp-60h]
  _BYTE v52[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v53[144]; // [rsp+C0h] [rbp-40h] BYREF

  v50 = a1;
  v51 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53, 0LL);
  LODWORD(v9) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_32;
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v26[3] = a1;
    v26[4] = *((int *)a1 + 102);
    v26[5] = *((unsigned int *)a1 + 101);
    v26[6] = this;
    goto LABEL_39;
  }
  if ( *((_BYTE *)a1 + 2833)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v10 = *((_QWORD *)a1 + 365)) == 0 )
  {
LABEL_39:
    LODWORD(v9) = 0;
    goto LABEL_32;
  }
  v11 = *(VIDPN_MGR **)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v43, (__int64)v11);
  v42 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, (__int64 *)&v42);
  v9 = (DMMVIDPNTOPOLOGY *)ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v27 = *((_QWORD *)v11 + 1);
    v28 = *(unsigned int *)(*(_QWORD *)(v27 + 16) + 404LL);
    if ( !v27 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry5(2LL, v9, v11, *(_QWORD *)this, *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL), v28);
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v29 = *((_QWORD *)v11 + 1);
    v30 = *(unsigned int *)(*(_QWORD *)(v29 + 16) + 404LL);
    if ( !v29 )
      WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create copy of the client VidPN from last-client committed vidpn. (Status = 0x%I64x, pVidPnMgr "
                "= 0x%I64x, m_pTopology = 0x%I64x, i_pAdapter->GetLuid() = 0x%I64x%08I64x)",
      (__int64)v9,
      (__int64)v11,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL),
      v30);
    goto LABEL_53;
  }
  v13 = v42;
  v48 = (struct DMMVIDPN *)((char *)v42 + 96);
  if ( v42 == (struct DMMVIDPN *)-96LL )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v31 = *((_QWORD *)v11 + 1);
    v32 = *(unsigned int *)(*(_QWORD *)(v31 + 16) + 404LL);
    if ( !v31 )
      WdLogSingleEntry0(1LL);
    v33 = *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL);
    v34 = 3LL;
    goto LABEL_60;
  }
  LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v42, 1);
  if ( (int)v9 < 0 )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v35 = *((_QWORD *)v11 + 1);
    v32 = *(unsigned int *)(*(_QWORD *)(v35 + 16) + 404LL);
    if ( !v35 )
      WdLogSingleEntry0(1LL);
    v33 = *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL);
    v34 = 2LL;
LABEL_60:
    WdLogSingleEntry5(v34, v13, this, *(_QWORD *)this, v33, v32);
    goto LABEL_53;
  }
  v45 = 0LL;
  v14 = VIDPN_MGR::CreateClientVidPn(v11, &v45);
  v9 = (DMMVIDPNTOPOLOGY *)v14;
  if ( v14 < 0 )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v36 = *((_QWORD *)v11 + 1);
    v37 = *(unsigned int *)(*(_QWORD *)(v36 + 16) + 404LL);
    if ( !v36 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry5(2LL, v9, v11, *(_QWORD *)this, *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL), v37);
    goto LABEL_52;
  }
  v46 = (DMMVIDPNTOPOLOGY *)(v45 + 96);
  if ( v45 == -96 )
  {
    if ( !*((_QWORD *)v11 + 1) )
      WdLogSingleEntry0(1LL);
    v38 = *((_QWORD *)v11 + 1);
    v39 = *(unsigned int *)(*(_QWORD *)(v38 + 16) + 404LL);
    if ( !v38 )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry5(
      2LL,
      -96LL,
      this,
      *(_QWORD *)this,
      *(int *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL) + 408LL),
      v39);
LABEL_52:
    auto_rc<DMMVIDPN>::reset(&v45, 0LL);
LABEL_53:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v42, 0LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v43);
    goto LABEL_32;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v11 + 15) + 72LL), 1u);
  v15 = *((_QWORD *)a1 + 365);
  v16 = 0;
  v17 = *((_QWORD *)v11 + 15);
  v47 = v17;
  v41 = 0;
  if ( *(_DWORD *)(v15 + 96) )
  {
    do
    {
      v18 = *(_QWORD *)(v17 + 24);
      if ( v18 != v17 + 24 )
      {
        v19 = v18 - 8;
        while ( v19 )
        {
          v44 = *(_DWORD *)(v19 + 24);
          if ( !DMMVIDPNTOPOLOGY::FindPath(v48, v16, v44) && (*(_DWORD *)(v19 + 84) != 15 || *(_QWORD *)(v19 + 112)) )
          {
            v20 = v46;
            if ( *((_QWORD *)v46 + 5) )
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
            v21 = VIDPN_MGR::AddPathToVidPnTopology(
                    v11,
                    v20,
                    v41,
                    v44,
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE);
            v9 = (DMMVIDPNTOPOLOGY *)v21;
            if ( v21 == -1071774975 )
            {
              LODWORD(v9) = 0;
            }
            else
            {
              if ( v21 < 0 )
              {
                WdLogSingleEntry1(2LL, v21);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"AddPathToVidPnTopology() failed. (Status = 0x%I64x)",
                  (__int64)v9,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v47);
                goto LABEL_52;
              }
              v9 = v46;
              if ( *((_QWORD *)v46 + 5) != 1LL )
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
              Path = DMMVIDPNTOPOLOGY::FindPath(v9, v41, v44);
              LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, (ADAPTER_DISPLAY **)a1, Path, 0, 0);
              if ( (int)v9 < 0 )
              {
                auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v47);
                auto_rc<DMMVIDPN>::reset(&v45, 0LL);
                auto_rc<DMMVIDPN>::reset((__int64 *)&v42, 0LL);
                EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v43);
                goto LABEL_32;
              }
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v52,
                (__int64)v46 + 56,
                2u,
                v23,
                v40,
                255LL);
              DMMVIDPNTOPOLOGY::RemovePath(v46, v41, v44, 0LL);
              if ( *((_QWORD *)v46 + 5) )
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
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v52);
            }
          }
          v24 = *(_QWORD *)(v19 + 8);
          v16 = v41;
          v19 = v24 - 8;
          if ( v24 == v17 + 24 )
            v19 = 0LL;
        }
      }
      v41 = ++v16;
    }
    while ( v16 < *(_DWORD *)(*((_QWORD *)a1 + 365) + 96LL) );
  }
  if ( v17 )
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
  auto_rc<DMMVIDPN>::reset(&v45, 0LL);
  auto_rc<DMMVIDPN>::reset((__int64 *)&v42, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v43 + 40));
LABEL_32:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
  if ( v51 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  return (unsigned int)v9;
}
