/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3bc8458981c1f89b7e30203ff9c56e4f___::Run @ 0x180416750
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3bc8458981c1f89b7e30203ff9c56e4f_::operator() @ 0x180411920 (_lambda_3bc8458981c1f89b7e30203ff9c56e4f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3bc8458981c1f89b7e30203ff9c56e4f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3bc8458981c1f89b7e30203ff9c56e4f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
