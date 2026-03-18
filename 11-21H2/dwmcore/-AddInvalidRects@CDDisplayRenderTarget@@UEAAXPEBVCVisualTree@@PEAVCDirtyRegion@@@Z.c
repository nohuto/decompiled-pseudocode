/*
 * XREFs of ?AddInvalidRects@CDDisplayRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1801C84C0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800DE8F0 (-AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800DE978 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CDDisplayRenderTarget::AddInvalidRects(
        FastRegion::Internal::CRgnData **this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  FastRegion::Internal::CRgnData *v5; // rcx
  __int64 v6; // rdx
  FastRegion::Internal::CRgnData *v7; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-50h]
  _DWORD *v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  int v12; // [rsp+40h] [rbp-38h]
  _DWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF

  if ( this[13] )
  {
    if ( *((_BYTE *)this + 69) )
    {
      CRenderTarget::AddInvalidRects((CRenderTarget *)this, a2, a3);
    }
    else
    {
      v5 = this[2304];
      if ( *(_DWORD *)v5 )
      {
        FastRegion::Internal::CRgnData::BeginIterator(v5, (struct FastRegion::CRegion::Iterator *)v8);
        while ( (unsigned __int64)v10 < v9 )
        {
          v13[1] = *v10;
          v13[3] = v10[2];
          v6 = 2 * v12;
          v13[0] = *(_DWORD *)(v11 + 4 * v6);
          v13[2] = *(_DWORD *)(v11 + 4 * v6 + 4);
          CDirtyRegion::Add((__int64)a3, (__int64)v13);
          FastRegion::Internal::CRgnData::StepIterator(v7, (struct FastRegion::CRegion::Iterator *)v8);
        }
      }
    }
    *(_DWORD *)this[2304] = 0;
  }
}
