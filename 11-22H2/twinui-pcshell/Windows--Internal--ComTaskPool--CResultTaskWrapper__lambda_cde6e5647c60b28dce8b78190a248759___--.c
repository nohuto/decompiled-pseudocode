/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cde6e5647c60b28dce8b78190a248759___::Run @ 0x1804EBF60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cde6e5647c60b28dce8b78190a248759_::operator() @ 0x1804E8070 (_lambda_cde6e5647c60b28dce8b78190a248759_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cde6e5647c60b28dce8b78190a248759___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_cde6e5647c60b28dce8b78190a248759_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
