/*
 * XREFs of ?FindTopLevelWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AE354
 * Callers:
 *     ?AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z @ 0x1800AE2BC (-AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z.c)
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800AED50 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800ADF54 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AE398 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
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
