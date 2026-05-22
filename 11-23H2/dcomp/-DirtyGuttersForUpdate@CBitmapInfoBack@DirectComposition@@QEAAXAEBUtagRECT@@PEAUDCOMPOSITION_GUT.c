/*
 * XREFs of ?DirtyGuttersForUpdate@CBitmapInfoBack@DirectComposition@@QEAAXAEBUtagRECT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FDC0
 * Callers:
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 *     ?CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAUIDCompositionSurface@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037708 (-CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBitmapInfoBack::DirtyGuttersForUpdate(
        DirectComposition::CBitmapInfoBack *this,
        const struct tagRECT *a2,
        struct DCOMPOSITION_GUTTERS *a3)
{
  __int64 v3; // rax
  int v6; // r9d
  __int64 v7; // rax
  LONG bottom; // ecx
  LONG top; // edx
  LONG left; // edx
  LONG right; // ecx
  LONG v12; // edx
  LONG v13; // ecx
  int v14; // r9d
  LONG v15; // ecx
  LONG v16; // edx
  LONG v17; // eax
  LONG v18; // ecx
  LONG v19; // edx
  LONG v20; // ecx
  LONG v21; // ecx
  LONG v22; // edx
  LONG v23; // ecx
  LONG v24; // ecx
  LONG v25; // edx
  LONG v26; // ecx
  LONG v27; // eax
  LONG v28; // ecx
  LONG v29; // eax
  LONG v30; // edx

  v3 = *((_QWORD *)this + 2);
  v6 = *(_DWORD *)(v3 + 88);
  v7 = *(_QWORD *)(v3 + 80);
  if ( a3 )
  {
    if ( (v6 & 1) == 0 || a2->left )
    {
      *(_DWORD *)a3 &= ~1u;
    }
    else
    {
      *(_DWORD *)a3 &= ~1u;
      *(_DWORD *)a3 |= v6 & 1;
      bottom = a2->bottom;
      top = a2->top;
      if ( top > *((_DWORD *)this + 26) )
      {
        if ( top < *((_DWORD *)this + 27) && bottom >= *((_DWORD *)this + 27) )
          *((_DWORD *)this + 27) = top;
      }
      else if ( bottom > *((_DWORD *)this + 26) )
      {
        if ( bottom >= *((_DWORD *)this + 27) )
        {
          *((_DWORD *)this + 26) = 0x7FFFFFFF;
          *((_DWORD *)this + 27) = 0x80000000;
        }
        else
        {
          *((_DWORD *)this + 26) = bottom;
        }
      }
    }
    if ( (v6 & 4) == 0 || a2->top )
    {
      *(_DWORD *)a3 &= ~4u;
    }
    else
    {
      *(_DWORD *)a3 &= ~4u;
      *(_DWORD *)a3 |= v6 & 4;
      left = a2->left;
      right = a2->right;
      if ( a2->left > *((_DWORD *)this + 28) )
      {
        if ( left < *((_DWORD *)this + 29) && right >= *((_DWORD *)this + 29) )
          *((_DWORD *)this + 29) = left;
      }
      else if ( right > *((_DWORD *)this + 28) )
      {
        if ( right >= *((_DWORD *)this + 29) )
        {
          *((_DWORD *)this + 28) = 0x7FFFFFFF;
          *((_DWORD *)this + 29) = 0x80000000;
        }
        else
        {
          *((_DWORD *)this + 28) = right;
        }
      }
    }
    if ( (v6 & 2) != 0 && a2->right == (_DWORD)v7 )
    {
      *(_DWORD *)a3 &= ~2u;
      *(_DWORD *)a3 |= v6 & 2;
      v12 = a2->top;
      v13 = a2->bottom;
      if ( v12 > *((_DWORD *)this + 30) )
      {
        if ( v12 < *((_DWORD *)this + 31) && v13 >= *((_DWORD *)this + 31) )
          *((_DWORD *)this + 31) = v12;
      }
      else if ( v13 > *((_DWORD *)this + 30) )
      {
        if ( v13 >= *((_DWORD *)this + 31) )
        {
          *((_DWORD *)this + 30) = 0x7FFFFFFF;
          *((_DWORD *)this + 31) = 0x80000000;
        }
        else
        {
          *((_DWORD *)this + 30) = v13;
        }
      }
    }
    else
    {
      *(_DWORD *)a3 &= ~2u;
    }
    v14 = v6 & 8;
    if ( v14 && a2->bottom == HIDWORD(v7) )
    {
      *(_DWORD *)a3 &= ~8u;
      *(_DWORD *)a3 |= v14;
      v15 = a2->left;
      v16 = *((_DWORD *)this + 32);
      v17 = a2->right;
      if ( a2->left > v16 )
      {
        v30 = *((_DWORD *)this + 33);
        if ( v15 < v30 && v17 >= v30 )
          *((_DWORD *)this + 33) = v15;
      }
      else if ( v17 > v16 )
      {
        if ( v17 >= *((_DWORD *)this + 33) )
        {
          *((_DWORD *)this + 32) = 0x7FFFFFFF;
          *((_DWORD *)this + 33) = 0x80000000;
        }
        else
        {
          *((_DWORD *)this + 32) = v17;
        }
      }
    }
    else
    {
      *(_DWORD *)a3 &= ~8u;
    }
  }
  else
  {
    if ( (v6 & 1) != 0 && !a2->left )
    {
      v18 = *((_DWORD *)this + 26);
      v19 = a2->bottom;
      if ( v18 >= a2->top )
        v18 = a2->top;
      *((_DWORD *)this + 26) = v18;
      v20 = *((_DWORD *)this + 27);
      if ( v20 <= v19 )
        v20 = v19;
      *((_DWORD *)this + 27) = v20;
    }
    if ( (v6 & 4) != 0 && !a2->top )
    {
      v21 = *((_DWORD *)this + 28);
      v22 = a2->right;
      if ( v21 >= a2->left )
        v21 = a2->left;
      *((_DWORD *)this + 28) = v21;
      v23 = *((_DWORD *)this + 29);
      if ( v23 <= v22 )
        v23 = v22;
      *((_DWORD *)this + 29) = v23;
    }
    if ( (v6 & 2) != 0 && a2->right == (_DWORD)v7 )
    {
      v24 = *((_DWORD *)this + 30);
      v25 = a2->bottom;
      if ( v24 >= a2->top )
        v24 = a2->top;
      *((_DWORD *)this + 30) = v24;
      v26 = *((_DWORD *)this + 31);
      if ( v26 <= v25 )
        v26 = v25;
      *((_DWORD *)this + 31) = v26;
    }
    if ( (v6 & 8) != 0 && a2->bottom == HIDWORD(v7) )
    {
      v27 = *((_DWORD *)this + 32);
      v28 = a2->right;
      if ( v27 >= a2->left )
        v27 = a2->left;
      *((_DWORD *)this + 32) = v27;
      v29 = *((_DWORD *)this + 33);
      if ( v29 <= v28 )
        v29 = v28;
      *((_DWORD *)this + 33) = v29;
    }
  }
}
