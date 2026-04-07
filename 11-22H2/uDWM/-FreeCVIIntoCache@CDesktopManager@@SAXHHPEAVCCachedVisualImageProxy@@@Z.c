/*
 * XREFs of ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x1800468D4
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x1800069FC (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x1800467D0 (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x180046920 (-_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z.c)
 */

void __fastcall CDesktopManager::FreeCVIIntoCache(int a1, int a2, struct CCachedVisualImageProxy *a3)
{
  __int64 v3; // rdi
  _QWORD *i; // rax

  if ( a3 )
  {
    v3 = 0LL;
    for ( i = (_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 712); *i; ++i )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= 2 )
        return;
    }
    if ( CDesktopManager::_IsSameAsTargetCachedCVI(a1, a2) )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)a3 + 2) == 2 )
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + v3 + 89) = a3;
      else
        CBaseObject::Release(a3);
    }
  }
}
