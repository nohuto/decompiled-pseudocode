/*
 * XREFs of ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z @ 0x18000CB34
 * Callers:
 *     ?Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z @ 0x18000C9A0 (-Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z.c)
 * Callees:
 *     ?ClearPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAAXXZ @ 0x18000CBF0 (-ClearPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAAXXZ.c)
 *     ?ReleaseCurrentSurface@CBitmapInfoFront@DirectComposition@@AEAAXXZ @ 0x18000CC30 (-ReleaseCurrentSurface@CBitmapInfoFront@DirectComposition@@AEAAXXZ.c)
 *     ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z @ 0x180020070 (-RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z.c)
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxqdd_EventWriteTransfer @ 0x1800EA928 (McTemplateU0xxqdd_EventWriteTransfer.c)
 *     ?RemoveSurfaceUpdate@CSurfaceFactory@DirectComposition@@QEAAXPEAVCBitmapInfoFront@2@@Z @ 0x1800FBC28 (-RemoveSurfaceUpdate@CSurfaceFactory@DirectComposition@@QEAAXPEAVCBitmapInfoFront@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::Resize(
        DirectComposition::CSurfaceFactory **this,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // r15d
  char v7; // al
  struct DirectComposition::CAtlasSurface *v9; // rsi
  int v10; // edx
  DirectComposition::CSurfaceFactory *v11; // r9
  struct DirectComposition::CAtlasSurface *v12; // rcx
  struct DirectComposition::CAtlasSurface *v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  if ( a2 != *((_DWORD *)this + 11) || a3 != *((_DWORD *)this + 12) )
  {
    if ( a2 )
    {
      v3 = DirectComposition::CBitmapInfoFront::RequestSurface(
             (DirectComposition::CBitmapInfoFront *)this,
             a2,
             a3,
             &v13);
      if ( v3 < 0 )
        return (unsigned int)v3;
      v9 = v13;
      *((_QWORD *)v13 + 12) = this;
      v10 = Microsoft_Windows_DirectCompositionEnableBits;
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
      {
        v11 = this[4];
        v12 = 0LL;
        v13 = 0LL;
        if ( v11 )
        {
          (**(void (__fastcall ***)(DirectComposition::CSurfaceFactory *, GUID *, struct DirectComposition::CAtlasSurface **))v11)(
            v11,
            &GUID_bb8a4953_2c99_4f5a_96f5_4819027fa3ac,
            &v13);
          v12 = v13;
          v10 = Microsoft_Windows_DirectCompositionEnableBits;
        }
        if ( (v10 & 8) != 0 )
        {
          McTemplateU0xxqdd_EventWriteTransfer((_DWORD)v12, v10, (_DWORD)v9, (_DWORD)v12, 3);
          v12 = v13;
        }
        if ( v12 )
          (*(void (__fastcall **)(struct DirectComposition::CAtlasSurface *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      DirectComposition::CBitmapInfoFront::ReleaseCurrentSurface((DirectComposition::CBitmapInfoFront *)this);
      this[2] = v9;
    }
    else
    {
      DirectComposition::CBitmapInfoFront::ReleaseCurrentSurface((DirectComposition::CBitmapInfoFront *)this);
    }
  }
  *((_DWORD *)this + 11) = a2;
  *((_DWORD *)this + 12) = a3;
  ReleaseInterface<DirectComposition::CBitmapInfoBack>(this + 15);
  v7 = *((_BYTE *)this + 112);
  if ( (v7 & 2) != 0 )
  {
    DirectComposition::CSurfaceFactory::RemoveSurfaceUpdate(this[3], (struct DirectComposition::CBitmapInfoFront *)this);
    *((_BYTE *)this + 112) &= ~2u;
    v7 = *((_BYTE *)this + 112);
  }
  if ( (v7 & 1) != 0 )
  {
    DirectComposition::CDirtyNotifier::InvalidateListeners(this + 7, 0LL);
    v7 = (_BYTE)this[14] & 0xFE;
  }
  *((_BYTE *)this + 112) = v7 & 0xF7;
  DirectComposition::CBitmapInfoFront::ClearPreviousSurfaceList((DirectComposition::CBitmapInfoFront *)this);
  return (unsigned int)v3;
}
