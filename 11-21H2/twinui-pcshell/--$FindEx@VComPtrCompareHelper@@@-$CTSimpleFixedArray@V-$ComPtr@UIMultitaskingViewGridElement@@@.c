/*
 * XREFs of ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804A9D9C
 * Callers:
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x180232C8C (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 *     ?ItemRemoved@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804AA9F0 (-ItemRemoved@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804B6B40 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 *     ?FindItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K1@Z @ 0x1804D0CA0 (-FindItem@GridLayout@@QEAAJAEBV-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K1@Z.c)
 *     ?RemoveItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Z @ 0x1804D1420 (-RemoveItem@GridLayout@@QEAAJAEBV-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
        _QWORD *a1,
        __int64 a2,
        struct IUnknown **a3,
        _QWORD *a4)
{
  __int64 v4; // rbx

  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( !(unsigned int)SHIsSameObject(*(struct IUnknown **)(*a1 + 8 * v4), *a3) )
  {
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
