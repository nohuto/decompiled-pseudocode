/*
 * XREFs of ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z @ 0x180093600
 * Callers:
 *     ?Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z @ 0x18003A220 (-Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z.c)
 *     ?Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z @ 0x1800FE680 (-Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z.c)
 * Callees:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800059D0 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z @ 0x1800380E4 (-RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z.c)
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A2AC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007A518 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180081C68 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180087D18 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUMilRectU@@@Z @ 0x18009376C (-TryAddRectangle@CRegion@@QEAAJAEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??$TryAppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800FD848 (--$TryAppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x1800FD97C (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquen.c)
 *     ?RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800FE280 (-RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::TrimTileClumps(
        DirectComposition::CVirtualSurface *this,
        const struct tagRECT *a2,
        unsigned int a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // r13d
  int v6; // ebx
  unsigned int v7; // esi
  unsigned int bottom; // edx
  unsigned int right; // eax
  struct FastRegion::Internal::CRgnData *v12; // r14
  DirectComposition::CVirtualSurface *v14; // rax
  DirectComposition::CTileClump *v15; // rsi
  const struct FastRegion::Internal::CRgnData *v16; // rcx
  int v17; // eax
  DirectComposition::CVirtualSurface *v18; // rcx
  int v19; // eax
  unsigned int i; // esi
  unsigned int v21; // xmm3_4
  unsigned int v22; // xmm2_4
  float v23; // xmm0_4
  __int64 v24; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h]
  struct FastRegion::Internal::CRgnData *v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  int *v28; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+98h] [rbp-68h] BYREF
  void *v30[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v31; // [rsp+F8h] [rbp-8h]

  v3 = *((_DWORD *)this + 28);
  v4 = *((_DWORD *)this + 29);
  v28 = &v29;
  v6 = 0;
  v29 = 0;
  v7 = 0;
  while ( v7 < a3 )
  {
    bottom = a2[v7].bottom;
    v24 = *(_QWORD *)&a2[v7].left;
    right = a2[v7].right;
    if ( v3 < right )
      right = v3;
    LODWORD(v25) = right;
    if ( v4 < bottom )
      bottom = v4;
    HIDWORD(v25) = bottom;
    if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v24) )
    {
      v25 = 0LL;
      v24 = 0LL;
    }
    else
    {
      v6 = CRegion::TryAddRectangle((CRegion *)&v28, (const struct MilRectU *)&v24);
    }
    ++v7;
    if ( v6 < 0 )
      goto LABEL_18;
  }
  v26 = (struct FastRegion::Internal::CRgnData *)&v27;
  v27 = 0;
  v6 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v26, (const struct FastRegion::Internal::CRgnData **)this + 17);
  if ( v6 >= 0 )
    v6 = FastRegion::CRegion::Subtract(&v26, (const struct FastRegion::Internal::CRgnData **)&v28);
  if ( v6 < 0 )
    goto LABEL_19;
  v12 = v26;
  if ( *(_DWORD *)v26 )
  {
    v14 = (DirectComposition::CVirtualSurface *)*((_QWORD *)this + 32);
    v15 = (DirectComposition::CVirtualSurface *)((char *)v14 - 16);
    if ( v14 == (DirectComposition::CVirtualSurface *)((char *)this + 256) )
      v15 = 0LL;
    while ( v15 )
    {
      v16 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)v15 + 12);
      if ( *(_DWORD *)v16 && *(_DWORD *)v12 && FastRegion::Internal::CRgnData::Intersects(v16, v12) )
      {
        v17 = DirectComposition::CTileClump::RemoveFromValidRegion(
                v15,
                &v26,
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 416LL));
        v12 = v26;
        v6 = v17;
      }
      v18 = (DirectComposition::CVirtualSurface *)*((_QWORD *)v15 + 2);
      v15 = (DirectComposition::CVirtualSurface *)((char *)v18 - 16);
      if ( v18 == (DirectComposition::CVirtualSurface *)((char *)this + 256) )
        v15 = 0LL;
      if ( v6 < 0 )
        goto LABEL_19;
    }
    v19 = FastRegion::CRegion::Intersect(
            (const struct FastRegion::Internal::CRgnData **)this + 17,
            (const struct FastRegion::Internal::CRgnData **)&v28);
    *((_BYTE *)this + 132) &= ~2u;
    v6 = v19;
    if ( v19 < 0 )
      goto LABEL_19;
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>(v30);
    v31 = 0;
    v6 = CRegion::TryAppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>>(
           &v26,
           v30);
    if ( v6 >= 0 )
    {
      for ( i = 0; i < v31; ++i )
      {
        *(float *)&v21 = (float)*((int *)v30[0] + 4 * i + 3);
        *(float *)&v22 = (float)*((int *)v30[0] + 4 * i + 2);
        v23 = (float)*((int *)v30[0] + 4 * i);
        *((float *)&v24 + 1) = (float)*((int *)v30[0] + 4 * i + 1);
        *(float *)&v24 = v23;
        v25 = __PAIR64__(v21, v22);
        DirectComposition::CDirtyNotifier::InvalidateListeners((__int64)this + 16, (__int64)&v24);
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v30);
    if ( v6 < 0 )
LABEL_19:
      DirectComposition::CVirtualSurface::RecoverValidRegions(this);
  }
  FastRegion::CRegion::FreeMemory((void **)&v26);
LABEL_18:
  FastRegion::CRegion::FreeMemory((void **)&v28);
  return (unsigned int)v6;
}
