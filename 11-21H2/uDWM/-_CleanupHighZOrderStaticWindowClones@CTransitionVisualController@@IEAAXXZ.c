/*
 * XREFs of ?_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ @ 0x1800EE5B8
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18003FB48 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800AD98C (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800EE4F0 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 */

void __fastcall CTransitionVisualController::_CleanupHighZOrderStaticWindowClones(CTransitionVisualController *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  v2 = (unsigned int)(*((_DWORD *)this + 12) - 1);
  if ( (int)v2 >= 0 )
  {
    v3 = 24LL * (int)v2;
    do
    {
      v4 = *((_QWORD *)this + 3);
      if ( *(_BYTE *)(v3 + v4 + 16) )
      {
        CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v4 + 24 * v2));
        DynArray<CStationaryAnimation,0>::RemoveAt((__int64 *)this + 3, v2);
      }
      v3 -= 24LL;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( (int)v2 >= 0 );
  }
}
