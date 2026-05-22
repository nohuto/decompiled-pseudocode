/*
 * XREFs of ?PropagateInputDisabledStateAcrossSubTree@CUIHierarchy@@AEAAX_K_N@Z @ 0x18009D110
 * Callers:
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x18009C3B0 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x18009BE48 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x18009C3B0 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CUIHierarchy::PropagateInputDisabledStateAcrossSubTree(CUIHierarchy *this, __int64 a2, char a3)
{
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  CUIHierarchy::FindWindowW((__int64)this, &v7, a2);
  if ( v7 )
  {
    v5 = *(_QWORD *)(v7 + 72);
    for ( i = *(_QWORD *)(v7 + 64); i != v5; i += 8LL )
    {
      if ( !*(_BYTE *)(*(_QWORD *)i + 48LL) )
        CUIHierarchy::ModifyInputDisabledStateAndPropagate(this, *(_QWORD *)(*(_QWORD *)i + 16LL), 4, a3);
    }
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v7);
}
