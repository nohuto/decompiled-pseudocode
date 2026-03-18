/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03AC838
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01D6840 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011D9C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0019D70 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01AC918 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D5B10 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C03A96F4 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C03A9A88 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_ExtendTopology(struct CCD_TOPOLOGY *this, const struct CDS_JOURNAL::_ENTRY *a2)
{
  DXGGLOBAL *Global; // rax
  unsigned int *v5; // rdi
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  char IsPrimaryClonePathByModality; // r15
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  DMMVIDPNTOPOLOGY *v22; // r10
  __int64 v23; // rax
  unsigned int v24; // edi
  int v25; // eax
  __int64 v26; // rax
  DMMVIDPNTOPOLOGY *v27; // rax
  unsigned int v28; // ecx
  DXGMONITOR *v29; // rbx
  char IsVirtualModeSupportDisabled; // di
  bool v31; // r8
  bool v32; // r9
  char v33; // al
  char v34; // dl
  int v35; // r9d
  int v36; // eax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v37; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v39[2]; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v40[4]; // [rsp+28h] [rbp-D8h]
  char v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+38h] [rbp-C8h]
  int v43; // [rsp+40h] [rbp-C0h]
  unsigned int v44; // [rsp+60h] [rbp-A0h] BYREF
  DXGMONITOR *v45; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v50[144]; // [rsp+90h] [rbp-70h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  v5 = (unsigned int *)((char *)a2 + 20);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 20), &v49);
  v7 = (__int64)v6;
  if ( !v6 )
  {
    WdLogSingleEntry4(3LL, this, *((_QWORD *)this + 8), *((int *)a2 + 6), *v5);
    LODWORD(v8) = -1073741810;
    return (unsigned int)v8;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v6, 0LL);
  LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
  if ( (int)v8 < 0 )
    goto LABEL_54;
  v9 = *(_QWORD *)(v7 + 2792);
  if ( !v9 )
  {
    LODWORD(v8) = -1073741637;
    WdLogSingleEntry3(3LL, *((int *)a2 + 6), *v5, -1073741637LL);
    goto LABEL_54;
  }
  v45 = *(DXGMONITOR **)(v9 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v48, (__int64)v45);
  v47 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn(v45, &v47);
  LODWORD(v8) = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry5(2LL, v10, v7, *(int *)(v7 + 408), *(unsigned int *)(v7 + 404), *((_QWORD *)this + 8));
    goto LABEL_36;
  }
  v46 = (DMMVIDPNTOPOLOGY *)(v47 + 96);
  if ( v47 == -96 )
  {
    WdLogSingleEntry4(2LL, v7, *(int *)(v7 + 408), *(unsigned int *)(v7 + 404), *((_QWORD *)this + 8));
    LODWORD(v8) = -1073741823;
    goto LABEL_36;
  }
  v11 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 8);
    v44 = v11;
    v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
    if ( v11 >= v14 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v11);
    v16 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *(_DWORD *)(v7 + 404)
      && *((_DWORD *)PathDescriptor + 5) == *(_DWORD *)(v7 + 408) )
    {
      v17 = VIDPN_MGR::AddPathToVidPnTopology(
              v45,
              v46,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v11,
              0,
              D3DKMDT_MCC_ENFORCE);
      v8 = v17;
      if ( v17 < 0 )
      {
        v18 = *((unsigned int *)v16 + 7);
        v19 = *((unsigned int *)v16 + 6);
        v20 = *((unsigned int *)v16 + 4);
        v21 = *((int *)v16 + 5);
        goto LABEL_20;
      }
      v11 = v44;
    }
    ++v11;
  }
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v46, *((_DWORD *)a2 + 8)) )
  {
    WdLogSingleEntry0(1LL);
    v22 = v46;
  }
  v23 = *(_QWORD *)(v7 + 2792);
  v24 = 0;
  v44 = 0;
  if ( !*(_DWORD *)(v23 + 96) )
    goto LABEL_28;
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v22, v24) )
  {
LABEL_27:
    v26 = *(_QWORD *)(v7 + 2792);
    v44 = ++v24;
    if ( v24 >= *(_DWORD *)(v26 + 96) )
      goto LABEL_28;
  }
  v25 = VIDPN_MGR::AddPathToVidPnTopology(
          v45,
          v22,
          v24,
          *((_DWORD *)a2 + 8),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_ENFORCE);
  v8 = v25;
  if ( v25 == -1071774975 )
  {
    v22 = v46;
    goto LABEL_27;
  }
  if ( v25 < 0 )
  {
    v18 = *((unsigned int *)a2 + 8);
    v20 = *(unsigned int *)(v7 + 404);
    v21 = *(int *)(v7 + 408);
    v19 = v24;
LABEL_20:
    *(_QWORD *)v40 = v18;
    *(_QWORD *)v39 = v19;
LABEL_48:
    WdLogSingleEntry5(2LL, v8, v21, v20, *(_QWORD *)v39, *(_QWORD *)v40);
    goto LABEL_36;
  }
LABEL_28:
  v27 = *(DMMVIDPNTOPOLOGY **)(v7 + 2792);
  v46 = v27;
  if ( v24 >= *((_DWORD *)v27 + 24) )
  {
    LODWORD(v8) = -1071774975;
    goto LABEL_36;
  }
  v28 = *((_DWORD *)a2 + 8);
  if ( v28 == -1 )
  {
LABEL_35:
    WdLogSingleEntry2(2LL, v28, v7);
    LODWORD(v8) = -1073741811;
    goto LABEL_36;
  }
  if ( !v27 )
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
    v28 = *((_DWORD *)a2 + 8);
    goto LABEL_35;
  }
  MONITOR_MGR::AcquireMonitorShared(&v45, v7, v28);
  v29 = v45;
  if ( !v45 )
  {
    WdLogSingleEntry1(2LL, -1073741632LL);
    RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v45);
    goto LABEL_43;
  }
  if ( *((_DWORD *)v45 + 78) != 1 )
    WdLogSingleEntry0(1LL);
  IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v29);
  ExReleaseResourceLite((PERESOURCE)((char *)v29 + 24));
  KeLeaveCriticalRegion();
  if ( IsVirtualModeSupportDisabled )
  {
    v31 = 1;
    v32 = 1;
    goto LABEL_45;
  }
LABEL_43:
  v33 = *((_BYTE *)v46 + 289);
  v31 = v33 == 0;
  v32 = *((_BYTE *)v46 + 290) == 0;
  if ( !v33 || (v34 = 0, (*((_DWORD *)v46 + 6) & 0x20) == 0) )
LABEL_45:
    v34 = 1;
  v43 = *((_DWORD *)a2 + 10);
  v42 = *((_DWORD *)a2 + 9);
  v41 = !v32;
  v35 = *((_DWORD *)a2 + 8);
  v45 = 0LL;
  v36 = CCD_TOPOLOGY::AddPathDescriptor(
          (__int64)this,
          (__int64 *)((char *)a2 + 20),
          v44,
          v35,
          !v31,
          v41,
          v34 ^ 1u,
          v42,
          v43,
          0,
          (__int64 *)&v45);
  v8 = v36;
  if ( v36 < 0 )
  {
    v20 = *((unsigned int *)a2 + 5);
    v21 = *((int *)a2 + 6);
    *(_QWORD *)v40 = *((unsigned int *)a2 + 8);
    *(_QWORD *)v39 = v44;
    goto LABEL_48;
  }
  v37 = v45;
  v44 = 0;
  if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(this, (const struct _LUID *)v45 + 2, *((_DWORD *)v45 + 7), &v44) >= 0 )
  {
    CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, v44);
    IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v44);
  }
  CDS_JOURNAL::_FillPathDescriptor(v37, a2, IsPrimaryClonePathByModality, 0, (struct DXGADAPTER *)v7);
LABEL_36:
  auto_rc<DMMVIDPN>::reset(&v47, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v48 + 40));
LABEL_54:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
  return (unsigned int)v8;
}
