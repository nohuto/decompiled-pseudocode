/*
 * XREFs of ??$TryAppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800FD848
 * Callers:
 *     ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600 (-TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800816D8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1801B22A0 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall CRegion::TryAppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>>(
        int **a1,
        __int64 *a2)
{
  int *v2; // r8
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // esi
  int v9; // r11d
  int *v10; // r8
  int v11; // eax
  _DWORD *v12; // r8
  FastRegion::Internal::CRgnData *v13; // rcx
  unsigned int v14; // r10d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rax
  FastRegion::Internal::CRgnData *v18; // rcx
  int *v20; // [rsp+20h] [rbp-40h] BYREF
  __int128 v21; // [rsp+28h] [rbp-38h]
  FastRegion::Internal::CRgnData *v22; // [rsp+38h] [rbp-28h]
  int v23; // [rsp+40h] [rbp-20h]
  int v24; // [rsp+44h] [rbp-1Ch]
  __int128 v25; // [rsp+50h] [rbp-10h]

  v2 = *a1;
  v5 = **a1;
  if ( v5 )
  {
    v7 = (__int64)&v2[2 * v5 + 1];
    v6 = (v7 + *(int *)(v7 + 4) - (__int64)v2[4] - (__int64)(v2 + 3)) >> 3;
  }
  else
  {
    v6 = 0LL;
  }
  v8 = *((_DWORD *)a2 + 6);
  v9 = DynArrayImpl<0>::AddMultiple(a2, 16LL, v6);
  if ( v9 >= 0 )
  {
    v10 = *a1;
    v20 = v10;
    v11 = *v10;
    if ( *v10 )
    {
      v23 = 0;
      v12 = v10 + 3;
      *((_QWORD *)&v21 + 1) = v12;
      v13 = (FastRegion::Internal::CRgnData *)((char *)v12 + (int)v12[1]);
      *(_QWORD *)&v21 = &v12[2 * v11 - 2];
      v22 = v13;
      v24 = ((__int64)v12 + (int)v12[3] - (_QWORD)v13 + 8) >> 3;
      if ( v24 > 0 )
        goto LABEL_10;
      FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)&v20);
    }
    else
    {
      v21 = 0LL;
    }
    while ( 1 )
    {
      v12 = (_DWORD *)*((_QWORD *)&v21 + 1);
LABEL_10:
      if ( (unsigned __int64)v12 >= (unsigned __int64)v21 )
        break;
      v14 = v12[2];
      DWORD1(v25) = *v12;
      v15 = 2 * v23;
      v16 = *((_DWORD *)v22 + v15 + 1);
      v17 = *a2;
      LODWORD(v25) = *((_DWORD *)v22 + v15);
      *((_QWORD *)&v25 + 1) = __PAIR64__(v14, v16);
      v18 = (FastRegion::Internal::CRgnData *)(2LL * v8);
      *(_OWORD *)(v17 + 8LL * (_QWORD)v18) = v25;
      FastRegion::Internal::CRgnData::StepIterator(v18, (struct FastRegion::CRegion::Iterator *)&v20);
      ++v8;
    }
  }
  return (unsigned int)v9;
}
