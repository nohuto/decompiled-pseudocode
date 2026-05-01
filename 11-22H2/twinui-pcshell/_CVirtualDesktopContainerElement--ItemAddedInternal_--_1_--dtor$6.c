/*
 * XREFs of _CVirtualDesktopContainerElement::ItemAddedInternal_::_1_::dtor$6 @ 0x1805921EF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::ItemAddedInternal_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 128) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 128) &= ~1u;
    return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 152));
  }
  return result;
}
