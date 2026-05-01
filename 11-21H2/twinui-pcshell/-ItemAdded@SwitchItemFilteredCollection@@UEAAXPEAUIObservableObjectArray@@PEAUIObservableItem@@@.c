/*
 * XREFs of ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804AA840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180233DCE (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x1804ABDB0 (-_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z.c)
 *     ?_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x1804AC048 (-_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SwitchItemFilteredCollection::ItemAdded(
        SwitchItemFilteredCollection *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  SwitchItemFilteredCollection *v5; // rsi
  int v6; // ebx
  unsigned int v7; // r8d
  struct IObservableItem *v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = (SwitchItemFilteredCollection *)((char *)this - 144);
  if ( *((_BYTE *)this + 128) )
    SwitchItemFilteredCollection::_RegisterItemForTitleChanges((SwitchItemFilteredCollection *)((char *)this - 144), a3);
  if ( SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(v5, a3) )
  {
    v6 = *((_DWORD *)this + 33);
    v8 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v7 = 2;
    if ( v6 <= 0 )
      v7 = 0;
    ObservableObjectArray::_AddItem(v5, (__int64 *)&v8, v7);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
}
