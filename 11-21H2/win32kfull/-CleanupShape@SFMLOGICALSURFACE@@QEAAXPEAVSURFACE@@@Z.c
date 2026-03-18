/*
 * XREFs of ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C010DA34
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0082838 (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0097BB8 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C002669C (GreDereferenceObject.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, HSURF *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 61);
  if ( (v2 & 0x20) != 0 )
  {
    if ( a2 )
    {
      GreDereferenceObject(a2[4], 1u);
      v2 = *((_DWORD *)this + 61);
    }
    *((_DWORD *)this + 61) = v2 & 0xFFFFFFDF;
  }
}
