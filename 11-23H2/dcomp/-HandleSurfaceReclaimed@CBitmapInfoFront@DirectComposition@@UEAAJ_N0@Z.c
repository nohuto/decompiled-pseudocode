/*
 * XREFs of ?HandleSurfaceReclaimed@CBitmapInfoFront@DirectComposition@@UEAAJ_N0@Z @ 0x180007B80
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectComposition@@@Z @ 0x18001E928 (--$ReleaseInterface@VCAtlasSurface@DirectComposition@@@@YAXAEAPEAVCAtlasSurface@DirectCompositio.c)
 *     ?UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ @ 0x18002AE30 (-UnUse@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ.c)
 *     ?InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038F28 (-InvalidateListeners@CDirtyNotifier@DirectComposition@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoFront::HandleSurfaceReclaimed(
        DirectComposition::CBitmapInfoFront *this,
        char a2,
        char a3)
{
  int v3; // esi
  __int64 v5; // rcx
  char v6; // cl
  __int64 v8; // rcx
  __int64 v9; // rcx

  v3 = 0;
  if ( a3 )
  {
    *((_BYTE *)this + 112) &= ~8u;
    if ( a2 )
    {
      v9 = *((_QWORD *)this + 2);
      if ( v9 )
      {
        DirectComposition::CCompositorSynchronizedObject::UnUse((DirectComposition::CCompositorSynchronizedObject *)(v9 + 16));
        ReleaseInterface<DirectComposition::CAtlasSurface>((char *)this + 16);
      }
    }
    v8 = *((_QWORD *)this + 4);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  }
  else
  {
    v5 = *((_QWORD *)this + 4);
    if ( !v5 || (v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5), v3 >= 0) )
    {
      v6 = *((_BYTE *)this + 112);
      if ( (v6 & 8) != 0 )
      {
        *((_BYTE *)this + 112) = v6 | 9;
        DirectComposition::CDirtyNotifier::InvalidateListeners((char *)this + 56, 0LL);
      }
    }
  }
  return (unsigned int)v3;
}
