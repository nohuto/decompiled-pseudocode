/*
 * XREFs of ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C039CA5C
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01C1110 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00109BC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0010B6C (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0046CB0 (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C77B4 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C01E3518 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  VIDPN_MGR *v6; // r13
  __int64 v7; // r9
  ADAPTER_DISPLAY *v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r13d
  char v11; // bl
  unsigned int i; // r14d
  int v13; // eax
  unsigned int v14; // r14d
  struct DMMVIDPNPRESENTPATH *Path; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v16; // eax
  int v17; // eax
  VIDPN_MGR *v18; // r13
  bool v19; // zf
  struct DMMVIDPN *v20; // rbx
  int v21; // eax
  ADAPTER_DISPLAY *v22; // rbx
  int v23; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v36; // [rsp+20h] [rbp-E0h]
  _BYTE v37[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v39; // [rsp+58h] [rbp-A8h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v40; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v41; // [rsp+60h] [rbp-A0h] BYREF
  struct DMMVIDPN *v42; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v43; // [rsp+70h] [rbp-90h]
  ADAPTER_DISPLAY *v44; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v45; // [rsp+80h] [rbp-80h]
  _BYTE v46[8]; // [rsp+88h] [rbp-78h] BYREF
  VIDPN_MGR *v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v49[32]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v50[68]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = *((_QWORD *)a1 + 231);
  v45 = a1;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
    WdLogSingleEntry0(1LL);
  v44 = *(ADAPTER_DISPLAY **)(v3 + 2792);
  v47 = (VIDPN_MGR *)*((_QWORD *)v44 + 13);
  v6 = v47;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v48, (__int64)v47);
  WdLogSingleEntry2(7LL, v5, v47);
  v42 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v47, (__int64 *)&v42) < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    goto LABEL_49;
  }
  v43 = (struct DMMVIDPN *)((char *)v42 + 96);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v49,
    (__int64)v42 + 152,
    2u,
    v7,
    v36,
    *((_QWORD *)v42 + 17));
  v38 = -1;
  if ( a3 )
  {
    v8 = *(ADAPTER_DISPLAY **)(v3 + 2792);
    v41 = 0;
    ADAPTER_DISPLAY::GetPrimaryPath(v8, &v41, &v38, (enum _DXGK_PRIMARY_TARGET_TYPE *)v46);
    v9 = v38;
    if ( v41 != (_DWORD)v5 )
      v9 = -1;
    v38 = v9;
  }
  v10 = v38;
  v11 = 0;
  for ( i = 0; ; i = v14 + 1 )
  {
    v39 = i;
    v40 = -1;
    v13 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY **)v43, v5, i, (unsigned int *)&v40);
    if ( v13 < 0 )
    {
      if ( v13 == -1071774919 )
        break;
      WdLogSingleEntry0(1LL);
    }
    if ( v40 == -1 )
      break;
    if ( v40 == v10 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v43, v5, v40);
      if ( !Path )
        WdLogSingleEntry0(1LL);
      v16 = *((_DWORD *)Path + 28);
      v40 = v16;
      if ( v16 == D3DKMDT_VPPS_UNPINNED )
      {
        WdLogSingleEntry1(1LL, 13930LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ScalingMode != D3DKMDT_VPPS_UNPINNED",
          13930LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_23:
        if ( (*((_DWORD *)Path + 30) & 4) != 0 )
        {
          if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
            WdLogSingleEntry0(1LL);
          v17 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
          if ( v17 < 0 )
          {
            WdLogSingleEntry3(2LL, v5, v3, v17);
            if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v40) < 0 )
              WdLogSingleEntry0(1LL);
          }
          v11 = 1;
        }
      }
      else if ( ((v16 - 1) & 0xFFFFFFFD) != 0 )
      {
        goto LABEL_23;
      }
      v14 = v39;
      continue;
    }
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v43, v5, v40, 0LL) < 0 )
      WdLogSingleEntry0(1LL);
    v11 = 1;
    v14 = i - 1;
  }
  v18 = v47;
  v19 = v11 == 0;
  v20 = v42;
  if ( v19 )
    goto LABEL_38;
  memset(v50, 0, 0x104uLL);
  v37[0] = 0;
  v21 = VIDPN_MGR::SetTimingsFromVidPn(v47, 0, 1u, v42, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v50, v37, 0, v45, 0LL);
  if ( v21 < 0 )
  {
    WdLogSingleEntry2(3LL, v20, v21);
    goto LABEL_35;
  }
  v23 = v50[21];
  if ( !_bittest(&v23, v5) )
  {
LABEL_38:
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v18, v20);
    v27 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25);
      v28[3] = v20;
      v28[4] = v3;
      v28[5] = v27;
    }
    v22 = v44;
    v29 = ADAPTER_DISPLAY::DestroyCddAllocations(v44, v45, v5);
    if ( v29 < 0 )
      WdLogSingleEntry3(2LL, v5, v3, v29);
  }
  else
  {
    WdLogSingleEntry3(3LL, v20, v5, -1071774970LL);
LABEL_35:
    v22 = v44;
  }
  v30 = *(_QWORD *)(v3 + 2800);
  if ( v30 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v30 + 624) + 8LL) + 880LL))(
      *(_QWORD *)(v30 + 632),
      (unsigned int)v5);
  }
  else
  {
    v31 = *((_QWORD *)v22 + 56);
    if ( v31 )
      _InterlockedExchange((volatile __int32 *)(2920 * v5 + *(_QWORD *)(v31 + 8) + 960), 0);
  }
  v32 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v22, v5, 0, 256, 0);
  if ( v32 < 0 )
  {
    v34 = v32;
    WdLogSingleEntry3(2LL, v5, v3, v32);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reset VidPn source visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
      v5,
      v3,
      v34,
      0LL,
      0LL);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v49, v33);
LABEL_49:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v42, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v48 + 40));
  return 0LL;
}
