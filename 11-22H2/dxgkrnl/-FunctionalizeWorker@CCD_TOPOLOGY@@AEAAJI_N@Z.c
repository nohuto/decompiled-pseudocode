/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C016CCBC
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C016C7F0 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C00088CC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0016EE0 (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C016C4BC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C016C608 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1942::__AUTO_USING_PM_PathChangeReason1942 @ 0x1C016C698 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1942--__AUTO.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C016C8C0 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C016CF38 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C016CFDC (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C016D14C (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016EA98 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C017D4B8 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0180B78 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0180C44 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0180EE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C0185520 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C03BBCCC (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C03BBD60 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, unsigned int a2, bool a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v7; // r9d
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r15d
  unsigned int i; // edx
  unsigned __int16 v16; // ax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned __int16 v23; // cx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // r13d
  __int64 v27; // r12
  __int64 v28; // r8
  int PathModalityForAdapter; // eax
  int v30; // eax
  int v31; // eax
  __int64 v33; // rdx
  unsigned __int16 v34; // si
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int Active; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned int v45; // esi
  __int64 v46; // r14
  __int64 v47; // rdx
  CCD_TOPOLOGY *v48; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v49; // rdx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  DXGADAPTER *v55[2]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v56; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-51h]
  _BYTE v58[160]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v59; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v60; // [rsp+108h] [rbp+6Fh]

  v60 = a2;
  v3 = 0;
  v5 = *((_QWORD *)this + 8);
  v7 = *(unsigned __int16 *)(v5 + 20);
  v56 = v5 + 56;
  v57 = v7;
  if ( v7 )
  {
    v8 = (_DWORD *)(v5 + 312);
    v9 = v7;
    do
    {
      *v8 |= 1u;
      v8[1] = 0;
      v8 += 74;
      --v9;
    }
    while ( v9 );
  }
  v10 = *((_QWORD *)this + 8);
  if ( !v10 || !*(_WORD *)(v10 + 20) )
  {
    WdLogSingleEntry2(3LL, this, v10);
    LODWORD(v13) = -1073741823;
    goto LABEL_64;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v11 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v12 = *((_QWORD *)this + 8);
  v13 = v11;
  if ( v11 < 0 )
  {
    v33 = *((_QWORD *)this + 8);
    goto LABEL_34;
  }
  v14 = 0;
  for ( i = 0; ; ++i )
  {
    v16 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( i >= v16 )
      break;
    v17 = 296LL * i;
    if ( *(_BYTE *)(v17 + v12 + 185) )
    {
      v18 = *(_QWORD *)(v17 + v12 + 56);
      if ( (v18 & 0x101) == 0 && (v18 & 0x20000) != 0 )
        v14 = 1;
    }
  }
  if ( !v14 )
    goto LABEL_15;
  v34 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v58, 8u, 0);
  LOWORD(v59) = 8;
  while ( 1 )
  {
    if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v58, v34) < v34 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
      v50[3] = v34;
      v50[4] = this;
      v41 = *((_QWORD *)this + 8);
      v50[5] = v41;
      goto LABEL_55;
    }
    Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v58, 1, a3, 1, (unsigned __int16 *)&v59);
    if ( Active != -1073741789 )
      break;
    v34 = v59;
  }
  if ( Active < 0 )
  {
LABEL_55:
    WdLogNewEntry5_WdTrace(v41, v40, v42, v43);
    v14 = 0;
    goto LABEL_56;
  }
  v44 = *((_QWORD *)this + 8);
  v45 = 0;
  if ( *(_WORD *)(v44 + 20) )
  {
    while ( 1 )
    {
      v46 = 296LL * v45;
      v55[0] = 0LL;
      if ( !DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v55, (const struct _LUID *)(v46 + v44 + 72)) )
        break;
      if ( *(_BYTE *)(*((_QWORD *)this + 8) + v46 + 185) )
      {
        if ( *((_QWORD *)v55[0] + 366) )
        {
          if ( !ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v55[0] + 365)) )
          {
            v49 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v46 + v47 + 56);
            if ( (*(_DWORD *)v49 & 0x20101) == 0x20000LL )
              CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v48, v49, (const struct CCD_TOPOLOGY *)v58);
          }
        }
      }
      DXGADAPTER_REFERENCE::Assign(v55, 0LL);
      v44 = *((_QWORD *)this + 8);
      if ( ++v45 >= *(unsigned __int16 *)(v44 + 20) )
        goto LABEL_56;
    }
    v14 = 0;
    DXGADAPTER_REFERENCE::Assign(v55, 0LL);
  }
LABEL_56:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v58);
LABEL_15:
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v19 = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) = 0;
  v20 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v20 + 20) )
  {
    do
    {
      v21 = v19++;
      *(_DWORD *)(296 * v21 + v20 + 276) = 0;
      v20 = *((_QWORD *)this + 8);
    }
    while ( v19 < *(unsigned __int16 *)(v20 + 20) );
  }
  v22 = 0;
  if ( !*(_WORD *)(v20 + 20) )
  {
LABEL_28:
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000uLL);
    v30 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v13 = v30;
    if ( v30 >= 0 )
    {
      CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000uLL);
      v31 = CCD_TOPOLOGY::AdjustDesktopLayout(this, 0);
      v13 = v31;
      if ( v31 >= 0 )
      {
        CCD_TOPOLOGY::FillScalingIntent(this);
        CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
        goto LABEL_31;
      }
    }
    v33 = *((_QWORD *)this + 8);
LABEL_34:
    WdLogSingleEntry2(2LL, v33, v13);
    goto LABEL_64;
  }
  while ( 1 )
  {
    if ( v20 && *(_WORD *)(v20 + 20) )
    {
      v23 = 0;
      v24 = 296LL * v22;
      v59 = v22;
      while ( 1 )
      {
        v25 = 296LL * v23;
        if ( *(_DWORD *)(v25 + v20 + 72) == *(_DWORD *)(v24 + v20 + 72)
          && *(_DWORD *)(v25 + v20 + 76) == *(_DWORD *)(v24 + v20 + 76) )
        {
          break;
        }
        ++v23;
      }
      if ( v23 == v22 )
        break;
    }
LABEL_27:
    v20 = *((_QWORD *)this + 8);
    if ( ++v22 >= *(unsigned __int16 *)(v20 + 20) )
      goto LABEL_28;
  }
  v26 = 0;
  v27 = 296LL * v22;
  while ( 1 )
  {
    v28 = v60;
    LOBYTE(v28) = *((_BYTE *)this + 76) & 1;
    PathModalityForAdapter = BmlGetPathModalityForAdapter(
                               *((_QWORD *)this + 8),
                               v27 + *((_QWORD *)this + 8) + 72LL,
                               v28,
                               *((unsigned int *)this + 20),
                               v60);
    v13 = PathModalityForAdapter;
    if ( PathModalityForAdapter != -1071774970 )
      break;
    if ( !v14
      || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                          this,
                          (const struct _LUID *)(v27 + *((_QWORD *)this + 8) + 72LL))
      || v26 )
    {
      goto LABEL_62;
    }
    v26 = 1;
    WdLogNewEntry5_WdTrace(v52, v51, v53, v54);
  }
  if ( PathModalityForAdapter >= 0 )
    goto LABEL_27;
LABEL_62:
  WdLogSingleEntry5(
    2LL,
    v13,
    *((_QWORD *)this + 8),
    v59,
    *(int *)(*((_QWORD *)this + 8) + v27 + 76),
    *(unsigned int *)(*((_QWORD *)this + 8) + v27 + 72));
LABEL_64:
  v3 = v13;
LABEL_31:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1942::__AUTO_USING_PM_PathChangeReason1942(&v56);
  return v3;
}
