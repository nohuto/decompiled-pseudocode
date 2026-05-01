/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1b27ca76508dc44f7dfb2d159550644e___::Run @ 0x1804166C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1b27ca76508dc44f7dfb2d159550644e_::operator() @ 0x180411514 (_lambda_1b27ca76508dc44f7dfb2d159550644e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1b27ca76508dc44f7dfb2d159550644e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1b27ca76508dc44f7dfb2d159550644e_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
