/*
 * XREFs of _TabletModeCoverWindow::SetSite_::_1_::dtor$2 @ 0x18021B8B5
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall TabletModeCoverWindow::SetSite_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~4u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 64));
  }
}
