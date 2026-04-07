/*
 * XREFs of ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180013D94
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18004ECFC (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x18005F338 (-_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z.c)
 */

__int64 __fastcall CDesktopManager::GetCVIFromCache(int a1, int a2, struct CCachedVisualImageProxy **a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  unsigned int v6; // edi
  CDesktopManager *v8; // rcx

  v3 = 0LL;
  v4 = (_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 696);
  v6 = -2147467259;
  while ( !*v4 )
  {
    v3 = (unsigned int)(v3 + 1);
    ++v4;
    if ( (unsigned int)v3 >= 2 )
      return v6;
  }
  if ( CDesktopManager::_IsSameAsTargetCachedCVI(a1, a2) )
  {
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + v3 + 87);
    *((_QWORD *)v8 + v3 + 87) = 0LL;
    return 0;
  }
  return v6;
}
