/*
 * XREFs of ??1?$ComPtr@VTabletModePositionerHandoffContext@@@WRL@Microsoft@@QEAA@XZ @ 0x1805C63AC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TabletModePositionerHandoffContext_TabletModePositionerHandoffContext_IAppLayout___&_bool_&__::_1_::dtor$1 @ 0x1805C6336 (_Microsoft--WRL--Details--MakeAndInitialize_TabletModePositionerHandoffContext_Tabl_ea_1805C6336.c)
 *     _TabletModePositionerHandoffContext_CreateInstance_::_1_::dtor$0 @ 0x1805C6674 (_TabletModePositionerHandoffContext_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModePositionerHandoffContext>::~ComPtr<TabletModePositionerHandoffContext>(
        volatile int **a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(a1);
}
