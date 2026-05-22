/*
 * XREFs of ??$ReleaseInterface@VCSurfaceFactory@DirectComposition@@@@YAXAEAPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x1800EAAAC
 * Callers:
 *     ?SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9374 (-SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 *     ?SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9600 (-SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z.c)
 *     ??1CYCbCrSurface@DirectComposition@@MEAA@XZ @ 0x1800FEB7C (--1CYCbCrSurface@DirectComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x18003AB80 (-Release@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CSurfaceFactory>(DirectComposition::CSurfaceFactory **a1)
{
  DirectComposition::CSurfaceFactory *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = DirectComposition::CSurfaceFactory::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
