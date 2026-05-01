/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4840ca049eab68e80f4fb8429e23291e___::Run @ 0x180416780
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4840ca049eab68e80f4fb8429e23291e_::operator() @ 0x180411B18 (_lambda_4840ca049eab68e80f4fb8429e23291e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4840ca049eab68e80f4fb8429e23291e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_4840ca049eab68e80f4fb8429e23291e_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
