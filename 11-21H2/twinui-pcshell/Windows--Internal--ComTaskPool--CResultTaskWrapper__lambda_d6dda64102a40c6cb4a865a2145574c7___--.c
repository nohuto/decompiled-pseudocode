/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d6dda64102a40c6cb4a865a2145574c7___::Run @ 0x180121FD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d6dda64102a40c6cb4a865a2145574c7_::operator() @ 0x1801220A4 (_lambda_d6dda64102a40c6cb4a865a2145574c7_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d6dda64102a40c6cb4a865a2145574c7___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d6dda64102a40c6cb4a865a2145574c7_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
