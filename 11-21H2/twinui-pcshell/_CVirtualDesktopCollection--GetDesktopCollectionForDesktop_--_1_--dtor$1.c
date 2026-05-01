/*
 * XREFs of _CVirtualDesktopCollection::GetDesktopCollectionForDesktop_::_1_::dtor$1 @ 0x180223B9E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CVirtualDesktopCollection::GetDesktopCollectionForDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((void *)(a2 + 184));
  }
}
