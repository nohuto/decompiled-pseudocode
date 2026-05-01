/*
 * XREFs of _CVirtualDesktopCollection::ContainsVirtualDesktop_::_1_::dtor$0 @ 0x18022319B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CVirtualDesktopCollection::ContainsVirtualDesktop_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((void *)(a2 + 96));
  }
}
