/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x1407C3490
 * Callers:
 *     CmpQueryKeyData @ 0x1406A4D98 (CmpQueryKeyData.c)
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmGetVisibleSubkeyCount @ 0x14067E8E0 (CmGetVisibleSubkeyCount.c)
 *     CmpPopulateKeyNodeInformation @ 0x14069F540 (CmpPopulateKeyNodeInformation.c)
 *     CmGetVisibleValueCount @ 0x1406A5080 (CmGetVisibleValueCount.c)
 *     CmGetKeyLastWriteTime @ 0x1406A50C8 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1406A5158 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406A52D4 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpPopulateKeyFullInformation @ 0x1406C27B4 (CmpPopulateKeyFullInformation.c)
 *     CmListGetPrevElement @ 0x140721F88 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
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
  const void *v12; // r14
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int16 v15; // cx
  unsigned int v16; // edx
  unsigned int v17; // r12d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int i; // eax
  int VisibleMaxNameLenAndClassLen; // ebx
  int v23; // ebx
  __int64 PrevElement; // rax
  __int64 v25; // r13
  __int64 CellPaged; // rax
  __int64 CellFlat; // rax
  __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  __int64 v29; // [rsp+58h] [rbp-60h] BYREF
  __int128 v30; // [rsp+60h] [rbp-58h] BYREF
  __int128 v31; // [rsp+70h] [rbp-48h] BYREF
  __int128 v32; // [rsp+80h] [rbp-38h] BYREF

  v11 = BugCheckParameter3;
  v12 = 0LL;
  v28 = 0LL;
  HvpGetCellContextReinitialize(&v28);
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( !a3 )
  {
    v29 = 0LL;
    if ( a2 )
    {
      v14 = *(_QWORD *)(a2 + 4);
      if ( !a7 )
      {
LABEL_4:
        v15 = *(_WORD *)(a2 + 72);
        if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          v15 *= 2;
        v16 = v15;
        v17 = v15 + 16;
        *a6 = v17;
        if ( a5 < 0x10 )
        {
          VisibleMaxNameLenAndClassLen = -1073741789;
        }
        else
        {
          *(_QWORD *)a4 = v14;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = v15;
          v18 = a5 - 16;
          if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          {
            v19 = v18 >> 1;
            if ( v19 >= *(unsigned __int16 *)(a2 + 72) )
              v19 = *(unsigned __int16 *)(a2 + 72);
            for ( i = 0; i < v19; ++i )
              *(_WORD *)(a4 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
          }
          else
          {
            if ( v18 <= v15 )
              v16 = a5 - 16;
            memmove((void *)(a4 + 16), (const void *)(a2 + 76), v16);
          }
          if ( a5 < v17 )
            VisibleMaxNameLenAndClassLen = -2147483643;
          else
            VisibleMaxNameLenAndClassLen = 0;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v14 = *(_QWORD *)(a7 + 168);
    }
    if ( a8 )
    {
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(a7 + 208, &v29);
        v25 = PrevElement;
        if ( !PrevElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a8) && *(_DWORD *)(v25 + 68) == 8 )
        {
          v14 = *(_QWORD *)(v25 + 88);
          break;
        }
      }
      v11 = BugCheckParameter3;
    }
    goto LABEL_4;
  }
  v23 = a3 - 1;
  if ( v23 )
  {
    if ( v23 == 1 )
    {
      *(_QWORD *)&v30 = CmGetKeyLastWriteTime(a7, a2, a8, v13);
      DWORD2(v30) = 0;
      VisibleMaxNameLenAndClassLen = CmGetVisibleMaxNameLenAndClassLen(
                                       a7,
                                       a2,
                                       a8,
                                       (unsigned int *)&v31 + 2,
                                       (unsigned int *)&v31 + 3);
      if ( VisibleMaxNameLenAndClassLen >= 0 )
      {
        VisibleMaxNameLenAndClassLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                         a7,
                                         a2,
                                         a8,
                                         (_DWORD *)&v32 + 1,
                                         (unsigned int *)&v32 + 2);
        if ( VisibleMaxNameLenAndClassLen >= 0 )
        {
          DWORD1(v31) = CmGetVisibleSubkeyCount(a7, a2, a8);
          LODWORD(v32) = CmGetVisibleValueCount(a7, a2, a8);
          if ( *(_WORD *)(a2 + 74) )
          {
            if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v11, *(unsigned int *)(a2 + 48), &v28);
            else
              CellFlat = HvpGetCellPaged(v11);
            v12 = (const void *)CellFlat;
          }
          VisibleMaxNameLenAndClassLen = CmpPopulateKeyFullInformation(
                                           (__int64)&v30,
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
    *(_QWORD *)&v30 = CmGetKeyLastWriteTime(a7, a2, a8, v13);
    DWORD2(v30) = 0;
    if ( *(_WORD *)(a2 + 74) )
    {
      if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v11, *(unsigned int *)(a2 + 48), &v28);
      else
        CellPaged = HvpGetCellPaged(v11);
      v12 = (const void *)CellPaged;
    }
    VisibleMaxNameLenAndClassLen = CmpPopulateKeyNodeInformation(
                                     (__int64)&v30,
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
      HvpReleaseCellFlat(v11, &v28);
    else
      HvpReleaseCellPaged(v11, &v28);
  }
  return (unsigned int)VisibleMaxNameLenAndClassLen;
}
