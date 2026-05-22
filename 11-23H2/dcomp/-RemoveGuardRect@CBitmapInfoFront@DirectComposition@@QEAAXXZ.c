/*
 * XREFs of ?RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ @ 0x1800EBA4C
 * Callers:
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800EB360 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800EB540 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034F84 (-RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBitmapInfoFront::RemoveGuardRect(DirectComposition::CBitmapInfoFront *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *((_QWORD *)this + 15);
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 16);
  }
  else
  {
    v2 = *((_QWORD *)this + 2);
    if ( !v2 )
      return;
  }
  DirectComposition::CAtlasSurfacePool::RemoveGuardRect(*(DirectComposition::CAtlasSurfacePool **)(v2 + 64));
}
