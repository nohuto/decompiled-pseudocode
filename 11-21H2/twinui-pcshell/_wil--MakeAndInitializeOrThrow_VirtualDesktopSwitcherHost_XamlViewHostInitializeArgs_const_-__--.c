/*
 * XREFs of _wil::MakeAndInitializeOrThrow_VirtualDesktopSwitcherHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x180605D06
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5470 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_VirtualDesktopSwitcherHost_XamlViewHostInitializeArgs_const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(*(__int64 **)(a2 + 64));
  }
}
