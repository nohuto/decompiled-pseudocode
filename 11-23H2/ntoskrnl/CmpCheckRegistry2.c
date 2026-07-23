/*
 * XREFs of CmpCheckRegistry2 @ 0x1406DFB00
 * Callers:
 *     CmCheckRegistry @ 0x140705420 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x1402F6C80 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpCheckKey @ 0x1406E0740 (CmpCheckKey.c)
 *     CmpCheckLexicographicalOrder @ 0x1407AA5C0 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1407D1598 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A2499C (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter3,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        _RTL_BITMAP *BitMapHeader,
        __int64 a7,
        int *a8)
{
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  int *v13; // rcx
  unsigned int *v14; // r13
  int v15; // r15d
  __int64 v16; // r12
  unsigned int *v17; // rsi
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edi
  ULONG_PTR v21; // rdx
  int v22; // eax
  __int64 CellFlat; // rax
  unsigned int v24; // r14d
  ULONG_PTR v25; // rdx
  bool v26; // zf
  _WORD *CellPaged; // rax
  _WORD *v28; // r15
  int v29; // edi
  __int64 v30; // rdi
  __int64 v31; // rax
  _WORD *v32; // rcx
  unsigned int v33; // eax
  int v34; // eax
  __int64 v35; // r14
  int v37; // eax
  int v38; // r14d
  int v39; // r9d
  _BOOL8 v40; // rax
  int v41; // eax
  int v42; // eax
  int v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+40h] [rbp-38h]
  _DWORD v45[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v46; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v47[2]; // [rsp+58h] [rbp-20h] BYREF
  _BOOL8 v48; // [rsp+60h] [rbp-18h]
  int v49; // [rsp+B0h] [rbp+38h]
  char v51; // [rsp+C8h] [rbp+50h]

  v48 = 0LL;
  v46 = 0LL;
  v51 = 0;
  v10 = a2;
  HvpGetCellContextReinitialize(&v46);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(10240LL, 0LL, 1935887683LL);
  v44 = v11;
  if ( !v11 )
  {
    v20 = -1073741670;
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
    return v20;
  }
  v12 = a7;
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v11;
  v13 = a8;
  v14 = (unsigned int *)(v11 - 20);
  v15 = 0;
  *(_DWORD *)(v11 + 12) = 0;
  *(_BYTE *)(v11 + 16) = 0;
  v16 = 0LL;
  *(_DWORD *)v11 = a3;
  *a8 = 0;
  v17 = (unsigned int *)v11;
  *(_QWORD *)(v11 + 4) = -1LL;
  v49 = 0;
  while ( 1 )
  {
    if ( *((_BYTE *)v17 + 16) )
      goto LABEL_15;
    v18 = *v13;
    *((_BYTE *)v17 + 16) = 1;
    if ( v18 != -1 )
      *v13 = v18 + 1;
    v19 = CmpCheckKey(BugCheckParameter3, a5, BitMapHeader, v12);
    v20 = v19;
    if ( v19 == -2147483606 )
    {
      v51 = 1;
      goto LABEL_10;
    }
    if ( v19 < 0 )
      break;
LABEL_10:
    if ( (v10 & 0x100000) != 0 && v16 )
    {
      v21 = v14[2];
      if ( (_DWORD)v21 != -1 )
      {
        v22 = CmpCheckLexicographicalOrder(BugCheckParameter3, v21, *v17);
        v20 = v22;
        if ( v22 < 0 )
        {
          if ( v22 != -1073741492 )
          {
            v43 = 37;
            v39 = v22;
            goto LABEL_94;
          }
          v37 = 48;
          v38 = v10 & 0x20000;
          goto LABEL_77;
        }
      }
      v14[2] = *v17;
    }
LABEL_15:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, *v17);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    if ( !CellFlat )
    {
      v20 = -1073741492;
      v43 = 64;
      v39 = -1073741492;
LABEL_94:
      SetFailureLocation(a7, 0, 13, v39, v43);
LABEL_95:
      v35 = v44;
      goto LABEL_52;
    }
    v24 = v17[3];
    if ( v24 < *(_DWORD *)(CellFlat + 20) )
    {
      v25 = *(unsigned int *)(CellFlat + 28);
      v47[0] = -1;
      v26 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v47[1] = 0;
      if ( v26 )
        CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
      else
        CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v25);
      v28 = CellPaged;
      if ( !CellPaged )
      {
        v48 = 0LL;
        v42 = 80;
LABEL_88:
        v20 = -1073741670;
LABEL_89:
        SetFailureLocation(a7, v48, 13, v20, v42);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v46);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v46);
        goto LABEL_95;
      }
      v45[0] = -1;
      v45[1] = 0;
      if ( *CellPaged == 26994 && (v30 = 0LL, CellPaged[1]) )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v31 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)&v28[2 * v30 + 2]);
          else
            v31 = HvpGetCellPaged(BugCheckParameter3);
          v32 = (_WORD *)v31;
          if ( !v31 )
          {
            v29 = -1;
            goto LABEL_30;
          }
          v33 = *(unsigned __int16 *)(v31 + 2);
          if ( v24 < v33 )
            break;
          v24 -= v33;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, v45);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v45);
          v30 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v30 >= (unsigned __int16)v28[1] )
            goto LABEL_28;
        }
        if ( ((*v32 - 26220) & 0xFDFF) != 0 )
          v29 = *(_DWORD *)&v32[2 * v24 + 2];
        else
          v29 = *(_DWORD *)&v32[4 * v24 + 2];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v45);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v45);
      }
      else
      {
LABEL_28:
        if ( ((*v28 - 26220) & 0xFDFF) != 0 )
          v29 = *(_DWORD *)&v28[2 * v24 + 2];
        else
          v29 = *(_DWORD *)&v28[4 * v24 + 2];
      }
LABEL_30:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v47);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v47);
      if ( v29 == -1 )
      {
        v48 = 0LL;
        v42 = 88;
        goto LABEL_88;
      }
      ++v16;
      ++v17[3];
      v15 = v49 + 1;
      v14 += 5;
      ++v49;
      v17 += 5;
      if ( v16 == 512 )
      {
        v20 = -1073741492;
        v42 = 96;
        goto LABEL_89;
      }
      v17[1] = *v14;
      *v17 = v29;
      v17[2] = -1;
      v17[3] = 0;
      *((_BYTE *)v17 + 16) = 0;
    }
    else
    {
      --v15;
      --v16;
      v14 -= 5;
      v49 = v15;
      v17 -= 5;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v46);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v46);
    if ( v16 < 0 )
    {
      if ( (a2 & 0x20000) == 0 )
      {
        v34 = CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter3);
        v20 = v34;
        if ( v34 < 0 )
        {
          v43 = 112;
          v39 = v34;
          goto LABEL_94;
        }
      }
      v35 = v44;
      if ( v51 )
        v20 = -2147483606;
      else
        v20 = 0;
      goto LABEL_52;
    }
    v13 = a8;
    v10 = a2;
    v12 = a7;
  }
  if ( v19 != -1073741492 )
    goto LABEL_95;
  v38 = v10 & 0x20000;
  if ( v38 )
  {
    v40 = 0LL;
  }
  else if ( BYTE2(NlsMbOemCodePageTag) )
  {
    v40 = 1LL;
  }
  else
  {
    v40 = (CmpBootType & 6) != 0;
  }
  v48 = v40;
  v37 = 16;
LABEL_77:
  SetFailureLocation(a7, v48, 13, v20, v37);
  if ( v38 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 || !v15 )
  {
    v20 = -1073741492;
    SetFailureLocation(a7, 0, 13, -1073741492, 24);
    goto LABEL_95;
  }
  v35 = v44;
  v41 = CmpRemoveSubKeyCellNoCellRef(BugCheckParameter3, *(unsigned int *)(v44 + 20LL * v15 + 4));
  v20 = v41;
  if ( v41 >= 0 )
  {
    v20 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  else
  {
    SetFailureLocation(a7, 0, 13, v41, 32);
  }
LABEL_52:
  (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter3 + 32))(v35, 10240LL);
  return v20;
}
