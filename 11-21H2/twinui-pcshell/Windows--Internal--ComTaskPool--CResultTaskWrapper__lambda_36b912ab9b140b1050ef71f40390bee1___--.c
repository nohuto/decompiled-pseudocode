/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_36b912ab9b140b1050ef71f40390bee1___::Run @ 0x180416720
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_36b912ab9b140b1050ef71f40390bee1_::operator() @ 0x180411828 (_lambda_36b912ab9b140b1050ef71f40390bee1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_36b912ab9b140b1050ef71f40390bee1___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_36b912ab9b140b1050ef71f40390bee1_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
