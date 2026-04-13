/*
 * XREFs of _wil::wait_for_completion_Windows::Storage::StorageFile___Microsoft::WRL::ComPtr_Windows::Storage::IStorageFile____::_1_::dtor$0 @ 0x1800DA19D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002BAB0 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::wait_for_completion_Windows::Storage::StorageFile___Microsoft::WRL::ComPtr_Windows::Storage::IStorageFile____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>(*(void **)(a2 + 64));
  }
}
