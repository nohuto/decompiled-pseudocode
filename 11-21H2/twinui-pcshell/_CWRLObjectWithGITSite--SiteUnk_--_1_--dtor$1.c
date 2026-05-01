/*
 * XREFs of _CWRLObjectWithGITSite::SiteUnk_::_1_::dtor$1 @ 0x1802242EA
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall CWRLObjectWithGITSite::SiteUnk_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication(*(CImmersiveAppFinderByApplication **)(a2 + 72));
  }
}
