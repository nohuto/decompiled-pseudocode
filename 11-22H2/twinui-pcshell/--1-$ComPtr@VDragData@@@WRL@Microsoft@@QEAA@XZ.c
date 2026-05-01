/*
 * XREFs of ??1?$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ @ 0x1805DB28C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_DragData_DragData_IUnknown___&_IAppLayout___&_IApplicationView___&_enum_WindowArrangementViewDragData::DragDataFlags_&__::_1_::dtor$2 @ 0x1805DB186 (_Microsoft--WRL--Details--MakeAndInitialize_DragData_DragData_IUnknown___-_IAppLayo_ea_1805DB186.c)
 *     _DragData_CreateInstance_::_1_::dtor$0 @ 0x1805DB577 (_DragData_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AppResizeData_AppResizeData_IAppLayout___&__::_1_::dtor$2 @ 0x1805DE16F (_Microsoft--WRL--Details--MakeAndInitialize_AppResizeData_AppResizeData_IAppLayout__ea_1805DE16F.c)
 *     _AppResizeData_CreateInstance_::_1_::dtor$0 @ 0x1805DE45C (_AppResizeData_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<DragData>::~ComPtr<DragData>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(a1);
}
