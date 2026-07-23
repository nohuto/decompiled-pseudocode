/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x1406DAA80
 * Callers:
 *     CmpQueryKeyData @ 0x1406D6284 (CmpQueryKeyData.c)
 *     CmEnumerateKey @ 0x1406DC470 (CmEnumerateKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A166C4 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmGetKeyLastWriteTime @ 0x1406D51E4 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1406D525C (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406D52E8 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpPopulateKeyNodeInformation @ 0x140707658 (CmpPopulateKeyNodeInformation.c)
 *     CmGetVisibleSubkeyCount @ 0x1407108F8 (CmGetVisibleSubkeyCount.c)
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x1407C52D0 (CmListGetPrevElement.c)
 *     CmpPopulateKeyFullInformation @ 0x1407D19BC (CmpPopulateKeyFullInformation.c)
 *     CmGetVisibleValueCount @ 0x1407D6F4C (CmGetVisibleValueCount.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpQueryKeyDataFromNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8)
{
  ULONG_PTR v11; // r13
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  unsigned __int16 v16; // cx
  unsigned int v17; // edx
  unsigned int v18; // r12d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned int i; // eax
  int VisibleMaxNameLenAndClassLen; // ebx
  __int64 PrevElement; // rax
  __int64 v25; // r13
  int v26; // ebx
  __int64 CellFlat; // rax
  __int64 CellPaged; // rax
  __int64 v29; // [rsp+50h] [rbp-68h] BYREF
  __int64 v30; // [rsp+58h] [rbp-60h] BYREF
  __int128 v31; // [rsp+60h] [rbp-58h] BYREF
  __int128 v32; // [rsp+70h] [rbp-48h] BYREF
  __int128 v33; // [rsp+80h] [rbp-38h] BYREF

  v11 = BugCheckParameter3;
  v12 = 0LL;
  v29 = 0LL;
  HvpGetCellContextReinitialize(&v29);
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( !a3 )
  {
    v30 = 0LL;
    if ( a2 )
    {
      v15 = *(_QWORD *)(a2 + 4);
      if ( !a7 )
      {
LABEL_4:
        v16 = *(_WORD *)(a2 + 72);
        if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          v16 *= 2;
        v17 = v16;
        v18 = v16 + 16;
        *a6 = v18;
        if ( a5 < 0x10 )
        {
          VisibleMaxNameLenAndClassLen = -1073741789;
        }
        else
        {
          *(_QWORD *)a4 = v15;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = v16;
          v19 = a5 - 16;
          if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          {
            v20 = v19 >> 1;
            if ( v20 >= *(unsigned __int16 *)(a2 + 72) )
              v20 = *(unsigned __int16 *)(a2 + 72);
            for ( i = 0; i < v20; ++i )
              *(_WORD *)(a4 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
          }
          else
          {
            if ( v19 <= v16 )
              v17 = a5 - 16;
            memmove((void *)(a4 + 16), (const void *)(a2 + 76), v17);
          }
          if ( a5 < v18 )
            VisibleMaxNameLenAndClassLen = -2147483643;
          else
            VisibleMaxNameLenAndClassLen = 0;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a7 + 168);
    }
    if ( a8 )
    {
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(a7 + 208, &v30, v13, v14);
        v25 = PrevElement;
        if ( !PrevElement )
          break;
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), a8) && *(_DWORD *)(v25 + 68) == 8 )
        {
          v15 = *(_QWORD *)(v25 + 88);
          break;
        }
      }
      v11 = BugCheckParameter3;
    }
    goto LABEL_4;
  }
  v26 = a3 - 1;
  if ( v26 )
  {
    if ( v26 == 1 )
    {
      *(_QWORD *)&v31 = CmGetKeyLastWriteTime(a7, a2, a8, v14);
      DWORD2(v31) = 0;
      VisibleMaxNameLenAndClassLen = CmGetVisibleMaxNameLenAndClassLen(
                                       a7,
                                       a2,
                                       a8,
                                       (unsigned int *)&v32 + 2,
                                       (unsigned int *)&v32 + 3);
      if ( VisibleMaxNameLenAndClassLen >= 0 )
      {
        VisibleMaxNameLenAndClassLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                         a7,
                                         a2,
                                         a8,
                                         (_DWORD *)&v33 + 1,
                                         (unsigned int *)&v33 + 2);
        if ( VisibleMaxNameLenAndClassLen >= 0 )
        {
          DWORD1(v32) = CmGetVisibleSubkeyCount(a7, a2, a8);
          LODWORD(v33) = CmGetVisibleValueCount(a7, a2, a8);
          if ( *(_WORD *)(a2 + 74) )
          {
            if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v11, *(unsigned int *)(a2 + 48));
            else
              CellFlat = HvpGetCellPaged(v11);
            v12 = CellFlat;
          }
          VisibleMaxNameLenAndClassLen = CmpPopulateKeyFullInformation(
                                           &v31,
                                           v12,
                                           *(unsigned __int16 *)(a2 + 74),
                                           a4,
                                           a5,
                                           a6);
        }
      }
    }
    else
    {
      VisibleMaxNameLenAndClassLen = -1073741811;
    }
  }
  else
  {
    *(_QWORD *)&v31 = CmGetKeyLastWriteTime(a7, a2, a8, v14);
    DWORD2(v31) = 0;
    if ( *(_WORD *)(a2 + 74) )
    {
      if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v11, *(unsigned int *)(a2 + 48));
      else
        CellPaged = HvpGetCellPaged(v11);
      v12 = CellPaged;
    }
    VisibleMaxNameLenAndClassLen = CmpPopulateKeyNodeInformation(
                                     &v31,
                                     a2,
                                     v12,
                                     *(unsigned __int16 *)(a2 + 74),
                                     a4,
                                     a5,
                                     a6);
  }
LABEL_20:
  if ( v12 )
  {
    if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v11, &v29);
    else
      HvpReleaseCellPaged(v11, &v29);
  }
  return (unsigned int)VisibleMaxNameLenAndClassLen;
}
