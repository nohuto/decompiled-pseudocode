/*
 * XREFs of ?RestoreGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x1800FA9B0
 * Callers:
 *     ?DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z @ 0x1800F1830 (-DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAU.c)
 * Callees:
 *     ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180023DD4 (-RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CPrimitiveGroup::RestoreGuardRects(DirectComposition::CPrimitiveGroup *this)
{
  __int64 v1; // rbx
  unsigned int i; // esi

  v1 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 28); ++i )
    DirectComposition::CAtlasSurfacePool::RestoreGuardRect(*(DirectComposition::CAtlasSurfacePool **)(*((_QWORD *)this + 11) + 16LL * i));
  if ( *((_DWORD *)this + 36) )
  {
    do
    {
      DirectComposition::CAtlasSurfacePool::RestoreGuardRect(*(DirectComposition::CAtlasSurfacePool **)(*((_QWORD *)this + 15) + 8 * v1));
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 36) );
  }
}
