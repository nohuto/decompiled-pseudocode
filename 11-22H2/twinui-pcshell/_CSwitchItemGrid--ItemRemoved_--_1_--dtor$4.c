/*
 * XREFs of _CSwitchItemGrid::ItemRemoved_::_1_::dtor$4 @ 0x180579793
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CSwitchItemGrid::ItemRemoved_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 160) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 160) &= ~1u;
    return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 48));
  }
  return result;
}
