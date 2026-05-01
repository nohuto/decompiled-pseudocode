/*
 * XREFs of ?ItemRemoved@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1805675B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180566AB8 (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 *     ?_UnregisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x180568B68 (-_UnregisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180571390 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SwitchItemFilteredCollection::ItemRemoved(
        SwitchItemFilteredCollection *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  char *v5; // rbp
  __int64 v6; // rdx
  bool v7; // bl
  unsigned int v8; // ebx
  struct IUnknown *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v5 = (char *)this - 144;
  if ( *((_BYTE *)this + 128) )
    SwitchItemFilteredCollection::_UnregisterItemForTitleChanges(
      (SwitchItemFilteredCollection *)((char *)this - 144),
      a3);
  v9 = (struct IUnknown *)a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v7 = (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                       (_QWORD *)this - 16,
                       v6,
                       &v9,
                       &v10) == 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  if ( v7 )
  {
    v8 = 3;
    if ( *((int *)this + 33) <= 0 )
      v8 = 1;
    v9 = (struct IUnknown *)a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    ObservableObjectArray::_RemoveItem(v5, &v9, v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  }
}
