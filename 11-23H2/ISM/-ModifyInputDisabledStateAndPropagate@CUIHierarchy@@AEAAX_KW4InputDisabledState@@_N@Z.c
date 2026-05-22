/*
 * XREFs of ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x18009C3B0
 * Callers:
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x18009C800 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?PropagateInputDisabledStateAcrossSubTree@CUIHierarchy@@AEAAX_K_N@Z @ 0x18009D110 (-PropagateInputDisabledStateAcrossSubTree@CUIHierarchy@@AEAAX_K_N@Z.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x18009D95C (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x180140FB0 (-OnConnected@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnIsInputDisabledChanged@CUIHostInputObjectProxy@@MEAAJXZ @ 0x1801412C0 (-OnIsInputDisabledChanged@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180141D70 (-OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 *     ?OnIsInputDisabledChanged@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180142220 (-OnIsInputDisabledChanged@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x18009BE48 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z @ 0x18009C6D8 (-NotifyWindowOfInputDisabledStateChange@CUIHierarchy@@AEAAX_KW4InputDisabledState@@1@Z.c)
 *     ?PropagateInputDisabledStateAcrossSubTree@CUIHierarchy@@AEAAX_K_N@Z @ 0x18009D110 (-PropagateInputDisabledStateAcrossSubTree@CUIHierarchy@@AEAAX_K_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CUIHierarchy::ModifyInputDisabledStateAndPropagate(
        CUIHierarchy *a1,
        unsigned __int64 a2,
        int a3,
        char a4)
{
  _DWORD *v8; // rbx
  unsigned int v9; // edi
  int *v10; // rcx
  int v11; // r9d
  bool v12; // r8
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF

  CUIHierarchy::FindWindowW((__int64)a1, v14, a2);
  if ( v14[0] )
  {
    v8 = (_DWORD *)(v14[0] + 32);
    v9 = *(_DWORD *)(v14[0] + 32);
    v10 = (int *)(v14[0] + 32);
    if ( a4 )
      v11 = a3 | v9;
    else
      v11 = v9 & ~a3;
    *v10 = v11;
    CUIHierarchy::NotifyWindowOfInputDisabledStateChange(v10, a2, v9);
    v12 = *v8 != 0;
    if ( (v9 != 0) != v12 )
      CUIHierarchy::PropagateInputDisabledStateAcrossSubTree(a1, a2, v12);
  }
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v14);
}
