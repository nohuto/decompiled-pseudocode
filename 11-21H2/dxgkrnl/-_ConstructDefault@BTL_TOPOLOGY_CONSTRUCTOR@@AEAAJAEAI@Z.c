/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C03AE4D0
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C03AD0FC (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C0011BD0 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01AC3A8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01ACA7C (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01ADE34 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D7DA0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01E3C20 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C02D2120 (DxgkIsMonitorConnected.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C03AA310 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C03AA4E8 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     _lambda_58ec37c2392282bb0e6e3e53197351b6_::operator() @ 0x1C03AD044 (_lambda_58ec37c2392282bb0e6e3e53197351b6_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C03ADCB8 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03AE3F0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03AEB14 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C03AEB50 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03AEBF4 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03AEC84 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C03AED44 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C03AED9C (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGPROCESS *Current; // rax
  struct CCD_BTL *v12; // rax
  unsigned int v13; // r14d
  unsigned int v14; // edi
  unsigned __int16 v15; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  unsigned int v17; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rcx
  __int64 v19; // rax
  __int128 v20; // xmm1
  unsigned int v21; // r15d
  unsigned int j; // r15d
  unsigned int v23; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // r15
  __int64 v25; // rcx
  unsigned int v26; // r14d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rax
  CCD_TOPOLOGY *v28; // rcx
  int v29; // eax
  CCD_TOPOLOGY *v30; // rcx
  __int64 v31; // r15
  unsigned int v32; // r14d
  int v33; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v34; // r14
  bool *v35; // r12
  bool *v36; // rdi
  const struct _LUID *v37; // r15
  int IsVirtualizationDisabledForTarget; // eax
  bool v39; // cl
  __int16 v40; // dx
  bool v41; // zf
  bool v42; // al
  int v43; // eax
  __int64 v44; // rax
  CCD_TOPOLOGY *v45; // rcx
  int v46; // eax
  CCD_TOPOLOGY *v47; // rcx
  int v49; // [rsp+40h] [rbp-89h]
  __int128 v50; // [rsp+48h] [rbp-81h]
  __int128 v51; // [rsp+58h] [rbp-71h]
  __int128 v52; // [rsp+68h] [rbp-61h]
  _BYTE v53[64]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-9h]
  __int64 i; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int16 v56; // [rsp+140h] [rbp+77h]
  int v57; // [rsp+148h] [rbp+7Fh]

  *a2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL_GetGlobal() + 304568)
    || (v6 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(this), v6 < 0) )
  {
    v49 = *((_DWORD *)this + 15);
    v50 = *(_OWORD *)((char *)this + 12);
    v51 = *(_OWORD *)((char *)this + 28);
    v52 = *(_OWORD *)((char *)this + 44);
    v56 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
    v57 = v56;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v53, 8u, 0);
    Current = DXGPROCESS::GetCurrent(v8, v7, v9, v10);
    if ( DXGPROCESS::IsRemoteConnection(Current)
      || (v12 = CCD_BTL::Global(),
          (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v53, (struct CCD_BTL *)((char *)v12 + 8)) >= 0) )
    {
      v13 = 0;
      *a2 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = v54 ? *(_WORD *)(v54 + 20) : 0;
        if ( v13 >= v15 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v53, v13);
        LOBYTE(i) = 0;
        if ( (int)DxgkIsMonitorConnected(
                    *(struct _LUID *)((char *)PathDescriptor + 16),
                    *((_DWORD *)PathDescriptor + 7),
                    0,
                    0,
                    (bool *)&i) >= 0
          && (_BYTE)i )
        {
          v17 = *a2;
          *((_QWORD *)PathDescriptor + 1) = 0LL;
          if ( v13 != v17 )
          {
            v18 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v53, v17);
            v19 = 2LL;
            do
            {
              *(_OWORD *)v18 = *(_OWORD *)PathDescriptor;
              *((_OWORD *)v18 + 1) = *((_OWORD *)PathDescriptor + 1);
              *((_OWORD *)v18 + 2) = *((_OWORD *)PathDescriptor + 2);
              *((_OWORD *)v18 + 3) = *((_OWORD *)PathDescriptor + 3);
              *((_OWORD *)v18 + 4) = *((_OWORD *)PathDescriptor + 4);
              *((_OWORD *)v18 + 5) = *((_OWORD *)PathDescriptor + 5);
              *((_OWORD *)v18 + 6) = *((_OWORD *)PathDescriptor + 6);
              v18 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v18 + 128);
              v20 = *((_OWORD *)PathDescriptor + 7);
              PathDescriptor = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
              *((_OWORD *)v18 - 1) = v20;
              --v19;
            }
            while ( v19 );
            *(_OWORD *)v18 = *(_OWORD *)PathDescriptor;
            *((_OWORD *)v18 + 1) = *((_OWORD *)PathDescriptor + 1);
            *((_QWORD *)v18 + 4) = *((_QWORD *)PathDescriptor + 4);
            v17 = *a2;
          }
          v14 = v17 + 1;
          *a2 = v17 + 1;
        }
        else
        {
          v21 = 0;
          for ( i = (__int64)v53; v21 < *a2; ++v21 )
            lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, v21);
          for ( j = v13 + 1; j < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v53); ++j )
            lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, j);
          v14 = *a2;
        }
        ++v13;
      }
      *(_WORD *)(v54 + 20) = *(_WORD *)a2;
      if ( v14 )
      {
        v23 = v14 - 1;
        do
        {
          v24 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v53, v23);
          v25 = *(_QWORD *)v24;
          if ( (*(_QWORD *)v24 & 0x4000000000000LL) != 0 )
          {
            v26 = 0;
            while ( 1 )
            {
              v27 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v53, v26);
              if ( _bittest64((const signed __int64 *)v27, 0x32u) )
              {
                if ( *((_DWORD *)v24 + 46) == *((_DWORD *)v27 + 46) )
                  break;
              }
              if ( ++v26 >= v14 )
                goto LABEL_32;
            }
            *((_DWORD *)v24 + 46) = v26 | 0xFE530000;
          }
          else
          {
            *((_DWORD *)v24 + 46) = v23 | 0xFE530000;
            *(_QWORD *)v24 = v25 | 0x4000000000000LL;
          }
LABEL_32:
          --v23;
          --v14;
        }
        while ( v14 );
        if ( *a2 && (unsigned __int16)(v57 - 1) > 1u )
        {
          v28 = *(CCD_TOPOLOGY **)this;
          *((_WORD *)this + 4) = *a2;
          v29 = CCD_TOPOLOGY::CopyInheritScope(v28, (const struct CCD_TOPOLOGY *)v53);
          if ( v29 >= 0 )
          {
            if ( *a2 != 1 )
              v57 = 4;
            v34 = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0);
            v35 = (bool *)this + 60;
            v36 = (bool *)this + 54;
            v37 = (const struct _LUID *)((char *)v34 + 16);
            *(_QWORD *)((char *)this + 12) = *((_QWORD *)v34 + 2);
            *((_DWORD *)this + 5) = *((_DWORD *)v34 + 6);
            *((_DWORD *)this + 6) = *((_DWORD *)v34 + 7);
            *((_DWORD *)this + 7) = *((_DWORD *)v34 + 22);
            *((_DWORD *)this + 8) = *((_DWORD *)v34 + 23);
            IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                                  *(struct _LUID *)((char *)v34 + 16),
                                                  *((_DWORD *)v34 + 7),
                                                  (bool *)this + 53,
                                                  (bool *)this + 60,
                                                  (char *)this + 54,
                                                  0LL,
                                                  0LL,
                                                  0LL);
            if ( IsVirtualizationDisabledForTarget >= 0 )
            {
              v39 = *v35;
              v40 = v57;
              *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
              v41 = !*v36;
              *v35 = !v39;
              *v36 = v41;
              *((_BYTE *)this + 11) = v40 == 3;
              v42 = v40 == 3 && !v39;
              *((_BYTE *)this + 10) = v42;
              if ( v39 && v40 == 3 )
              {
                *((_BYTE *)this + 10) = 0;
                v43 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
                        (CCD_TOPOLOGY **)this,
                        0,
                        v37,
                        *((_DWORD *)v34 + 6));
                v6 = v43;
                if ( v43 >= 0 )
                {
                  if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v34 + 22)) )
                  {
                    v44 = *(_QWORD *)(*(_QWORD *)this + 64LL);
                    if ( v44 )
                    {
                      if ( *(_WORD *)(v44 + 20) >= 2u )
                        CCD_TOPOLOGY::SwapPathsDescriptors(*(void ***)this, 0, 1u);
                    }
                  }
                  goto LABEL_75;
                }
                WdLogSingleEntry5(
                  2LL,
                  v43,
                  *((int *)v34 + 5),
                  v37->LowPart,
                  *((unsigned int *)v34 + 6),
                  *(_QWORD *)(*(_QWORD *)this + 64LL));
                goto LABEL_37;
              }
              IsVirtualizationDisabledForTarget = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
              v6 = IsVirtualizationDisabledForTarget;
              if ( IsVirtualizationDisabledForTarget >= 0 )
                goto LABEL_75;
            }
            WdLogSingleEntry4(
              2LL,
              *((unsigned int *)v34 + 7),
              *((int *)v34 + 5),
              v37->LowPart,
              IsVirtualizationDisabledForTarget);
          }
          else
          {
            WdLogSingleEntry1(2LL, v29);
          }
        }
      }
    }
LABEL_37:
    v30 = *(CCD_TOPOLOGY **)this;
    *((_DWORD *)this + 2) = 0;
    *(_OWORD *)((char *)this + 12) = v50;
    *a2 = 0;
    *(_OWORD *)((char *)this + 28) = v51;
    *(_OWORD *)((char *)this + 44) = v52;
    *((_DWORD *)this + 15) = v49;
    CCD_TOPOLOGY::Clear(v30);
    v31 = v56;
    switch ( v56 )
    {
      case 1u:
        v33 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
        break;
      case 2u:
        v33 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
        break;
      case 3u:
        v33 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
        break;
      default:
        v32 = v56 - 4;
        if ( v32 > 1 )
        {
          WdLogSingleEntry1(1LL, v56);
          v6 = -1073741823;
          goto LABEL_68;
        }
        v33 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
        break;
    }
    v6 = v33;
    if ( v33 < 0 )
    {
      v32 = v31 - 4;
LABEL_68:
      v45 = *(CCD_TOPOLOGY **)this;
      *((_DWORD *)this + 2) = 0;
      CCD_TOPOLOGY::Clear(v45);
      if ( (_DWORD)v31 == 3 )
      {
        v46 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
      }
      else
      {
        if ( v32 > 1 )
          goto LABEL_73;
        v46 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
      }
      v6 = v46;
LABEL_73:
      if ( v6 < 0 )
      {
        WdLogSingleEntry3(3LL, v6, *(_QWORD *)this, v31);
        v47 = *(CCD_TOPOLOGY **)this;
        *((_DWORD *)this + 2) = 0;
        CCD_TOPOLOGY::Clear(v47);
        v6 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
      }
    }
LABEL_75:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v53);
    return (unsigned int)v6;
  }
  WdLogNewEntry5_WdTrace(v5, v4);
  return (unsigned int)v6;
}
