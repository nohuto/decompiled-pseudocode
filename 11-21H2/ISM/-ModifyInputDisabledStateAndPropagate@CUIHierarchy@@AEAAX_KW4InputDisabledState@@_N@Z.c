/*
 * XREFs of ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800852D4
 * Callers:
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180085710 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?PropagateInputDisabledStateAcrossSubTree@CUIHierarchy@@AEAAX_K_N@Z @ 0x180086050 (-PropagateInputDisabledStateAcrossSubTree@CUIHierarchy@@AEAAX_K_N@Z.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x180086850 (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ?OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180126970 (-OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 *     ?OnIsInputDisabledChanged@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180126DF0 (-OnIsInputDisabledChanged@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 *     ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x180127920 (-OnConnected@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnIsInputDisabledChanged@CUIHostInputObjectProxy@@MEAAJXZ @ 0x180127C20 (-OnIsInputDisabledChanged@CUIHostInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x180084DD0 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z @ 0x1800855E0 (-NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z.c)
 *     ?PropagateInputDisabledStateAcrossSubTree@CUIHierarchy@@AEAAX_K_N@Z @ 0x180086050 (-PropagateInputDisabledStateAcrossSubTree@CUIHierarchy@@AEAAX_K_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CUIHierarchy::ModifyInputDisabledStateAndPropagate(
        CUIHierarchy *a1,
        unsigned __int64 a2,
        int a3,
        char a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // edi
  int v11; // r9d
  bool v12; // r8
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF

  CUIHierarchy::FindWindowW((__int64)a1, v14, a2);
  v9 = v14[0];
  if ( v14[0] )
  {
    v10 = *(_DWORD *)(v14[0] + 32);
    if ( a4 )
      v11 = a3 | v10;
    else
      v11 = v10 & ~a3;
    *(_DWORD *)(v14[0] + 32) = v11;
    CUIHierarchy::NotifyWindowOfInputDisabledStateChange(v8, a2, v10);
    v12 = *(_DWORD *)(v9 + 32) != 0;
    if ( (v10 != 0) != v12 )
      CUIHierarchy::PropagateInputDisabledStateAcrossSubTree(a1, a2, v12);
  }
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v14);
}
