/*
 * XREFs of _VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal_::_1_::dtor$0 @ 0x18048B0DF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 64));
}
