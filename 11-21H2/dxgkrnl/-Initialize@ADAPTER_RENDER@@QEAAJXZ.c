/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0203930
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0201EB4 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0012B7C (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001D470 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C001F6A4 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026D60 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x1C0026D90 (-CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0026DF0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01996EC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C0204290 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0204438 (-InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0204944 (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0204D14 (-ConfigureSysMm@ADAPTER_RENDER@@QEAAJPEATSYSMM_IOMMU_STATE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  _OWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rdx
  unsigned int v6; // esi
  unsigned int VidSchSibmitDataSize; // eax
  __int64 v8; // r9
  DXGADAPTER *v9; // rcx
  unsigned __int8 IsDxgmms2; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r12d
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // r15d
  DXGADAPTER *v18; // rcx
  _DWORD *v19; // rbx
  unsigned int v20; // esi
  _DWORD *v21; // r13
  DXGADAPTER *v22; // rcx
  __int64 v23; // rcx
  unsigned int i; // r15d
  DXGADAPTER *v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int SynchronizationObjectInternal; // eax
  __int64 v35; // r9
  __int64 v36; // r15
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // r12d
  __int64 v40; // rax
  unsigned int v41; // ebx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // kr00_8
  unsigned int *v44; // rax
  __int64 v45; // r8
  unsigned int *v46; // r15
  unsigned int *v47; // rax
  DXGADAPTER *v48; // rcx
  char v49; // dl
  unsigned int *v50; // r12
  __int64 v51; // r15
  unsigned int v52; // ecx
  unsigned int NodeMetadata; // ebx
  unsigned __int16 *v55; // r13
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r9
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r9
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r8
  int *v66; // rcx
  __int64 v67; // r8
  DXGADAPTER *v68; // rcx
  unsigned int v69; // esi
  __int64 v70; // r9
  unsigned int v71; // edx
  __int64 v72; // r15
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  const wchar_t *v77; // r9
  const wchar_t *v78; // r9
  __int64 v79; // rax
  int v80; // esi
  const wchar_t *v81; // r9
  __int64 v82; // rbx
  __int64 v83; // rsi
  const wchar_t *v84; // r9
  const wchar_t *v85; // r9
  __int64 v86; // rbx
  int AdapterInfo; // [rsp+50h] [rbp-B0h]
  __int64 v88; // [rsp+50h] [rbp-B0h]
  __int64 v89; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_QUERYADAPTERINFO v90; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v91[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v92; // [rsp+F0h] [rbp-10h]
  char v93; // [rsp+150h] [rbp+50h] BYREF
  char v94; // [rsp+151h] [rbp+51h]
  unsigned int v95; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v96; // [rsp+160h] [rbp+60h]
  unsigned int v97; // [rsp+168h] [rbp+68h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = (_OWORD *)((char *)this + 320);
  v3 = (__int64)this;
  *((_OWORD *)this + 30) = *(_OWORD *)(v1 + 1528);
  *((_OWORD *)this + 31) = *(_OWORD *)(v1 + 1624);
  *((_OWORD *)this + 32) = *(_OWORD *)(v1 + 1640);
  *((_OWORD *)this + 35) = *(_OWORD *)(v1 + 1560);
  *(_OWORD *)((char *)this + 584) = *(_OWORD *)(v1 + 1584);
  *((_DWORD *)this + 144) = *(_DWORD *)(v1 + 1576);
  *((_DWORD *)this + 145) = *(_DWORD *)(v1 + 1580);
  *((_DWORD *)this + 150) = *(_DWORD *)(v1 + 1600);
  *((_DWORD *)this + 151) = *(_DWORD *)(v1 + 1604);
  *((_OWORD *)this + 33) = *(_OWORD *)(v1 + 1656);
  *((_OWORD *)this + 34) = *(_OWORD *)(v1 + 1672);
  v4 = 0LL;
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(v1 + 1496),
              (struct _UNICODE_STRING *)this + 20) < 0
    || (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              (ADAPTER_RENDER *)v3,
              (struct _UNICODE_STRING *)(*(_QWORD *)(v3 + 16) + 1512LL),
              (struct _UNICODE_STRING *)(v3 + 384)) < 0 )
  {
    NodeMetadata = -1073741438;
    WdLogSingleEntry2(2LL, *(_QWORD *)(v3 + 16), -1073741438LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x: Invalidly formatted user mode driver name, returning 0x%I64x",
      *(_QWORD *)(v3 + 16),
      -1073741438LL,
      0LL,
      0LL,
      0LL);
    return NodeMetadata;
  }
  if ( (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              (ADAPTER_RENDER *)v3,
              (struct _UNICODE_STRING *)(*(_QWORD *)(v3 + 16) + 1752LL),
              (struct _UNICODE_STRING *)(v3 + 448)) < 0
    || (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              (ADAPTER_RENDER *)v3,
              (struct _UNICODE_STRING *)(*(_QWORD *)(v3 + 16) + 1768LL),
              (struct _UNICODE_STRING *)(v3 + 464)) < 0 )
  {
    NodeMetadata = -1073741438;
    WdLogSingleEntry2(2LL, *(_QWORD *)(v3 + 16), -1073741438LL);
    v77 = L"Adapter 0x%I64x: Invalidly formatted user mode display driver name, returning 0x%I64x";
    goto LABEL_146;
  }
  if ( *(_WORD *)v2 )
  {
    if ( **(_WORD **)(v3 + 328) == 35 )
    {
      v75 = *(_QWORD *)(v3 + 16);
      if ( *(_WORD *)(v75 + 1712) )
        *v2 = *(_OWORD *)(v75 + 1712);
    }
  }
  if ( *(_WORD *)(v3 + 384) )
  {
    if ( **(_WORD **)(v3 + 392) == 35 )
    {
      v76 = *(_QWORD *)(v3 + 16);
      if ( *(_WORD *)(v76 + 1728) )
        *(_OWORD *)(v3 + 384) = *(_OWORD *)(v76 + 1728);
    }
  }
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v3 + 1240));
  v5 = *(_QWORD *)(v3 + 16);
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 216) + 64LL) + 40LL) + 28LL);
  v96 = v6;
  if ( !*(_BYTE *)(v5 + 209) && !*(_WORD *)v2 )
  {
    NodeMetadata = -1073741438;
    WdLogSingleEntry2(2LL, v5, -1073741438LL);
    v77 = L"Adapter 0x%I64x: Invalid user mode driver name, returning 0x%I64x";
LABEL_146:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v77, *(_QWORD *)(v3 + 16), -1073741438LL, 0LL, 0LL, 0LL);
    return NodeMetadata;
  }
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize((DXGADAPTER **)v3);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)(v3 + 1280),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) < 0 )
  {
    NodeMetadata = -1073741801;
    WdLogSingleEntry3(3LL, v3, -1073741801LL, 0LL);
    return NodeMetadata;
  }
  *(_BYTE *)(v3 + 1225) = 1;
  v94 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v93);
  v9 = *(DXGADAPTER **)(v3 + 16);
  if ( !*((_BYTE *)v9 + 209) )
  {
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v9);
    *(_QWORD *)(v3 + 648) = *(_QWORD *)((char *)DXGGLOBAL_GetGlobal() + (IsDxgmms2 != 0 ? 264LL : 256LL));
    v11 = *(_QWORD *)((char *)DXGGLOBAL_GetGlobal() + (IsDxgmms2 != 0 ? 8 : 0) + 272);
    *(_QWORD *)(v3 + 624) = v11;
    if ( !*(_QWORD *)(v3 + 648) || !v11 )
    {
      NodeMetadata = -1073741438;
      WdLogSingleEntry2(2LL, v3, -1073741438LL);
      v78 = L"Adapter 0x%I64x: Unsupported display driver model, returning 0x%I64x";
      v79 = -1073741438LL;
      v80 = 0x40000;
LABEL_111:
      DxgkLogInternalTriageEvent(0LL, v80, -1, (__int64)v78, v3, v79, 0LL, 0LL, 0LL);
      goto LABEL_66;
    }
  }
  v12 = *(_QWORD *)(v3 + 16);
  if ( (*(_DWORD *)(v12 + 2156) & 0x40) == 0 )
    goto LABEL_29;
  v13 = *(_DWORD *)(v12 + 288);
  v14 = 144LL * v13;
  if ( !is_mul_ok(v13, 0x90uLL) )
    v14 = -1LL;
  v15 = operator new[](v14, 0x4B677844u, 256LL, v8);
  *(_QWORD *)(v3 + 1152) = v15;
  if ( !v15 )
  {
    v3 = 964LL;
    WdLogSingleEntry1(6LL, 964LL);
    v78 = L"Failed to allocate m_pGpuMmuCaps";
    v79 = 0LL;
    NodeMetadata = -1073741801;
    v80 = 262145;
    goto LABEL_111;
  }
  v17 = 0;
  if ( v13 )
  {
    while ( 2 )
    {
      v18 = *(DXGADAPTER **)(v3 + 16);
      *(_QWORD *)&v90.Type = 13LL;
      *(_QWORD *)&v90.InputDataSize = 4LL;
      *(_QWORD *)&v90.Flags.0 = 0LL;
      HIDWORD(v90.hKmdProcessHandle) = 0;
      v19 = (_DWORD *)(*(_QWORD *)(v3 + 1152) + 144LL * v17);
      v90.pOutputData = v19;
      v90.OutputDataSize = 24;
      v97 = v17;
      v90.pInputData = &v97;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v18, &v90, v16) < 0 )
      {
        NodeMetadata = -1073741438;
        WdLogSingleEntry2(2LL, v3, -1073741438LL);
        v81 = L"Adapter 0x%I64x: Failed to query GpuMmu caps, returning 0x%I64x";
LABEL_144:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v81, v3, -1073741438LL, 0LL, 0LL, 0LL);
        goto LABEL_66;
      }
      if ( (unsigned int)(v19[4] - 2) > 4 )
      {
        WdLogSingleEntry1(2LL, 995LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"GpuMmu.PageDirectoryCount is invalid. It should be from 2 to DXGK_MAX_PAGE_TABLE_LEVEL_COUNT\n",
          995LL,
          0LL,
          0LL,
          0LL,
          0LL);
        NodeMetadata = -1073741438;
        goto LABEL_66;
      }
      if ( v6 < 0x5014 )
        *v19 &= ~0x20u;
      v20 = 0;
      do
      {
        *(_QWORD *)&v91[0].Flags.0 = 0LL;
        HIDWORD(v91[0].hKmdProcessHandle) = 0;
        *(_QWORD *)&v91[0].Type = 14LL;
        *(_QWORD *)&v91[0].InputDataSize = 4LL;
        LOWORD(v95) = v20;
        v91[0].pInputData = &v95;
        HIWORD(v95) = v17;
        v22 = *(DXGADAPTER **)(v3 + 16);
        *(_QWORD *)&v91[0].OutputDataSize = v96 < 0x5012 ? 16 : 20;
        v91[0].pOutputData = &v19[4 * v20 + 6 + v20];
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v22, v91, v16) < 0 )
        {
          NodeMetadata = -1073741438;
          WdLogSingleEntry2(2LL, v3, -1073741438LL);
          v81 = L"Adapter 0x%I64x: Failed to query page table level descriptor, returning 0x%I64x";
          goto LABEL_144;
        }
        v21 = &v19[4 * v20 + 6 + v20];
        if ( ((v21[4] - 1) & v21[4]) != 0 )
        {
          WdLogSingleEntry2(2LL, v3, v20);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Adapter 0x%I64x: Page table alignment of level %d must be power of 2",
            v3,
            v20,
            0LL,
            0LL,
            0LL);
LABEL_127:
          NodeMetadata = -1073741811;
          goto LABEL_66;
        }
        ++v20;
        v4 = 0LL;
      }
      while ( v20 < v19[4] );
      v6 = v96;
      if ( ++v17 < v13 )
        continue;
      break;
    }
  }
LABEL_29:
  v23 = *(_QWORD *)(v3 + 16);
  if ( *(int *)(v23 + 2424) >= 4864 )
  {
    for ( i = 0; ; ++i )
    {
      v25 = *(DXGADAPTER **)(v3 + 16);
      v96 = i;
      if ( i >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v25) )
      {
        if ( *(int *)(v23 + 2424) < 8960 )
        {
          *(_DWORD *)(v23 + 2152) &= 0xFFFFF87F;
          v23 = *(_QWORD *)(v3 + 16);
        }
        v4 = 0LL;
        goto LABEL_35;
      }
      v55 = (unsigned __int16 *)(*(_QWORD *)(v23 + 2680) + 344LL * i);
      v95 = *v55;
      v56 = v95;
      v57 = 74LL * v95;
      if ( !is_mul_ok(v95, 0x4AuLL) )
        v57 = v26;
      v58 = operator new[](v57, 0x4B677844u, 256LL, v27);
      v89 = v58;
      if ( !v58 )
      {
        WdLogSingleEntry1(6LL, v3);
        v85 = L"Adapter 0x%I64x: Failed to allocate pNodeMetadata";
        goto LABEL_132;
      }
      *((_QWORD *)v55 + 4) = v58;
      v88 = *(_QWORD *)(v3 + 16);
      v60 = 44 * v56;
      if ( !is_mul_ok(v56, 0x2CuLL) )
        v60 = -1LL;
      v61 = operator new[](v60, 0x4B677844u, 256LL, v59);
      if ( !v61 )
      {
        WdLogSingleEntry1(6LL, v3);
        v85 = L"Adapter 0x%I64x: Failed to allocate pNodePerfData";
        goto LABEL_132;
      }
      *((_QWORD *)v55 + 13) = v61;
      v63 = 8 * v56;
      if ( !is_mul_ok(v56, 8uLL) )
        v63 = -1LL;
      v64 = operator new[](v63, 0x4B677844u, 256LL, v62);
      if ( !v64 )
      {
        WdLogSingleEntry1(6LL, v3);
        v85 = L"Adapter 0x%I64x: Failed to allocate pNodePerfDataQueryTimes";
LABEL_132:
        DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v85, v3, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_133;
      }
      *((_QWORD *)v55 + 14) = v64;
      v66 = *(int **)(v3 + 16);
      if ( v66[673] >= 2400 )
      {
        v97 = i;
        v90.pInputData = &v97;
        *(_QWORD *)&v90.Type = 26LL;
        v90.pOutputData = v55 + 92;
        *(_QWORD *)&v90.InputDataSize = 4LL;
        *(_QWORD *)&v90.Flags.0 = 0LL;
        HIDWORD(v90.hKmdProcessHandle) = 0;
        v90.OutputDataSize = 28;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v66, &v90, v65) < 0 )
          WdLogSingleEntry1(3LL, v3);
        v68 = *(DXGADAPTER **)(v3 + 16);
        v90.pOutputData = v55 + 106;
        v90.Type = DXGKQAITYPE_GPUVERSION;
        v90.OutputDataSize = 128;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v68, &v90, v67) < 0 )
          WdLogSingleEntry1(3LL, v3);
      }
      v69 = 0;
      if ( v95 )
        break;
LABEL_93:
      ;
    }
    v70 = v89;
    v71 = i << 16;
    v97 = i << 16;
    v72 = v89 + 68;
    while ( 1 )
    {
      NodeMetadata = DXGADAPTER::DdiGetNodeMetadata(
                       *(DXGADAPTER **)(v3 + 16),
                       v69 | v71,
                       (struct _DXGK_NODEMETADATA *)(v70 + 74LL * v69));
      if ( (NodeMetadata & 0x80000000) != 0 )
        break;
      v73 = *(_QWORD *)(v3 + 16);
      if ( *(_DWORD *)(v73 + 1968) < 0x9000u )
      {
        *(_DWORD *)v72 = 0;
      }
      else
      {
        v74 = *(_DWORD *)v72;
        if ( (*(_DWORD *)v72 & 1) != 0 )
        {
          if ( !*(_BYTE *)(v72 + 4) && !*(_BYTE *)(v72 + 5) )
          {
            v82 = v69;
            v83 = 1150LL;
            WdLogSingleEntry3(2LL, v3, (unsigned int)v82, 1150LL);
            v84 = L"Adapter 0x%I64x, Node 0x%I64x: Driver reported ContextScheduling support for a node, but it doesn't support GPU VA.";
LABEL_126:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v84, v3, v82, v83, 0LL, 0LL);
            goto LABEL_127;
          }
          if ( (**(_DWORD **)(v73 + 2696) & 0x20000) == 0 )
          {
            v82 = v69;
            v83 = 1156LL;
            WdLogSingleEntry3(2LL, v3, (unsigned int)v82, 1156LL);
            v84 = L"Adapter 0x%I64x, Node 0x%I64x: Driver reported ContextScheduling support for a node, but the OS didn't"
                   " allow HwSch to be enabled.";
            goto LABEL_126;
          }
          *(_BYTE *)(v3 + 1744) = 1;
          v74 = *(_DWORD *)v72;
        }
        if ( (v74 & 0xFFF8) != 0 )
        {
          v82 = v69;
          v83 = 1166LL;
          WdLogSingleEntry3(2LL, v3, (unsigned int)v82, 1166LL);
          v84 = L"Adapter 0x%I64x, Node 0x%I64x: Driver should not set reserved bits.";
          goto LABEL_126;
        }
      }
      if ( *(_BYTE *)(v72 + 4) )
      {
        if ( (*(_DWORD *)(v88 + 2156) & 0x40) == 0 )
        {
          v82 = v69;
          v83 = 1175LL;
          WdLogSingleEntry3(2LL, v3, (unsigned int)v82, 1175LL);
          v84 = L"Adapter 0x%I64x, Node 0x%I64x: Driver reported GpuMmu support for a node, but the adapter caps do not match.";
          goto LABEL_126;
        }
        if ( v69 == v55[1] && !*(_BYTE *)(*(_QWORD *)(v3 + 16) + 2730LL) )
          *((_BYTE *)v55 + 48) = 1;
      }
      if ( *(_BYTE *)(v72 + 5) )
      {
        if ( (*(_DWORD *)(v88 + 2156) & 0x80u) == 0 )
        {
          v82 = v69;
          v83 = 1188LL;
          WdLogSingleEntry3(2LL, v3, (unsigned int)v82, 1188LL);
          v84 = L"Adapter 0x%I64x, Node 0x%I64x: Driver reported IoMmu support for a node, but the adapter caps do not match.";
          goto LABEL_126;
        }
        if ( v69 == v55[1] && !*(_BYTE *)(*(_QWORD *)(v3 + 16) + 2730LL) )
          *((_BYTE *)v55 + 48) = 1;
      }
      v71 = v97;
      ++v69;
      v70 = v89;
      v72 += 74LL;
      if ( v69 >= v95 )
      {
        i = v96;
        goto LABEL_93;
      }
    }
    WdLogSingleEntry1(2LL, v3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter 0x%I64x: Driver reported failure getting node metadata with valid parameters.",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_66;
  }
LABEL_35:
  v28 = DXGADAPTER::CheckMcdmDdiSubmission((DXGADAPTER *)v23);
  if ( v28 < 0 )
    goto LABEL_134;
  if ( !*(_BYTE *)(*(_QWORD *)(v3 + 16) + 209LL) )
  {
    v95 = 0;
    v28 = ADAPTER_RENDER::ConfigureSysMm((ADAPTER_RENDER *)v3, (union SYSMM_IOMMU_STATE *)&v95);
    if ( v28 >= 0 )
    {
      v29 = *(_QWORD *)(v3 + 624);
      Global = DXGGLOBAL_GetGlobal();
      v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v29 + 8) + 24LL))(
              v3,
              *(_QWORD *)(*(_QWORD *)(v3 + 16) + 216LL),
              (__int64)Global + 152);
      *(_QWORD *)(v3 + 632) = v31;
      if ( !v31 )
        goto LABEL_133;
      v32 = 0LL;
      if ( (v95 & 1) != 0 )
      {
        v32 = 1LL;
        if ( (v95 & 2) != 0 )
          v32 = 3LL;
      }
      v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v3 + 648) + 8LL) + 24LL))(v3, v32);
      *(_QWORD *)(v3 + 656) = v33;
      if ( !v33 )
      {
LABEL_133:
        NodeMetadata = -1073741801;
        goto LABEL_66;
      }
      goto LABEL_41;
    }
LABEL_134:
    NodeMetadata = v28;
    goto LABEL_66;
  }
LABEL_41:
  memset(v91, 0, sizeof(v91));
  HIDWORD(v91[0].pInputData) |= 1u;
  LODWORD(v91[0].pInputData) = 3;
  SynchronizationObjectInternal = CreateSynchronizationObjectInternal(
                                    0LL,
                                    1,
                                    (struct ADAPTER_RENDER *)v3,
                                    (__int64)v91,
                                    0xBu,
                                    0,
                                    (DXGSYNCOBJECT **)(v3 + 792),
                                    0LL,
                                    0LL);
  v36 = SynchronizationObjectInternal;
  if ( SynchronizationObjectInternal >= 0 )
  {
    v37 = *(_QWORD *)(v3 + 16);
    v38 = *(_DWORD *)(v37 + 2424);
    if ( v38 >= 4864 )
    {
      v95 = 0;
      if ( v38 < 0x2000 )
      {
        v39 = 1;
        v96 = 1;
LABEL_45:
        v40 = 0LL;
        while ( 1 )
        {
          v41 = *(unsigned __int16 *)(344 * v40 + *(_QWORD *)(*(_QWORD *)(v3 + 16) + 2680LL));
          v43 = *(unsigned __int16 *)(344 * v40 + *(_QWORD *)(*(_QWORD *)(v3 + 16) + 2680LL));
          v42 = 4 * v43;
          if ( !is_mul_ok(v43, 4uLL) )
            v42 = -1LL;
          v44 = (unsigned int *)operator new[](v42, 0x4B677844u, 64LL, v35);
          v92 = v44;
          v46 = v44;
          if ( !v44 )
            goto LABEL_133;
          v97 = v95;
          v91[0].pOutputData = v44;
          v91[0].OutputDataSize = 4 * v41;
          v47 = &v95;
          v48 = *(DXGADAPTER **)(v3 + 16);
          if ( v39 <= 1 )
            v47 = &v97;
          *(_QWORD *)&v91[0].Type = 10LL;
          *(_QWORD *)&v91[0].InputDataSize = 4LL;
          *(_QWORD *)&v91[0].Flags.0 = 0LL;
          HIDWORD(v91[0].hKmdProcessHandle) = 0;
          v91[0].pInputData = v47;
          AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v48, v91, v45);
          v49 = 1;
          if ( AdapterInfo < 0 )
            goto LABEL_141;
          if ( v41 )
          {
            v50 = v46;
            v51 = v41;
            do
            {
              v52 = *v50;
              if ( *v50 - 1 <= 0x1E || v52 >= 0x41 )
              {
                v86 = *v50;
                WdLogSingleEntry3(2LL, v3, v86, v4);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Adapter 0x%I64x: Invalid timestamp precision. Valid domain is {0, [32-64]}. Precision=%d, Node=%d",
                  v3,
                  v86,
                  v4,
                  0LL,
                  0LL);
                v49 = 0;
              }
              else if ( !v52 )
              {
                *(_BYTE *)(v3 + 856) = 1;
              }
              ++v4;
              ++v50;
              --v51;
            }
            while ( v51 );
            v46 = v92;
            v4 = 0LL;
            v39 = v96;
            if ( !v49 )
            {
LABEL_141:
              operator delete[](v46);
              v46 = 0LL;
              *(_BYTE *)(v3 + 856) = 0;
              if ( AdapterInfo >= 0 )
              {
                NodeMetadata = -1073741438;
                WdLogSingleEntry2(2LL, v3, -1073741438LL);
                v81 = L"Adapter 0x%I64x: Precision data is bad. Returning 0x%I64x";
                goto LABEL_144;
              }
              WdLogSingleEntry1(4LL, v3);
            }
          }
          *(_QWORD *)(344LL * v95 + *(_QWORD *)(*(_QWORD *)(v3 + 16) + 2680LL) + 40) = v46;
          v40 = v95 + 1;
          v95 = v40;
          if ( (unsigned int)v40 >= v39 )
            goto LABEL_61;
        }
      }
      v39 = *(_DWORD *)(v37 + 288);
      v96 = v39;
      if ( v39 )
        goto LABEL_45;
LABEL_61:
      if ( ADAPTER_RENDER::IsClockCalibrationSupported((ADAPTER_RENDER *)v3) )
      {
        *(_QWORD *)(v3 + 920) = -500000LL;
        KeInitializeTimer((PKTIMER)(v3 + 928));
        KeInitializeDpc((PRKDPC)(v3 + 992), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, (PVOID)v3);
      }
      if ( *(_BYTE *)(v3 + 856) )
        KeInitializeSpinLock((PKSPIN_LOCK)(v3 + 1144));
    }
    NodeMetadata = 0;
    goto LABEL_66;
  }
  WdLogSingleEntry2(2LL, v3, SynchronizationObjectInternal);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Adapter 0x%I64x: CreateSynchronizationObjectInternal failed. Returning 0x%I64x",
    v3,
    v36,
    0LL,
    0LL,
    0LL);
  NodeMetadata = v36;
LABEL_66:
  if ( v94 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v93);
  return NodeMetadata;
}
