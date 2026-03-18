/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01AC3D4
 * Callers:
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C01AB8B4 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01E8CE0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000CCB4 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0011B4C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C01A25AC (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01A48E4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01AC918 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D7DA0 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  __int64 v7; // rcx
  char *v9; // rsi
  unsigned __int16 v10; // r12
  __int64 v11; // rdx
  int v12; // eax
  bool IsCoreResourceSharedOwner; // al
  unsigned int v14; // edx
  __int64 v15; // r15
  DXGMONITOR *v16; // rbx
  char IsVirtualModeSupportDisabled; // di
  char v18; // al
  bool v19; // dl
  bool v20; // r8
  char v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rbx
  struct DMMVIDPNPRESENTPATH *v25; // rsi
  char *v26; // rdi
  unsigned int *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int64 v34; // xmm0_8
  __int64 v35; // rcx
  __int64 v36; // rax
  struct DMMVIDPNPRESENTPATH *v37; // rax
  DMMVIDPNSOURCEMODE *v38; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v40; // xmm1
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v41; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v43; // r9
  __int64 v44; // r8
  int v45; // eax
  int v47; // ebx
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v49; // r9
  int v50; // [rsp+20h] [rbp-60h]
  int v51; // [rsp+28h] [rbp-58h]
  int v52; // [rsp+30h] [rbp-50h]
  _WORD v53[7]; // [rsp+62h] [rbp-1Eh] BYREF
  DXGMONITOR *v54; // [rsp+70h] [rbp-10h] BYREF
  __int64 v55; // [rsp+78h] [rbp-8h] BYREF
  struct DMMVIDPNPRESENTPATH *v57; // [rsp+D0h] [rbp+50h] BYREF
  char v58; // [rsp+D8h] [rbp+58h]

  v58 = a4;
  v57 = a3;
  v7 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v7 + 84) & 5) == 5 )
  {
    WdLogSingleEntry0(1LL);
    v7 = *(_QWORD *)this;
    a4 = v58;
  }
  v9 = (char *)a3 + 96;
  v10 = 0;
  v11 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL);
  v12 = *(_DWORD *)(v7 + 84);
  if ( *(_DWORD *)(v11 + 92) )
  {
    if ( (v12 & 5) != 0 )
      goto LABEL_5;
    return 0LL;
  }
  if ( (v12 & 4) != 0 )
    return 0LL;
LABEL_5:
  if ( (v12 & 4) != 0 && !*(_QWORD *)(v11 + 544) )
    return 0LL;
  if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    WdLogSingleEntry5(
      1LL,
      *((int *)a2 + 102),
      *((unsigned int *)a2 + 101),
      *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL),
      *(unsigned int *)(*(_QWORD *)v9 + 24LL),
      *(_QWORD *)(*(_QWORD *)this + 64LL));
    return 0LL;
  }
  ++*((_WORD *)this + 4);
  v53[0] = 0;
  IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner(a2);
  v14 = *(_DWORD *)(*(_QWORD *)v9 + 24LL);
  if ( !IsCoreResourceSharedOwner )
  {
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)a2 + 404),
                                          v14,
                                          (__int64)v53,
                                          0LL,
                                          0LL,
                                          0LL);
    v21 = v53[0];
    v47 = IsVirtualizationDisabledForTarget;
LABEL_40:
    if ( v47 >= 0 )
    {
      v19 = 0;
      v20 = 0;
LABEL_20:
      v22 = *(_QWORD *)v9;
      v23 = *(_QWORD *)this;
      *(_QWORD *)&v53[3] = 0LL;
      LOBYTE(v52) = v21 == 0;
      LOBYTE(v51) = !v20;
      LOBYTE(v50) = !v19;
      if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                           v23,
                           (char *)a2 + 404,
                           *(unsigned int *)(*((_QWORD *)v57 + 11) + 24LL),
                           *(unsigned int *)(v22 + 24),
                           v50,
                           v51,
                           v52,
                           *(_DWORD *)(*(_QWORD *)(v22 + 96) + 80LL),
                           *(_DWORD *)(*(_QWORD *)(v22 + 96) + 84LL),
                           *(_DWORD *)(*(_QWORD *)(v22 + 96) + 92LL),
                           &v53[3]) == -1073741789 )
      {
        v49 = *(_QWORD *)(*(_QWORD *)this + 64LL);
        if ( v49 )
          v10 = *(_WORD *)(v49 + 22);
        WdLogSingleEntry5(3LL, this, *(_QWORD *)this, v49, v10, *((unsigned __int16 *)this + 4));
      }
      else
      {
        v24 = *(_QWORD *)&v53[3];
        v25 = v57;
        v26 = (char *)v57 + 96;
        *(_DWORD *)(*(_QWORD *)&v53[3] + 276LL) = *((unsigned __int16 *)v57 + 54);
        *(_DWORD *)(v24 + 88) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 96LL) + 80LL);
        *(_DWORD *)(v24 + 92) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 96LL) + 84LL);
        *(_QWORD *)v24 |= 0x800000000000uLL;
        if ( v58 )
        {
          v27 = (unsigned int *)(v24 + 24);
          *(_QWORD *)v24 |= 0x8000000000000000uLL;
          *(_QWORD *)v24 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceActive(
                                         *((ADAPTER_DISPLAY **)a2 + 349),
                                         *(_DWORD *)(v24 + 24)) != 0) & 0x20000000000LL;
          *(_QWORD *)v24 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                         *((ADAPTER_DISPLAY **)a2 + 349),
                                         *(_DWORD *)(v24 + 24)) != 0) & 0x80000000000LL;
          v28 = *(_QWORD *)v26;
          v29 = *(_QWORD *)(*(_QWORD *)v26 + 104LL);
          if ( v29 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 96));
            v30 = *(_QWORD *)(v28 + 104);
            v24 = *(_QWORD *)&v53[3];
          }
          else
          {
            v30 = 0LL;
          }
          v55 = v30;
          v31 = *(_QWORD *)(v30 + 144);
          if ( v31 )
          {
            v32 = *(_OWORD *)(v31 + 88);
            v33 = *(_OWORD *)(v31 + 104);
            v34 = *(_QWORD *)(v31 + 120);
            *(_OWORD *)(v24 + 32) = *(_OWORD *)(v31 + 72);
            *(_OWORD *)(v24 + 48) = v32;
            *(_OWORD *)(v24 + 64) = v33;
            *(_QWORD *)(v24 + 80) = v34;
            *(_QWORD *)v24 |= 0x87uLL;
            *(_DWORD *)(v24 + 204) = *(_DWORD *)(v31 + 132);
            *(_DWORD *)(v24 + 208) = *(_DWORD *)(v31 + 136);
            *(_QWORD *)v24 |= 8uLL;
            *(_QWORD *)(v24 + 224) = *(_QWORD *)(v31 + 152);
            *(_QWORD *)(v24 + 232) = *(_QWORD *)(v31 + 144);
            *(_DWORD *)(v24 + 240) = *(_DWORD *)(v31 + 160);
            *(_QWORD *)v24 |= 0x801000000uLL;
          }
          else
          {
            *(_DWORD *)(v24 + 204) = 0;
            *(_DWORD *)(v24 + 208) = 4;
          }
          v35 = *((_QWORD *)v25 + 11);
          v36 = *(_QWORD *)(v35 + 104);
          if ( v36 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v36 + 96));
            v37 = *(struct DMMVIDPNPRESENTPATH **)(v35 + 104);
            v24 = *(_QWORD *)&v53[3];
          }
          else
          {
            v37 = 0LL;
          }
          v38 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v37 + 18);
          v57 = v37;
          if ( v38 )
          {
            *(_BYTE *)(v24 + 128) = (unsigned int)(*((_DWORD *)v38 + 18) - 3) <= 1;
            GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v38);
            v40 = *(_OWORD *)&GraphicsInfo->Stride;
            *(_OWORD *)(v24 + 96) = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
            *(_OWORD *)(v24 + 112) = v40;
            *(_QWORD *)v24 |= 0x100uLL;
            v41 = *((_DWORD *)v25 + 29);
            *(_DWORD *)(v24 + 132) = v41;
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
              *(_DWORD *)(v24 + 132) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                         *((ADAPTER_DISPLAY **)a2 + 349),
                                         v41,
                                         *(_DWORD *)(*(_QWORD *)v26 + 24LL));
            *(_DWORD *)(v24 + 136) = *((_DWORD *)v25 + 28);
            *(_QWORD *)v24 |= 0x40000000200uLL;
            if ( a5 )
            {
              SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a2 + 349), *v27);
              *(_QWORD *)(v24 + 280) = SessionViewOwner;
              if ( SessionViewOwner )
              {
                v43 = 4000LL * *v27;
                v44 = *(_QWORD *)(*((_QWORD *)a2 + 349) + 128LL);
                *(_DWORD *)(v24 + 152) = *((_DWORD *)SessionViewOwner + 8) - *((_DWORD *)SessionViewOwner + 6);
                *(_DWORD *)(v24 + 156) = *((_DWORD *)SessionViewOwner + 9) - *((_DWORD *)SessionViewOwner + 7);
                *(_DWORD *)(v24 + 144) = *((_DWORD *)SessionViewOwner + 6);
                *(_DWORD *)(v24 + 148) = *((_DWORD *)SessionViewOwner + 7);
                *(_DWORD *)(v24 + 168) = *(_DWORD *)(v43 + v44 + 688);
                *(_DWORD *)(v24 + 176) = *(_DWORD *)(v43 + v44 + 696);
                *(_DWORD *)(v24 + 172) = *(_DWORD *)(v43 + v44 + 692);
                *(_DWORD *)(v24 + 180) = *(_DWORD *)(v43 + v44 + 700);
                *(_QWORD *)v24 |= 0x820800uLL;
                *(_QWORD *)(v24 + 196) = *((_QWORD *)SessionViewOwner + 8);
              }
              *(_DWORD *)(v24 + 216) = *(_DWORD *)(4000LL * *v27 + *(_QWORD *)(*((_QWORD *)a2 + 349) + 128LL) + 3780);
              *(_QWORD *)v24 |= 0x1000000000000uLL;
              v45 = (unsigned __int8)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 96LL) + 536LL) + 168LL);
              if ( v45 == 12 )
              {
                *(_DWORD *)(v24 + 192) = 259;
              }
              else if ( v45 == 13 )
              {
                *(_DWORD *)(v24 + 192) = -1073741437;
              }
            }
          }
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v57, 0LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v55, 0LL);
        }
      }
      return 0LL;
    }
    goto LABEL_49;
  }
  if ( !a2 || v14 == -1 )
  {
    v21 = HIBYTE(v53[0]);
    v47 = -1073741811;
    goto LABEL_40;
  }
  v15 = *((_QWORD *)a2 + 349);
  if ( v15 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v54, (__int64)a2, v14);
    v16 = v54;
    if ( v54 )
    {
      if ( *((_DWORD *)v54 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v16);
      ExReleaseResourceLite((PERESOURCE)((char *)v16 + 24));
      KeLeaveCriticalRegion();
      if ( IsVirtualModeSupportDisabled )
      {
        v19 = 1;
        v20 = 1;
LABEL_18:
        v21 = 1;
LABEL_19:
        LOBYTE(v53[0]) = v21;
        goto LABEL_20;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, -1073741632LL);
      RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v54);
    }
    v18 = *(_BYTE *)(v15 + 289);
    v19 = v18 == 0;
    v20 = *(_BYTE *)(v15 + 290) == 0;
    if ( v18 )
    {
      v21 = 0;
      if ( (*(_DWORD *)(v15 + 24) & 0x20) != 0 )
        goto LABEL_19;
    }
    goto LABEL_18;
  }
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
  v47 = -1073741811;
LABEL_49:
  WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)v9 + 24LL), *((int *)a2 + 102), *((unsigned int *)a2 + 101));
  return (unsigned int)v47;
}
