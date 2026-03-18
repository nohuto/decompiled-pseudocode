/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03B1B84
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C01E00A0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00070E4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0172140 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C017249C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C019B54C (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01B0208 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01B06C0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C01E19B0 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B6BD0 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v7; // r15
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  struct DMMVIDPN *v11; // rbx
  __int64 *v12; // r13
  int NumPathsFromSource; // eax
  __int64 v14; // r9
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  unsigned int i; // esi
  char v19; // al
  __int64 v21; // [rsp+20h] [rbp-E0h]
  _BYTE v22[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[272]; // [rsp+90h] [rbp-70h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  if ( a4 && (*(_DWORD *)(a4 + 464) != 2 || *(_QWORD *)(a4 + 1880) != a1) )
    WdLogSingleEntry0(1LL);
  v7 = *(VIDPN_MGR **)(*(_QWORD *)(a1 + 2920) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, (__int64)v7);
  v23 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v7, (__int64 *)&v23);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, *(int *)(a1 + 408), *(unsigned int *)(a1 + 404), ClientVidPnFromLastClientCommitedVidPn);
    goto LABEL_34;
  }
  v10 = 0;
  v11 = v23;
  v12 = (__int64 *)((char *)v23 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 2920) + 96LL) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v10) )
      {
        v24 = 0LL;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v12, v10, &v24);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v24 )
          break;
      }
LABEL_20:
      if ( ++v10 >= *(_DWORD *)(*(_QWORD *)(a1 + 2920) + 96LL) )
      {
        v11 = v23;
        goto LABEL_22;
      }
    }
    WdLogSingleEntry0(1LL);
LABEL_15:
    if ( v24 )
    {
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v26,
        (unsigned __int64)(v12 + 7) & -(__int64)(v12 != 0LL),
        2u,
        v14,
        v21,
        v12[5]);
      v15 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v12, v10);
      if ( ((v15 + 0x80000000) & 0x80000000) == 0 && v15 != -1071774919 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v26);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v27, 0, 0x104uLL);
  v22[0] = 0;
  v16 = VIDPN_MGR::SetTimingsFromVidPn(
          v7,
          0,
          1u,
          v11,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v27,
          v22,
          0,
          (struct DXGDEVICE *)a4,
          0LL);
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, v16);
    v17 = *(_QWORD *)(a1 + 2920);
    for ( i = 0; i < *(_DWORD *)(v17 + 96); ++i )
    {
      if ( _bittest(&a2, i) )
        ADAPTER_DISPLAY::SetVidPnSourceActive((PERESOURCE **)v17, i, 0, 0LL, 0, 0);
      v17 = *(_QWORD *)(a1 + 2920);
    }
  }
  v19 = v22[0];
  if ( (v22[0] & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v19 = v22[0];
  }
  if ( (v19 & 2) != 0 )
    WdLogSingleEntry0(1LL);
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v7, v11) < 0 )
    WdLogSingleEntry0(1LL);
  v9 = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v23, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
  return v9;
}
