/*
 * XREFs of ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804A83D0
 * Callers:
 *     ?OnTabSelectionChanged@SwitchItemCollection@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1804A7C14 (-OnTabSelectionChanged@SwitchItemCollection@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Wi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802327C2 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1804A85E4 (-_FindExistingItem@SwitchItemCollection@@AEAA-AV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUI.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804B6B40 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemCollection::UpdateTabSelection(
        SwitchItemCollection *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 62) )
  {
    SwitchItemCollection::_FindExistingItem(this, &v11, a2);
    if ( a3 )
    {
      if ( !v11 )
      {
        v6 = SwitchItemCollection::_AddViewItem(this, a2);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 331LL;
LABEL_9:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v8,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
            (const char *)(unsigned int)v6);
          goto LABEL_10;
        }
        goto LABEL_10;
      }
    }
    else if ( v11 )
    {
      v6 = ObservableObjectArray::_RemoveItem((char *)this + 8, &v11, 1LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 336LL;
        goto LABEL_9;
      }
LABEL_10:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
      return v7;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  }
  return 0LL;
}
