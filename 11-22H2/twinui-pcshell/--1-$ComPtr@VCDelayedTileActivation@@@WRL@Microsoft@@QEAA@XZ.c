/*
 * XREFs of ??1?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAA@XZ @ 0x18059F4FC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_IImmersiveApplication___&_IUnknown___&_enum_ACTIVATEOPTIONSINTERNAL_&__::_1_::dtor$2 @ 0x18059EFA9 (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_18059EFA9.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDelayedTileActivation_CDelayedTileActivation_unsigned_short_const___&_unsigned_short_const___&_unsigned_short_const___&_IUnknown___&_enum_ACTIVATEOPTIONSINTERNAL_&__::_1_::dtor$2 @ 0x18059F0B3 (_Microsoft--WRL--Details--MakeAndInitialize_CDelayedTileActivation_CDelayedTileActi_ea_18059F0B3.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0 @ 0x18059FCDA (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0.c)
 *     _CDelayedTileActivation_CreateInstance_::_1_::dtor$0_0 @ 0x18059FD99 (_CDelayedTileActivation_CreateInstance_--_1_--dtor$0_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CDelayedTileActivation>::~ComPtr<CDelayedTileActivation>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CDelayedTileActivation>::InternalRelease(a1);
}
