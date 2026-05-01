/*
 * XREFs of ??1?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x180567198
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SwitchItemFilteredCollection_SwitchItemFilteredCollection_IObservableObjectArray___&__::_1_::dtor$2 @ 0x180566E54 (_Microsoft--WRL--Details--MakeAndInitialize_SwitchItemFilteredCollection_SwitchItem_ea_180566E54.c)
 *     _ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run_::_1_::dtor$0 @ 0x180567CEB (_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___--Run_--_1_--dtor$0.c)
 *     _SwitchItemFilteredCollection_CreateInstance_::_1_::dtor$0 @ 0x180568305 (_SwitchItemFilteredCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::~ComPtr<SwitchItemFilteredCollection>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease(a1);
}
