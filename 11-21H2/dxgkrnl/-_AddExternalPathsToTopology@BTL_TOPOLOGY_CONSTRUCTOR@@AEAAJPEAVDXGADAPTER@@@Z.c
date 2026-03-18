/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03AD350
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C03AD310 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011D9C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N22@Z @ 0x1C03ADC4C (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C03AEE84 (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C03AEF20 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        struct DXGADAPTER *a2)
{
  BTL_TOPOLOGY_CONSTRUCTOR *v3; // r12
  VIDPN_MGR *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct DMMVIDPNTOPOLOGY *v9; // r13
  unsigned int i; // esi
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v14; // rdi
  int v15; // eax
  int v16; // esi
  __int64 v17; // rdi
  const struct DMMVIDEOPRESENTTARGET *j; // rax
  unsigned int v19; // r10d
  __int64 v20; // r12
  DXGMONITOR *v21; // rbx
  char IsVirtualModeSupportDisabled; // si
  bool v23; // cl
  char v24; // al
  unsigned int PathSourceFromTarget; // eax
  __int64 v26; // rsi
  struct DMMVIDPNTOPOLOGY *v27; // r10
  int v28; // eax
  int v29; // eax
  const struct DMMVIDEOPRESENTTARGET *v30; // r13
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // rax
  __int64 v32; // r12
  unsigned int v33; // esi
  DXGMONITOR *v34; // rbx
  char v35; // si
  bool v36; // cl
  char v37; // al
  struct DMMVIDPNTOPOLOGY *v38; // r10
  int v39; // eax
  int v41; // eax
  int v42; // [rsp+50h] [rbp-29h]
  DMMVIDPNTOPOLOGY *v43; // [rsp+58h] [rbp-21h]
  DXGMONITOR *v44; // [rsp+60h] [rbp-19h] BYREF
  __int64 v45; // [rsp+68h] [rbp-11h] BYREF
  __int64 v46; // [rsp+70h] [rbp-9h] BYREF
  DXGMONITOR *v47; // [rsp+78h] [rbp-1h] BYREF
  VIDPN_MGR *v48; // [rsp+80h] [rbp+7h]
  __int64 v49[9]; // [rsp+88h] [rbp+Fh] BYREF
  char v51; // [rsp+E8h] [rbp+6Fh]
  char v52; // [rsp+E8h] [rbp+6Fh]
  char v53; // [rsp+F0h] [rbp+77h]
  char v54; // [rsp+F0h] [rbp+77h]
  bool v55; // [rsp+F8h] [rbp+7Fh]
  bool v56; // [rsp+F8h] [rbp+7Fh]

  v3 = this;
  v4 = *(VIDPN_MGR **)(*((_QWORD *)a2 + 349) + 104LL);
  v48 = v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v49, (__int64)v4);
  v5 = *((_QWORD *)a2 + 349);
  v46 = 0LL;
  v44 = 0LL;
  if ( *(_BYTE *)(v5 + 290) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v4, &v46) >= 0 )
  {
    v6 = v46;
    if ( !v46 )
      WdLogSingleEntry0(1LL);
    v44 = (DXGMONITOR *)(v6 + 96);
  }
  v45 = 0LL;
  v7 = VIDPN_MGR::CreateClientVidPn(v4, &v45);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry4(2LL, v7, a2, *((int *)a2 + 102), *((unsigned int *)a2 + 101));
    goto LABEL_87;
  }
  v9 = (struct DMMVIDPNTOPOLOGY *)(v45 + 96);
  v43 = (DMMVIDPNTOPOLOGY *)(v45 + 96);
  if ( v45 == -96 )
  {
    WdLogSingleEntry4(2LL, -96LL, a2, *((int *)a2 + 102), *((unsigned int *)a2 + 101));
    v8 = -1073741823;
    goto LABEL_87;
  }
  for ( i = 0; ; ++i )
  {
    v11 = *(_QWORD *)(*(_QWORD *)v3 + 64LL);
    v12 = v11 ? *(_WORD *)(v11 + 20) : 0;
    if ( i >= v12 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)v3, i);
    v14 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 101)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 102) )
    {
      v15 = VIDPN_MGR::AddPathToVidPnTopology(
              v4,
              v9,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v8 = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v15,
          *((int *)v14 + 5),
          *((unsigned int *)v14 + 4),
          *((unsigned int *)v14 + 6),
          *((unsigned int *)v14 + 7));
        goto LABEL_87;
      }
    }
  }
  v16 = -1071774975;
  v42 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 15) + 72LL));
  v17 = *((_QWORD *)v4 + 15);
  if ( v44 )
  {
    for ( j = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v17);
          ;
          j = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v30, (const struct DMMVIDEOPRESENTTARGETSET *)v17) )
    {
      v30 = j;
      if ( !j )
        goto LABEL_51;
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v43, *((_DWORD *)j + 6))
        && (v19 != *((_DWORD *)v3 + 6)
         || *((_DWORD *)a2 + 101) != *((_DWORD *)v3 + 3)
         || *((_DWORD *)a2 + 102) != *((_DWORD *)v3 + 4))
        && *((_QWORD *)v30 + 14)
        && !*((_DWORD *)v30 + 23) )
      {
        break;
      }
LABEL_49:
      ;
    }
    if ( v19 == -1 )
      goto LABEL_96;
    v20 = *((_QWORD *)a2 + 349);
    if ( !v20 )
    {
      WdLogSingleEntry1(2LL, 9372LL);
LABEL_95:
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
      v19 = *((_DWORD *)v30 + 6);
LABEL_96:
      WdLogSingleEntry2(2LL, v19, a2);
      v8 = -1073741811;
      goto LABEL_85;
    }
    MONITOR_MGR::AcquireMonitorShared(&v47, (__int64)a2, v19);
    v21 = v47;
    if ( v47 )
    {
      if ( *((_DWORD *)v47 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v21);
      ExReleaseResourceLite((PERESOURCE)((char *)v21 + 24));
      KeLeaveCriticalRegion();
      if ( IsVirtualModeSupportDisabled )
      {
        v23 = 1;
        v55 = 1;
        v53 = 1;
LABEL_38:
        v51 = 1;
LABEL_39:
        v3 = this;
        v8 = 0;
        if ( *((_BYTE *)this + 10) && v23
          || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v44, *((unsigned int *)v30 + 6)),
              v26 = PathSourceFromTarget,
              PathSourceFromTarget == -1)
          || DMMVIDPNTOPOLOGY::IsSourceInTopology(v43, PathSourceFromTarget)
          || (v28 = VIDPN_MGR::AddPathToVidPnTopology(
                      v48,
                      v27,
                      v26,
                      *((_DWORD *)v30 + 6),
                      (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                      0xFFFFu,
                      0,
                      D3DKMDT_MCC_IGNORE),
              v8 = v28,
              v28 == -1071774975) )
        {
          v16 = v42;
        }
        else
        {
          if ( v28 < 0 )
          {
            WdLogSingleEntry5(
              2LL,
              v28,
              *((int *)a2 + 102),
              *((unsigned int *)a2 + 101),
              v26,
              *((unsigned int *)v30 + 6));
            goto LABEL_85;
          }
          v29 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                  this,
                  (const struct _LUID *)((char *)a2 + 404),
                  v26,
                  *((_DWORD *)v30 + 6),
                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v30 + 20),
                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v30 + 21),
                  !v55,
                  v53 != 1,
                  v51 != 1);
          v16 = v42;
          v8 = v29;
          if ( v29 >= 0 )
            v16 = v29;
          v42 = v16;
        }
        goto LABEL_49;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741632LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v47);
    }
    v24 = *(_BYTE *)(v20 + 289);
    v55 = v24 == 0;
    v23 = *(_BYTE *)(v20 + 290) == 0;
    v53 = v23;
    if ( v24 )
    {
      v51 = 0;
      if ( (*(_DWORD *)(v20 + 24) & 0x20) != 0 )
        goto LABEL_39;
    }
    goto LABEL_38;
  }
LABEL_51:
  FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v17);
LABEL_81:
  v30 = FirstBestSecondaryTarget;
  if ( FirstBestSecondaryTarget )
  {
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v43, *((_DWORD *)FirstBestSecondaryTarget + 6))
      || v19 == *((_DWORD *)v3 + 6)
      && *((_DWORD *)a2 + 101) == *((_DWORD *)v3 + 3)
      && *((_DWORD *)a2 + 102) == *((_DWORD *)v3 + 4)
      || !*((_QWORD *)v30 + 14) )
    {
      goto LABEL_80;
    }
    if ( v19 == -1 )
      goto LABEL_96;
    v32 = *((_QWORD *)a2 + 349);
    v33 = 0;
    if ( !v32 )
    {
      WdLogSingleEntry1(2LL, 9372LL);
      goto LABEL_95;
    }
    MONITOR_MGR::AcquireMonitorShared(&v44, (__int64)a2, v19);
    v34 = v44;
    if ( v44 )
    {
      if ( *((_DWORD *)v44 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      v35 = DXGMONITOR::_IsVirtualModeSupportDisabled(v34);
      ExReleaseResourceLite((PERESOURCE)((char *)v34 + 24));
      KeLeaveCriticalRegion();
      if ( v35 )
      {
        v36 = 1;
        v56 = 1;
        v54 = 1;
        v33 = 0;
        goto LABEL_70;
      }
      v33 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741632LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v44);
    }
    v37 = *(_BYTE *)(v32 + 289);
    v56 = v37 == 0;
    v36 = *(_BYTE *)(v32 + 290) == 0;
    v54 = v36;
    if ( v37 )
    {
      v52 = 0;
      if ( (*(_DWORD *)(v32 + 24) & 0x20) != 0 )
      {
LABEL_71:
        v3 = this;
        v8 = 0;
        if ( *((_BYTE *)this + 10) && v36 || !*(_DWORD *)(*((_QWORD *)a2 + 349) + 96LL) )
        {
LABEL_79:
          v16 = v42;
          goto LABEL_80;
        }
        v38 = v43;
        while ( 1 )
        {
          if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v38, v33) )
          {
            v39 = VIDPN_MGR::AddPathToVidPnTopology(
                    v48,
                    v38,
                    v33,
                    *((_DWORD *)v30 + 6),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE);
            v8 = v39;
            if ( v39 != -1071774975 )
            {
              if ( v39 < 0 )
              {
                WdLogSingleEntry5(
                  2LL,
                  v39,
                  *((int *)a2 + 102),
                  *((unsigned int *)a2 + 101),
                  v33,
                  *((unsigned int *)v30 + 6));
                goto LABEL_85;
              }
              v41 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                      this,
                      (const struct _LUID *)((char *)a2 + 404),
                      v33,
                      *((_DWORD *)v30 + 6),
                      (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v30 + 20),
                      (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v30 + 21),
                      !v56,
                      v54 != 1,
                      v52 != 1);
              v16 = v42;
              v8 = v41;
              if ( v41 >= 0 )
                v16 = v41;
              v42 = v16;
LABEL_80:
              FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
                                           v30,
                                           (const struct DMMVIDEOPRESENTTARGETSET *)v17);
              goto LABEL_81;
            }
            v38 = v43;
          }
          if ( ++v33 >= *(_DWORD *)(*((_QWORD *)a2 + 349) + 96LL) )
            goto LABEL_79;
        }
      }
    }
LABEL_70:
    v52 = 1;
    goto LABEL_71;
  }
  if ( v8 != -1071774975 )
    v16 = v8;
  v8 = v16;
LABEL_85:
  if ( v17 )
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
LABEL_87:
  auto_rc<DMMVIDPN>::reset(&v45, 0LL);
  auto_rc<DMMVIDPN>::reset(&v46, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v49[0] + 40));
  return v8;
}
