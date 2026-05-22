/*
 * XREFs of ??1CSurfaceManager@DirectComposition@@EEAA@XZ @ 0x18001B464
 * Callers:
 *     ??_GCSurfaceManager@DirectComposition@@EEAAPEAXI@Z @ 0x18001B250 (--_GCSurfaceManager@DirectComposition@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCDynamicPoolSet@DirectComposition@@@@YAXAEAPEAVCDynamicPoolSet@DirectComposition@@@Z @ 0x18001BC1C (--$ReleaseInterface@VCDynamicPoolSet@DirectComposition@@@@YAXAEAPEAVCDynamicPoolSet@DirectCompos.c)
 *     ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z @ 0x18001E48C (-DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z.c)
 */

void __fastcall DirectComposition::CSurfaceManager::~CSurfaceManager(DirectComposition::CSurfaceManager *this)
{
  DirectComposition::CSurfaceManager *v2; // rax
  struct DirectComposition::CAtlasSurface *v3; // rdx

  *(_QWORD *)this = &DirectComposition::CSurfaceManager::`vftable';
  ReleaseInterface<DirectComposition::CDynamicPoolSet>((char *)this + 16);
  while ( *((_DWORD *)this + 6) )
  {
    v2 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 4);
    v3 = (DirectComposition::CSurfaceManager *)((char *)v2 - 32);
    if ( v2 == (DirectComposition::CSurfaceManager *)((char *)this + 32) )
      v3 = 0LL;
    DirectComposition::CSurfaceManager::DiscardLargeSurface(this, v3);
  }
  operator delete(*((void **)this + 24));
}
