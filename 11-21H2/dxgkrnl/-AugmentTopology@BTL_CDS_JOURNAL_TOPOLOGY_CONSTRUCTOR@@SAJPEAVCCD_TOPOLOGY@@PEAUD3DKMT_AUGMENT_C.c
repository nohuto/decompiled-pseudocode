/*
 * XREFs of ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290
 * Callers:
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C01D4080 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01EE858 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0019678 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0019D70 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01AC918 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D44BC (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C01EE1C4 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C03A96F4 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C03A9A88 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C03A9CF8 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03AC5EC (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // r14d
  unsigned int v7; // ebx
  char IsPrimaryClonePathByModality; // si
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  const struct _LUID *v12; // rdx
  _DWORD *v13; // rcx
  unsigned int v14; // r8d
  int v15; // eax
  _DWORD *v16; // rcx
  bool v17; // r9
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // r11
  DXGGLOBAL *Global; // rax
  unsigned int *v21; // rdi
  struct DXGADAPTER *v22; // rax
  struct DXGADAPTER *v23; // r12
  int v24; // ebx
  __int64 v25; // rax
  int v26; // eax
  unsigned int i; // ebx
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v31; // rdi
  int v32; // eax
  __int64 v33; // rdi
  unsigned int v34; // ecx
  DXGMONITOR *v35; // rbx
  char v36; // al
  bool v37; // r8
  bool v38; // r9
  char v39; // dl
  int v40; // r9d
  int v41; // r8d
  bool v42; // r9
  char IsVirtualModeSupportDisabled; // si
  bool v44; // zf
  char v45; // [rsp+20h] [rbp-E0h]
  char v46; // [rsp+28h] [rbp-D8h]
  int v47; // [rsp+38h] [rbp-C8h]
  int v48; // [rsp+40h] [rbp-C0h]
  unsigned int v49; // [rsp+60h] [rbp-A0h] BYREF
  struct DMMVIDPNTOPOLOGY *v50; // [rsp+68h] [rbp-98h] BYREF
  DXGMONITOR *v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  char *v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  struct DXGADAPTER *v55; // [rsp+90h] [rbp-70h]
  unsigned __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v57[144]; // [rsp+A0h] [rbp-60h] BYREF

  *((_DWORD *)a2 + 4) = -1;
  v3 = 0;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  if ( (*(_DWORD *)a2 & 8) != 0 )
    CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(this, (struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3));
  v7 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 8);
    if ( v9 )
      v10 = *(_WORD *)(v9 + 20);
    else
      v10 = 0;
    if ( v7 >= v10 )
    {
      if ( !a3 )
        return 3223192377LL;
      Global = DXGGLOBAL_GetGlobal();
      v21 = (unsigned int *)((char *)a2 + 4);
      v22 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 4), &v56);
      v55 = v22;
      v23 = v22;
      if ( !v22 )
      {
        WdLogSingleEntry4(3LL, this, *((_QWORD *)this + 8), *((int *)a2 + 2), *v21);
        return (unsigned int)-1073741810;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, v22, 0LL);
      v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57, 0LL);
      if ( v24 < 0 )
      {
LABEL_62:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57);
        DXGADAPTER::ReleaseReference(v23);
        return (unsigned int)v24;
      }
      v53 = (char *)v23 + 2792;
      v25 = *((_QWORD *)v23 + 349);
      if ( !v25 )
      {
        v24 = -1073741637;
        WdLogSingleEntry3(3LL, *((int *)a2 + 2), *v21, -1073741637LL);
        goto LABEL_62;
      }
      v51 = *(DXGMONITOR **)(v25 + 104);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v54, (__int64)v51);
      v52 = 0LL;
      v26 = VIDPN_MGR::CreateClientVidPn(v51, &v52);
      v24 = v26;
      if ( v26 < 0 )
      {
        WdLogSingleEntry5(2LL, v26, *((int *)v23 + 102), *((unsigned int *)v23 + 101), this, *((_QWORD *)this + 8));
LABEL_47:
        auto_rc<DMMVIDPN>::reset(&v52, 0LL);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v54 + 40));
        goto LABEL_62;
      }
      v50 = (struct DMMVIDPNTOPOLOGY *)(v52 + 96);
      if ( v52 == -96 )
      {
        WdLogSingleEntry5(2LL, v23, *((int *)v23 + 102), *((unsigned int *)v23 + 101), this, *((_QWORD *)this + 8));
        v24 = -1073741823;
        goto LABEL_47;
      }
      for ( i = 0; ; ++i )
      {
        v28 = *((_QWORD *)this + 8);
        v49 = i;
        v29 = v28 ? *(_WORD *)(v28 + 20) : 0;
        if ( i >= v29 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
        v31 = PathDescriptor;
        if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v23 + 101)
          && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v23 + 102) )
        {
          v32 = VIDPN_MGR::AddPathToVidPnTopology(
                  v51,
                  v50,
                  *((_DWORD *)PathDescriptor + 6),
                  *((_DWORD *)PathDescriptor + 7),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  i,
                  0,
                  D3DKMDT_MCC_IGNORE);
          v24 = v32;
          if ( v32 < 0 )
          {
            WdLogSingleEntry5(
              2LL,
              v32,
              *((int *)v31 + 5),
              *((unsigned int *)v31 + 4),
              *((unsigned int *)v31 + 6),
              *((unsigned int *)v31 + 7));
            goto LABEL_47;
          }
          i = v49;
        }
      }
      v24 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v50, a2);
      if ( v24 < 0 )
        goto LABEL_47;
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v51 + 15) + 72LL), 1u);
      v33 = *((_QWORD *)v51 + 15);
      v34 = *((_DWORD *)a2 + 4);
      v23 = v55;
      if ( v34 == -1 )
        goto LABEL_44;
      v53 = *(char **)v53;
      if ( !v53 )
      {
        WdLogSingleEntry1(2LL, 9372LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The selected adapter is render-only",
          9372LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v34 = *((_DWORD *)a2 + 4);
LABEL_44:
        WdLogSingleEntry3(2LL, v34, *((int *)a2 + 2), *((unsigned int *)a2 + 1));
        v24 = -1073741811;
LABEL_45:
        if ( v33 )
          ReferenceCounted::Release((ReferenceCounted *)(v33 + 64));
        goto LABEL_47;
      }
      MONITOR_MGR::AcquireMonitorShared(&v51, (__int64)v55, v34);
      v35 = v51;
      if ( v51 )
      {
        if ( *((_DWORD *)v51 + 78) != 1 )
          WdLogSingleEntry0(1LL);
        IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v35);
        ExReleaseResourceLite((PERESOURCE)((char *)v35 + 24));
        KeLeaveCriticalRegion();
        v44 = IsVirtualModeSupportDisabled == 0;
        IsPrimaryClonePathByModality = 1;
        if ( !v44 )
        {
          v37 = 1;
          v38 = 1;
          goto LABEL_52;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, -1073741632LL);
        RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v51);
      }
      v36 = v53[289];
      v37 = v36 == 0;
      v38 = v53[290] == 0;
      if ( v36 )
      {
        v39 = 0;
        if ( (*((_DWORD *)v53 + 6) & 0x20) != 0 )
        {
LABEL_53:
          v48 = *((_DWORD *)a2 + 6);
          v47 = *((_DWORD *)a2 + 5);
          v46 = !v38;
          v40 = *((_DWORD *)a2 + 4);
          v45 = !v37;
          v41 = *((_DWORD *)a2 + 3);
          v50 = 0LL;
          v24 = CCD_TOPOLOGY::AddPathDescriptor(
                  (__int64)this,
                  (__int64 *)((char *)a2 + 4),
                  v41,
                  v40,
                  v45,
                  v46,
                  v39 ^ 1u,
                  v47,
                  v48,
                  0,
                  (__int64 *)&v50);
          if ( v24 >= 0 )
          {
            if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                        this,
                        (const struct _LUID *)v50 + 2,
                        *((_DWORD *)v50 + 7),
                        &v49) >= 0 )
            {
              CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, v49);
              IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v49);
            }
            CDS_JOURNAL::FillPathDescriptor(v50, a2, IsPrimaryClonePathByModality, v42, v23);
          }
          goto LABEL_45;
        }
      }
LABEL_52:
      v39 = 1;
      goto LABEL_53;
    }
    v11 = CCD_TOPOLOGY::GetPathDescriptor(this, v7);
    if ( CCD_TOPOLOGY::IsMatchingSource(v11, (const struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3)) )
      break;
    ++v7;
  }
  *((_DWORD *)a2 + 4) = v13[7];
  *((_DWORD *)a2 + 5) = v13[22];
  v15 = v13[23];
  v16 = (_DWORD *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 6) = v15;
  if ( !v16 )
    return v3;
  if ( (v16[18] & 0x180000) == 0x180000 && !v16[43] && !v16[44] )
    return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, v12, v14);
  if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v7) )
  {
    CDS_JOURNAL::FillPathDescriptor(v18, a2, 1, v17, 0LL);
    return v3;
  }
  return 3223192371LL;
}
