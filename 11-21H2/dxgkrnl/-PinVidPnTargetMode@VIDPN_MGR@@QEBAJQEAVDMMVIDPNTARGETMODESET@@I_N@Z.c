/*
 * XREFs of ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08
 * Callers:
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C01A69F0 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinNextBestTargetMode @ 0x1C01BDB08 (BmlPinNextBestTargetMode.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C039D724 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03AC0EC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0011AC8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C01A7640 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1C01A7E34 (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C01A8274 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A97B8 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnTargetMode(
        VIDPN_MGR *this,
        struct DMMVIDPNTARGETMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // r12
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 Container; // rax
  D3DKMDT_HVIDPN v12; // rsi
  __int64 v13; // rdi
  D3DKMDT_HVIDPN v14; // r15
  __int64 v15; // rax
  __int64 v16; // r12
  ADAPTER_DISPLAY *v17; // rcx
  int IsSupportedVidPn; // eax
  __int64 v19; // r8
  D3DKMDT_HVIDPN v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  ADAPTER_DISPLAY *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rax
  _QWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // [rsp+48h] [rbp-39h]
  __int64 v36; // [rsp+50h] [rbp-31h]
  __int64 v37; // [rsp+58h] [rbp-29h]
  _DXGKARG_ISSUPPORTEDVIDPN v38; // [rsp+60h] [rbp-21h] BYREF
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v39; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v40[80]; // [rsp+88h] [rbp+7h] BYREF
  DXGK_ENUM_PIVOT v41; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v42; // [rsp+F8h] [rbp+77h]
  char v43; // [rsp+100h] [rbp+7Fh]

  v43 = a4;
  v42 = a3;
  v4 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v4 == -1 )
    WdLogSingleEntry0(1LL);
  v37 = *((_QWORD *)a2 + 18);
  v7 = DMMVIDPNTARGETMODESET::PinMode(a2, v4);
  v8 = v7;
  if ( v7 < 0 )
  {
    v28 = *((_QWORD *)this + 1);
    if ( !v28 )
    {
      WdLogSingleEntry0(1LL);
      v28 = *((_QWORD *)this + 1);
    }
    WdLogSingleEntry4(2LL, v4, a2, *(_QWORD *)(v28 + 16), v8);
    return (unsigned int)v8;
  }
  v9 = *((_QWORD *)a2 + 14);
  v35 = v9;
  if ( !v9 )
    WdLogSingleEntry0(1LL);
  v10 = *(_QWORD *)(v9 + 40);
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    v10 = *(_QWORD *)(v9 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v10 + 64);
  v41.VidPnTargetId = *(_DWORD *)(v9 + 24);
  v36 = Container;
  v41.VidPnSourceId = -1;
  if ( Container == -88 )
  {
    v12 = 0LL;
    goto LABEL_50;
  }
  v12 = (D3DKMDT_HVIDPN)Container;
  if ( !Container )
  {
LABEL_50:
    WdLogSingleEntry0(1LL);
    goto LABEL_51;
  }
  if ( *(_DWORD *)(Container + 64) != 1833172997 )
  {
LABEL_51:
    v13 = 0LL;
    goto LABEL_14;
  }
  v13 = Container;
LABEL_14:
  v14 = v12;
  if ( !*(_BYTE *)(v13 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v13 + 96)) )
  {
    WdLogSingleEntry1(2LL, v12);
LABEL_56:
    v30 = *((_QWORD *)this + 1);
    if ( !v30 )
    {
      WdLogSingleEntry0(1LL);
      v30 = *((_QWORD *)this + 1);
    }
    WdLogSingleEntry2(7LL, v12, *(_QWORD *)(v30 + 16));
    LODWORD(v8) = -1071774970;
    v31 = (unsigned int)v4;
    goto LABEL_59;
  }
  if ( ((unsigned __int16)((2 << *(_BYTE *)(v13 + 172)) - 1) & *(_WORD *)(v13 + 174)) != 0 )
    WdLogSingleEntry0(1LL);
  v15 = *((_QWORD *)this + 1);
  if ( !v15 )
  {
    WdLogSingleEntry0(1LL);
    v15 = *((_QWORD *)this + 1);
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
  {
    WdLogSingleEntry0(1LL);
  }
  v17 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  *(_QWORD *)&v38.IsVidPnSupported = 0LL;
  v38.hDesiredVidPn = v12;
  if ( !v17 )
  {
    WdLogSingleEntry0(1LL);
    v17 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(v17, &v38);
  v8 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, v12, v16, IsSupportedVidPn);
    v29 = *((_QWORD *)this + 1);
    if ( !v29 )
    {
      WdLogSingleEntry0(1LL);
      v29 = *((_QWORD *)this + 1);
    }
    WdLogSingleEntry3(2LL, v12, *(_QWORD *)(v29 + 16), v8);
  }
  else
  {
    if ( !v38.IsVidPnSupported )
    {
      LODWORD(v4) = v42;
      goto LABEL_56;
    }
    if ( !v43 )
    {
      WdLogSingleEntry4(7LL, 5LL, v12, v41.VidPnSourceId, v41.VidPnTargetId);
      return 0LL;
    }
    if ( !v12 || (v20 = v12, *((_DWORD *)v12 + 16) != 1833172997) )
      v20 = 0LL;
    if ( ((unsigned __int16)((2 << *((_BYTE *)v20 + 172)) - 1) & *((_WORD *)v20 + 87)) != 0 )
      WdLogSingleEntry0(1LL);
    LOBYTE(v19) = 3;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v40, v20 + 38, v19);
    v21 = *((_QWORD *)this + 1);
    if ( !v21 )
    {
      WdLogSingleEntry0(1LL);
      v21 = *((_QWORD *)this + 1);
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v22 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    v23 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
    *((_DWORD *)&v39.EnumPivot + 2) = 0;
    v39.hConstrainingVidPn = v12;
    v39.EnumPivotType = D3DKMDT_EPT_VIDPNTARGET;
    v39.EnumPivot = v41;
    if ( !v23 )
    {
      WdLogSingleEntry0(1LL);
      v23 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
    }
    v24 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v23, &v39);
    LODWORD(v8) = v24;
    if ( v24 < 0 )
      WdLogSingleEntry4(2LL, v12, v39.EnumPivot.VidPnSourceId, v39.EnumPivot.VidPnTargetId, v24);
    else
      LODWORD(v8) = 0;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v40);
    if ( (int)v8 >= 0 )
      return 0LL;
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25);
    v33[3] = v14;
    v33[4] = 5LL;
    v33[5] = &v41;
    v34 = *((_QWORD *)this + 1);
    if ( !v34 )
    {
      WdLogSingleEntry0(1LL);
      v34 = *((_QWORD *)this + 1);
    }
    v33[6] = *(_QWORD *)(v34 + 16);
    v33[7] = (int)v8;
  }
  v31 = v42;
  if ( (_DWORD)v8 == -1071774970 )
  {
LABEL_59:
    WdLogSingleEntry2(3LL, v31, a2);
    goto LABEL_60;
  }
  WdLogSingleEntry3(2LL, v42, a2, (int)v8);
LABEL_60:
  v32 = *((_QWORD *)this + 1);
  if ( !v32 )
  {
    WdLogSingleEntry0(1LL);
    v32 = *((_QWORD *)this + 1);
  }
  WdLogSingleEntry4(7LL, v31, *(unsigned int *)(v35 + 24), v36, *(_QWORD *)(v32 + 16));
  if ( !v37 )
  {
    if ( (int)DMMVIDPNTARGETMODESET::UnpinMode(a2) >= 0 )
      return (unsigned int)v8;
    goto LABEL_71;
  }
  if ( (int)DMMVIDPNTARGETMODESET::PinMode(a2, *(_DWORD *)(v37 + 24)) < 0 )
LABEL_71:
    WdLogSingleEntry0(1LL);
  return (unsigned int)v8;
}
