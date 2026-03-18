/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03ADCB8
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03AE3F0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03AE4D0 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03AEB50 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03AEBF4 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
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
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0010C30 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011D9C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A63A0 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B0CF4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0206098 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N22@Z @ 0x1C03ADC4C (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C03AF120 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        char a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  struct DXGADAPTER *v9; // r14
  int v10; // ebx
  VIDPN_MGR *v11; // r15
  int ClientVidPn; // eax
  unsigned int i; // esi
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rdi
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rdi
  struct DMMVIDEOPRESENTTARGET *v23; // rbx
  _QWORD *v24; // r13
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  unsigned int v26; // r10d
  __int64 v27; // rsi
  DXGMONITOR *v28; // rbx
  char IsVirtualModeSupportDisabled; // si
  bool v30; // cl
  unsigned int v31; // esi
  char v32; // al
  unsigned int v33; // edx
  int IsTargetForceable; // eax
  int v35; // eax
  struct DXGADAPTER *v36; // r10
  unsigned int v37; // eax
  unsigned int v38; // ecx
  int v39; // eax
  char v41; // [rsp+50h] [rbp-B0h]
  char v42; // [rsp+51h] [rbp-AFh]
  bool v43; // [rsp+52h] [rbp-AEh]
  unsigned __int8 v44; // [rsp+53h] [rbp-ADh] BYREF
  bool v45; // [rsp+54h] [rbp-ACh]
  char v46; // [rsp+55h] [rbp-ABh]
  char v47; // [rsp+56h] [rbp-AAh]
  char v48; // [rsp+57h] [rbp-A9h]
  struct DMMVIDEOPRESENTTARGET *v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+60h] [rbp-A0h]
  unsigned int v51; // [rsp+64h] [rbp-9Ch]
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v53; // [rsp+70h] [rbp-90h]
  const struct DMMVIDPN *v54; // [rsp+78h] [rbp-88h] BYREF
  DMMVIDPNTOPOLOGY *v55; // [rsp+80h] [rbp-80h]
  DXGMONITOR *v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v57; // [rsp+90h] [rbp-70h]
  VIDPN_MGR *v58; // [rsp+98h] [rbp-68h]
  struct DXGADAPTER *v59; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v60; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v62[144]; // [rsp+C0h] [rbp-40h] BYREF

  v51 = a4;
  v48 = a2;
  LOBYTE(v50) = 0;
  Global = DXGGLOBAL_GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v60);
  v59 = v8;
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry4(3LL, *this, *((_QWORD *)*this + 8), a3->HighPart, a3->LowPart);
    return (unsigned int)-1073741810;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v8, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62, 0LL);
  if ( v10 < 0 )
    goto LABEL_80;
  v57 = (__int64 *)((char *)v9 + 2792);
  v58 = *(VIDPN_MGR **)(*((_QWORD *)v9 + 349) + 104LL);
  v11 = v58;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v61, (__int64)v58);
  v54 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v58, (__int64 *)&v54);
  v10 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    WdLogSingleEntry5(2LL, ClientVidPn, v9, *((int *)v9 + 102), *((unsigned int *)v9 + 101), this);
    goto LABEL_79;
  }
  v55 = (const struct DMMVIDPN *)((char *)v54 + 96);
  if ( v54 == (const struct DMMVIDPN *)-96LL )
  {
    WdLogSingleEntry4(2LL, v9, *((int *)v9 + 102), *((unsigned int *)v9 + 101), this);
    v10 = -1073741823;
    goto LABEL_79;
  }
  for ( i = 0; ; ++i )
  {
    v14 = *((_QWORD *)*this + 8);
    v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
    if ( i >= v15 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v17 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v9 + 101)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v9 + 102) )
    {
      v18 = *((_DWORD *)PathDescriptor + 6);
      v19 = *((_DWORD *)PathDescriptor + 7);
      v20 = (unsigned __int8)v50;
      if ( v18 == a4 )
        v20 = 1;
      v50 = v20;
      v21 = VIDPN_MGR::AddPathToVidPnTopology(
              v11,
              v55,
              v18,
              v19,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v10 = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v21,
          *((int *)v17 + 5),
          *((unsigned int *)v17 + 4),
          *((unsigned int *)v17 + 6),
          *((unsigned int *)v17 + 7));
        goto LABEL_79;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v11 + 15) + 72LL), 1u);
  v22 = (_QWORD *)*((_QWORD *)v11 + 15);
  v9 = v59;
  v23 = 0LL;
  v53 = -1;
  v49 = 0LL;
  v43 = 0;
  v24 = (_QWORD *)v22[3];
  v42 = 0;
  v41 = 0;
  if ( v24 == v22 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v24 - 1)) == 0LL )
  {
LABEL_77:
    v10 = -1073741275;
    goto LABEL_78;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)NextTarget + 23)
      || DMMVIDPNTOPOLOGY::IsTargetInTopology(v55, *((_DWORD *)NextTarget + 6))
      || v26 == *((_DWORD *)this + 6) )
    {
      goto LABEL_37;
    }
    if ( v26 == -1 )
      goto LABEL_76;
    v27 = *v57;
    v52 = v27;
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
      v26 = *((_DWORD *)NextTarget + 6);
LABEL_76:
      WdLogSingleEntry2(2LL, v9, v26);
      v10 = -1073741811;
      goto LABEL_78;
    }
    MONITOR_MGR::AcquireMonitorShared(&v56, (__int64)v9, v26);
    v28 = v56;
    if ( v56 )
    {
      if ( *((_DWORD *)v56 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v28);
      ExReleaseResourceLite((PERESOURCE)((char *)v28 + 24));
      KeLeaveCriticalRegion();
      if ( IsVirtualModeSupportDisabled )
      {
        v30 = 1;
        v45 = 1;
        v46 = 1;
LABEL_33:
        v47 = 1;
        v31 = 0;
        goto LABEL_34;
      }
      v27 = v52;
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741632LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v56);
    }
    v32 = *(_BYTE *)(v27 + 289);
    v45 = v32 == 0;
    v30 = *(_BYTE *)(v27 + 290) == 0;
    v46 = v30;
    if ( !v32 || (*(_DWORD *)(v27 + 24) & 0x20) == 0 )
      goto LABEL_33;
    v31 = 0;
    v47 = 0;
LABEL_34:
    if ( !(_BYTE)v50 )
      break;
    if ( v30 )
      goto LABEL_46;
LABEL_36:
    v23 = v49;
LABEL_37:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v22, NextTarget);
    if ( !NextTarget )
    {
      if ( v23 )
      {
        v10 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                (struct _LUID *)((char *)v9 + 404),
                v53,
                *((_DWORD *)v49 + 6),
                (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v49 + 20),
                (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v23 + 21),
                v43,
                v42 != 0,
                v41 != 0);
        goto LABEL_78;
      }
      goto LABEL_77;
    }
  }
  if ( *((_BYTE *)this + 10) && v30 )
    goto LABEL_36;
LABEL_46:
  if ( !*((_QWORD *)NextTarget + 14) )
  {
    if ( !v48 )
      goto LABEL_36;
    v33 = *((_DWORD *)NextTarget + 6);
    v44 = 0;
    IsTargetForceable = DmmIsTargetForceable(v9, v33, &v44, 0);
    v10 = IsTargetForceable;
    if ( IsTargetForceable < 0 )
    {
      WdLogSingleEntry5(
        2LL,
        IsTargetForceable,
        *((int *)v9 + 102),
        *((unsigned int *)v9 + 101),
        *((unsigned int *)NextTarget + 6),
        *((_QWORD *)*this + 8));
      goto LABEL_78;
    }
    if ( !v44 )
      goto LABEL_36;
  }
  v23 = v49;
  if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v9, NextTarget, v49) )
    goto LABEL_37;
  v52 = 0LL;
  v35 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v58, v54, &v52);
  v10 = v35;
  if ( v35 < 0 )
  {
    WdLogSingleEntry5(2LL, v35, v9, *((int *)v9 + 102), *((unsigned int *)v9 + 101), this);
    goto LABEL_74;
  }
  v36 = (struct DXGADAPTER *)(v52 + 96);
  v59 = (struct DXGADAPTER *)(v52 + 96);
  if ( v52 == -96 )
  {
    WdLogSingleEntry4(2LL, v9, *((int *)v9 + 102), *((unsigned int *)v9 + 101), this);
    v10 = -1073741823;
    goto LABEL_74;
  }
  v37 = v51;
  if ( v51 != -1 )
    v31 = v51;
  while ( 2 )
  {
    if ( v37 == -1 )
    {
      v38 = *(_DWORD *)(*v57 + 96);
      v37 = v51;
    }
    else
    {
      v38 = v37 + 1;
    }
    if ( v31 >= v38 )
    {
      v23 = v49;
LABEL_69:
      auto_rc<DMMVIDPN>::reset(&v52, 0LL);
      goto LABEL_37;
    }
    if ( v37 == -1 && DMMVIDPNTOPOLOGY::IsSourceInTopology(v36, v31) )
    {
LABEL_63:
      v37 = v51;
      ++v31;
      continue;
    }
    break;
  }
  v39 = VIDPN_MGR::AddPathToVidPnTopology(
          v58,
          v36,
          v31,
          *((_DWORD *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v10 = v39;
  if ( v39 == -1071774975 )
  {
    v36 = v59;
    goto LABEL_63;
  }
  if ( v39 >= 0 )
  {
    v23 = NextTarget;
    v53 = v31;
    v49 = NextTarget;
    v43 = !v45;
    v42 = v46 ^ 1;
    if ( v47 )
    {
      v41 = 0;
      v43 = !v45;
      v42 = v46 ^ 1;
    }
    else
    {
      v41 = 1;
    }
    goto LABEL_69;
  }
  WdLogSingleEntry5(2LL, v39, *((int *)v9 + 102), *((unsigned int *)v9 + 101), v31, *((unsigned int *)NextTarget + 6));
LABEL_74:
  auto_rc<DMMVIDPN>::reset(&v52, 0LL);
LABEL_78:
  ReferenceCounted::Release((ReferenceCounted *)(v22 + 8));
LABEL_79:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v54, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v61 + 40));
LABEL_80:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
  DXGADAPTER::ReleaseReference(v9);
  return (unsigned int)v10;
}
