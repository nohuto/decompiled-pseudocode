/*
 * XREFs of _CScrollViewer::_UpdateViewport_::_1_::dtor$1 @ 0x18058DAFF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CScrollViewer::_UpdateViewport_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~2u;
    return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 56));
  }
  return result;
}
