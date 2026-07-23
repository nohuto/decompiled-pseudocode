/*
 * XREFs of CmpCopyKeyPartial @ 0x1407DDB28
 * Callers:
 *     CmpReorganizeHive @ 0x140703230 (CmpReorganizeHive.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmpCopySyncTree2 @ 0x140A21758 (CmpCopySyncTree2.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A28FA0 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14022D0C0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmpAddValueToListEx @ 0x140709CC4 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpCopyCell @ 0x1407DDF80 (CmpCopyCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1407DE09C (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1407DE0CC (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpCopyValue @ 0x1408ABBD4 (CmpCopyValue.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        __int16 a5,
        ULONG_PTR BugCheckParameter4,
        unsigned int a7,
        unsigned int *a8)
{
  int v8; // r13d
  unsigned int v11; // r14d
  __int64 v12; // rdi
  __int64 CellFlat; // rax
  __int64 v14; // r15
  int SecurityDescriptorNode; // r14d
  __int16 v16; // r14
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  __int64 CellPaged; // rax
  __int16 v20; // ax
  int v21; // r14d
  ULONG_PTR v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r15d
  unsigned int *v25; // rcx
  unsigned int v26; // r15d
  __int64 v27; // rax
  unsigned int *v28; // rdi
  __int64 v29; // rsi
  __int64 v31; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-41h]
  unsigned int v33; // [rsp+4Ch] [rbp-3Dh] BYREF
  __int64 v34; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-31h] BYREF
  __int64 v36; // [rsp+60h] [rbp-29h] BYREF
  __int64 v37; // [rsp+68h] [rbp-21h] BYREF
  __int64 v38; // [rsp+70h] [rbp-19h] BYREF
  __int64 v39; // [rsp+78h] [rbp-11h] BYREF
  __int64 v40; // [rsp+80h] [rbp-9h]
  __int64 v41; // [rsp+88h] [rbp-1h]
  int v42; // [rsp+D0h] [rbp+47h]
  unsigned int v44; // [rsp+F0h] [rbp+67h]

  v8 = a7;
  LODWORD(v34) = 0;
  v33 = 0;
  LODWORD(BugCheckParameter4) = -1;
  v42 = -1;
  v11 = a2;
  v31 = -1LL;
  v12 = 0LL;
  v36 = 0xFFFFFFFFLL;
  v37 = 0xFFFFFFFFLL;
  v41 = 0LL;
  v38 = 0xFFFFFFFFLL;
  v39 = 0xFFFFFFFFLL;
  v32 = 0;
  v35 = 0xFFFFFFFF00000000uLL;
  if ( a7 == 2 )
  {
    if ( a4 == -1 )
      v8 = 0;
    else
      v8 = a4 >> 31;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v36);
  v14 = CellFlat;
  LODWORD(v40) = *(_DWORD *)(CellFlat + 44);
  SecurityDescriptorNode = CmpCopyCell(BugCheckParameter3, v11, (__int64)&BugCheckParameter4);
  if ( SecurityDescriptorNode < 0 )
  {
    v17 = BugCheckParameter4;
    goto LABEL_45;
  }
  v16 = a5;
  if ( (a5 & 2) != 0 )
  {
    a7 = *(unsigned __int16 *)(v14 + 74);
    if ( a7 )
    {
      SecurityDescriptorNode = CmpCopyCell(BugCheckParameter3, *(unsigned int *)(v14 + 48), (__int64)&v31);
      if ( SecurityDescriptorNode < 0 )
      {
        v17 = BugCheckParameter4;
        v18 = v31;
LABEL_46:
        v26 = HIDWORD(v31);
        goto LABEL_47;
      }
      v16 = a5;
      v42 = v31;
    }
  }
  else
  {
    a7 = 0;
  }
  v17 = BugCheckParameter4;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(a3, (unsigned int)BugCheckParameter4);
  else
    CellPaged = HvpGetCellPaged(a3, BugCheckParameter4, (unsigned int *)&v37);
  v12 = CellPaged;
  *(_DWORD *)(CellPaged + 20) = 0;
  *(_DWORD *)(CellPaged + 24) = 0;
  *(_DWORD *)(CellPaged + 48) = v42;
  *(_WORD *)(CellPaged + 74) = a7;
  *(_DWORD *)(CellPaged + 44) = -1;
  *(_DWORD *)(CellPaged + 28) = -1;
  *(_DWORD *)(CellPaged + 32) = -1;
  *(_DWORD *)(CellPaged + 16) = a4;
  *(_BYTE *)(CellPaged + 12) = 0;
  if ( (v16 & 0x100) != 0 )
    *(_BYTE *)(CellPaged + 13) &= 0xFCu;
  if ( (v16 & 0x80u) != 0 )
    *(_BYTE *)(CellPaged + 13) |= 0x80u;
  v20 = *(_WORD *)(v14 + 2) & 0x30;
  *(_WORD *)(v12 + 2) = v20;
  if ( (v16 & 0x20) != 0 )
  {
    v20 = *(_WORD *)(v14 + 2) & 0xFFBF;
    *(_WORD *)(v12 + 2) = v20;
  }
  if ( a4 == -1 )
    *(_WORD *)(v12 + 2) = v20 | 0xC;
  if ( (v16 & 0x10) == 0 )
  {
    CmpLockTwoSecurityCachesExclusiveShared(a3, BugCheckParameter3);
    CmpFindSecurityCellCacheIndex(BugCheckParameter3, v40, &v33);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a3,
                               v17,
                               v12,
                               v17 >> 31,
                               (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v33 + 8) + 32LL),
                               0,
                               (unsigned int *)(v12 + 44));
    CmpUnlockTwoSecurityCaches(a3, BugCheckParameter3);
    if ( SecurityDescriptorNode < 0 )
    {
LABEL_45:
      v18 = v42;
      goto LABEL_46;
    }
  }
  if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
    v21 = 0;
  else
    v21 = *(_DWORD *)(v14 + 36);
  *(_DWORD *)(v12 + 36) = 0;
  a7 = v21;
  *(_DWORD *)(v12 + 40) = -1;
  if ( (a5 & 4) != 0 && v21 )
  {
    v22 = *(unsigned int *)(v14 + 40);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v23 = HvpGetCellFlat(BugCheckParameter3, v22);
    else
      v23 = HvpGetCellPaged(BugCheckParameter3, v22, (unsigned int *)&v38);
    v44 = 0;
    v41 = v23;
    v24 = a7;
    v25 = (unsigned int *)v23;
    v40 = v23;
    while ( 1 )
    {
      SecurityDescriptorNode = CmpCopyValue(BugCheckParameter3, *v25, a3, (__int64)&v34);
      if ( SecurityDescriptorNode < 0 )
        break;
      SecurityDescriptorNode = CmpAddValueToListEx(a3, v34, v44, v8, (unsigned int *)&v35, v24);
      if ( SecurityDescriptorNode < 0 )
        break;
      v25 = (unsigned int *)(v40 + 4);
      ++v44;
      v40 += 4LL;
      if ( v44 >= v24 )
      {
        *(_QWORD *)(v12 + 36) = v35;
        goto LABEL_42;
      }
    }
    v26 = HIDWORD(v35);
    v18 = v42;
    v32 = v35;
  }
  else
  {
LABEL_42:
    v26 = -1;
    v32 = 0;
    v18 = -1;
    SecurityDescriptorNode = 0;
    *a8 = v17;
    v17 = -1;
  }
LABEL_47:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v36);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v36);
  if ( v12 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, &v37);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v37);
  }
  if ( v41 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v38);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v38);
  }
  if ( v26 != -1 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      v27 = HvpGetCellFlat(a3, v26);
    else
      v27 = HvpGetCellPaged(a3, v26, (unsigned int *)&v39);
    v28 = (unsigned int *)v27;
    if ( v32 )
    {
      v29 = v32;
      do
      {
        HvFreeCell(a3, *v28++);
        --v29;
      }
      while ( v29 );
    }
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, &v39);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v39);
    HvFreeCell(a3, v26);
  }
  if ( v18 != -1 )
    HvFreeCell(a3, v18);
  if ( v17 != -1 )
    HvFreeCell(a3, v17);
  return (unsigned int)SecurityDescriptorNode;
}
