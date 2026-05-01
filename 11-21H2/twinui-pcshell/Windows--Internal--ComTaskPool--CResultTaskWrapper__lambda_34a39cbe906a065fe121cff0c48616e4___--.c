/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_34a39cbe906a065fe121cff0c48616e4___::Run @ 0x18040BE40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_34a39cbe906a065fe121cff0c48616e4_::operator() @ 0x180409448 (_lambda_34a39cbe906a065fe121cff0c48616e4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_34a39cbe906a065fe121cff0c48616e4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_34a39cbe906a065fe121cff0c48616e4_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
