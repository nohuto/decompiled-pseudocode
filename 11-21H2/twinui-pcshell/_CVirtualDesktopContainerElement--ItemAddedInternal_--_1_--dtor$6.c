/*
 * XREFs of _CVirtualDesktopContainerElement::ItemAddedInternal_::_1_::dtor$6 @ 0x1804DA45E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5470 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CVirtualDesktopContainerElement::ItemAddedInternal_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 128) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 128) &= ~1u;
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 48));
  }
}
