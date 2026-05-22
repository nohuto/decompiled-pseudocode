/*
 * XREFs of ?ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z @ 0x180038DEC
 * Callers:
 *     ?EndDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x1800388BC (-EndDraw@CTileClump@DirectComposition@@QEAAXXZ.c)
 *     ?EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ @ 0x1800EB958 (-EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001E928 (--$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectCompositio.c)
 *     ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z @ 0x18002E744 (-UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z.c)
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 *     ?InvalidatePreviousSurfaces@CBitmapInfoFront@DirectComposition@@AEAAXAEBUtagRECT@@@Z @ 0x180038EDC (-InvalidatePreviousSurfaces@CBitmapInfoFront@DirectComposition@@AEAAXAEBUtagRECT@@@Z.c)
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall DirectComposition::CBitmapInfoFront::ApplyUpdate(
        DirectComposition::CBitmapInfoFront *this,
        struct DirectComposition::CBitmapInfoBack *a2)
{
  __int64 v3; // rbp
  bool v5; // bl
  __int64 v6; // rdi
  struct DirectComposition::CAtlasSurface **v7; // r15
  char v8; // al
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  struct DirectComposition::CAtlasSurface *v11; // rdi
  struct DirectComposition::CAtlasSurface *v12; // rbx
  __int64 v13; // rcx
  struct tagRECT v14; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v15[4]; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0LL;
  v14 = *(struct tagRECT *)((char *)a2 + 72);
  v5 = 0;
  DirectComposition::CBitmapInfoFront::InvalidatePreviousSurfaces(this, &v14);
  v6 = *((_QWORD *)this + 15);
  v7 = (struct DirectComposition::CAtlasSurface **)((char *)this + 16);
  if ( v6 )
  {
    v11 = *(struct DirectComposition::CAtlasSurface **)(v6 + 16);
    v12 = *v7;
    DirectComposition::CBitmapInfoFront::UnuseSurface(this, v11, &v14);
    ReleaseInterface<DirectComposition::CBitmapInfoBack>((__int64 *)this + 15);
    v5 = v11 == v12;
  }
  *((_QWORD *)this + 15) = a2;
  CMILRefCountImpl::AddReference((struct DirectComposition::CBitmapInfoBack *)((char *)a2 + 8));
  if ( v5 )
  {
    ReleaseInterface<DirectComposition::CAtlasSurface>((__int64 *)this + 2);
    v13 = *((_QWORD *)a2 + 2);
    *v7 = (struct DirectComposition::CAtlasSurface *)v13;
    if ( v13 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 8));
    *((_BYTE *)this + 112) |= 9u;
  }
  v8 = *((_BYTE *)this + 112);
  if ( (v8 & 2) == 0 )
  {
    v9 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 13) = *(_QWORD *)(v9 + 320);
    *(_QWORD *)(v9 + 320) = this;
    *((_BYTE *)this + 112) |= 2u;
    v8 = *((_BYTE *)this + 112);
  }
  if ( (v8 & 4) != 0 )
  {
    v10 = 0LL;
  }
  else
  {
    do
    {
      *(float *)&v15[v3] = (float)*(int *)((char *)&v14.left + v3 * 4);
      ++v3;
    }
    while ( v3 < 4 );
    v10 = v15;
  }
  DirectComposition::CDirtyNotifier::InvalidateListeners((char *)this + 56, v10);
}
