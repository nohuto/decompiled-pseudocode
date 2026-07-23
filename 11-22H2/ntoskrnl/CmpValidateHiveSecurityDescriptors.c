/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x14070CA8C
 * Callers:
 *     CmCheckRegistry @ 0x1407052C0 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x1402F69F0 (SetFailureLocation.c)
 *     CmpResetCachedSecurity @ 0x14067F580 (CmpResetCachedSecurity.c)
 *     CmpDestroySecurityCache @ 0x140689124 (CmpDestroySecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x14069A11C (CmpCheckSecurityCellAccess.c)
 *     HvIsCellAllocated @ 0x1406DD400 (HvIsCellAllocated.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     CmpInitSecurityCache @ 0x1407033F0 (CmpInitSecurityCache.c)
 *     CmpAddSecurityCellToCache @ 0x14070D788 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14070DBD0 (RtlValidRelativeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1407474B0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     CmpAdjustSecurityCacheSize @ 0x1407E0D6C (CmpAdjustSecurityCacheSize.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     HvpGetBinContextInitialize @ 0x140AF6200 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter3,
        int a2,
        _BYTE *a3,
        _RTL_BITMAP *a4,
        __int64 a5)
{
  _RTL_BITMAP *v6; // rdi
  _DWORD *v7; // r14
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // esi
  ULONG_PTR v11; // rdx
  __int64 CellFlat; // rax
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned int v15; // r15d
  unsigned int v16; // esi
  unsigned int v17; // r14d
  __int64 CellPaged; // rax
  unsigned int v19; // eax
  ULONG v20; // edx
  int v21; // eax
  int v22; // r9d
  __int64 v23; // rax
  unsigned int v24; // edi
  int v25; // eax
  ULONG_PTR v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // ecx
  ULONG v29; // edx
  int v30; // eax
  __int64 v31; // rdx
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+20h] [rbp-38h]
  int v35; // [rsp+20h] [rbp-38h]
  int v36; // [rsp+30h] [rbp-28h]
  unsigned int v37; // [rsp+38h] [rbp-20h] BYREF
  int v38; // [rsp+3Ch] [rbp-1Ch] BYREF
  unsigned int v39[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v40; // [rsp+A0h] [rbp+48h]

  *(_QWORD *)v39 = 0xFFFFFFFFLL;
  v6 = a4;
  HvpGetBinContextInitialize(&v39[1]);
  v7 = 0LL;
  v38 = 0;
  v37 = v8;
  HvpGetBinContextInitialize(&v38);
  v36 = *(_DWORD *)(BugCheckParameter3 + 1872);
  if ( !HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), 0LL) )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v33 = 0;
LABEL_5:
    v10 = -1073741492;
    SetFailureLocation(v9, 0, 9, -1073741492, v33);
    return v10;
  }
  v11 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v11);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v11, v39);
  v13 = CellFlat;
  if ( !CellFlat )
  {
    v9 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v33 = 16;
    goto LABEL_5;
  }
  if ( -4 - *(_DWORD *)(CellFlat - 4) < 76 )
  {
    v14 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v34 = 24;
LABEL_90:
    v10 = -1073741492;
    v22 = -1073741492;
LABEL_91:
    SetFailureLocation(v14, 0, 9, v22, v34);
    goto LABEL_92;
  }
  v15 = *(_DWORD *)(CellFlat + 44);
  v16 = 0;
  v17 = v15;
  v40 = v15;
  while ( 1 )
  {
    if ( !HvIsCellAllocated(BugCheckParameter3, v15, v6) )
    {
      if ( v17 != v15 )
      {
        v7 = 0LL;
        goto LABEL_69;
      }
      v10 = -1073741492;
      SetFailureLocation(a5, 0, 9, -1073741492, 128);
      v7 = 0LL;
      goto LABEL_92;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v15);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v15, &v37);
    v7 = (_DWORD *)CellPaged;
    if ( !CellPaged )
    {
      v34 = 144;
      goto LABEL_89;
    }
    v19 = -4 - *(_DWORD *)(CellPaged - 4);
    if ( v19 < 0x14 )
      break;
    v20 = v7[4];
    if ( v20 + 20 < v20 || v20 + 20 > v19 )
      break;
    if ( v15 != v40 && v7[2] != v16 )
    {
      v34 = 160;
      goto LABEL_89;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v7 + 5, v20, 0) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v37);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v37);
      v35 = 168;
      goto LABEL_60;
    }
    if ( v36 )
    {
      v21 = CmpResetCachedSecurity(BugCheckParameter3, v15);
      v10 = v21;
      if ( v21 < 0 )
      {
        v34 = 184;
        goto LABEL_32;
      }
    }
    else
    {
      v21 = CmpAddSecurityCellToCache(BugCheckParameter3, v15);
      v10 = v21;
      if ( v21 < 0 )
      {
        v34 = 176;
LABEL_32:
        v22 = v21;
        v14 = a5;
        goto LABEL_91;
      }
    }
    v16 = v15;
    v15 = v7[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v37);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v37);
    v17 = v40;
    if ( v15 == v40 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v23 = HvpGetCellFlat(BugCheckParameter3, v15);
      else
        v23 = HvpGetCellPaged(BugCheckParameter3, v15, &v37);
      v7 = (_DWORD *)v23;
      if ( *(_DWORD *)(v23 + 8) != v16 )
      {
        v34 = 200;
        goto LABEL_89;
      }
      if ( !v36 )
        CmpAdjustSecurityCacheSize(BugCheckParameter3);
      if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
      {
        v24 = 0;
        while ( 1 )
        {
          v25 = CmpCheckSecurityCellAccess(
                  BugCheckParameter3,
                  *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v24));
          v10 = v25;
          if ( v25 < 0 )
            break;
          if ( ++v24 >= *(_DWORD *)(BugCheckParameter3 + 1872) )
            goto LABEL_52;
        }
        SetFailureLocation(a5, 0, 9, v25, 208);
        if ( v10 != -1073741670 )
          v10 = -1073741492;
      }
      else
      {
LABEL_52:
        v10 = 0;
      }
      goto LABEL_92;
    }
    v6 = a4;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v37);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v37);
  v35 = 152;
LABEL_60:
  v7 = 0LL;
  SetFailureLocation(a5, 1, 9, -1073741492, v35);
LABEL_69:
  if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
  {
    v34 = 112;
    goto LABEL_89;
  }
  if ( !HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)(v13 + 44), 0LL) )
  {
    v34 = 32;
    goto LABEL_89;
  }
  v26 = *(unsigned int *)(v13 + 44);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v27 = HvpGetCellFlat(BugCheckParameter3, v26);
  else
    v27 = HvpGetCellPaged(BugCheckParameter3, v26, &v37);
  v7 = (_DWORD *)v27;
  if ( !v27 )
  {
    v34 = 48;
    goto LABEL_89;
  }
  v28 = -4 - *(_DWORD *)(v27 - 4);
  if ( v28 < 0x14 || (v29 = *(_DWORD *)(v27 + 16), v29 + 20 < v29) || v29 + 20 > v28 )
  {
    v34 = 80;
LABEL_89:
    v14 = a5;
    goto LABEL_90;
  }
  if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v27 + 20), v29, 0) )
  {
    v34 = 64;
    goto LABEL_89;
  }
  v21 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v13 + 44));
  v10 = v21;
  if ( v21 < 0 )
  {
    v34 = 96;
    goto LABEL_32;
  }
  v30 = *(_DWORD *)(v13 + 44);
  v7[2] = v30;
  v7[1] = v30;
  CmpDestroySecurityCache(BugCheckParameter3);
  CmpInitSecurityCache(BugCheckParameter3);
  v10 = -1073741267;
  v31 = *(_QWORD *)(BugCheckParameter3 + 64);
  *a3 = 1;
  *(_DWORD *)(v31 + 4088) |= 4u;
LABEL_92:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v39);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v39);
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v37);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v37);
  }
  return v10;
}
