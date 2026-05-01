/*
 * XREFs of _CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor$11 @ 0x1804DA97E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5470 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 248) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 248) &= ~2u;
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 80));
  }
}
