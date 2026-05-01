/*
 * XREFs of __lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()_::_1_::dtor$1 @ 0x1802C41D1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 104));
  }
  return result;
}
