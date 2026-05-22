/*
 * XREFs of ?FindTopLevelWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x18009BE04
 * Callers:
 *     ?AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z @ 0x18009BD6C (-AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z.c)
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x18009C800 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BA10 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x18009BE48 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 */

__int64 *__fastcall CUIHierarchy::FindTopLevelWindow(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rdx

  CUIHierarchy::FindWindowW();
  if ( *a2 )
  {
    while ( 1 )
    {
      v3 = (__int64 *)(*a2 + 56);
      if ( !*v3 || *(_BYTE *)(*a2 + 48) )
        break;
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(a2, v3);
    }
  }
  return a2;
}
