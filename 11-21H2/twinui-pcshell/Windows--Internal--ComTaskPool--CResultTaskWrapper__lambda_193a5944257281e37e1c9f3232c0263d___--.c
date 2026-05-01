/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_193a5944257281e37e1c9f3232c0263d___::Run @ 0x180416690
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_193a5944257281e37e1c9f3232c0263d_::operator() @ 0x1804113EC (_lambda_193a5944257281e37e1c9f3232c0263d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_193a5944257281e37e1c9f3232c0263d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_193a5944257281e37e1c9f3232c0263d_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
