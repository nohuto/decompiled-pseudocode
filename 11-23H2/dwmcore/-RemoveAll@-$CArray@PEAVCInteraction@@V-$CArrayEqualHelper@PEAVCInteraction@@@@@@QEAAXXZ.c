/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAXXZ @ 0x18010EC78
 * Callers:
 *     _dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__ @ 0x180124100 (_dynamic_atexit_destructor_for__CInteraction--s_DefaultStateLockedInteractions__.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x18020C664 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 */

void __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
