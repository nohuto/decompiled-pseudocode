/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewEventHelpers::details::ApplicationViewEventRegistration_IApplicationViewChangeListener___&__::_1_::dtor$0 @ 0x18021A881
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5470 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_AppViewEventHelpers::details::ApplicationViewEventRegistration_IApplicationViewChangeListener______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(*(void **)(a2 + 64));
  }
}
