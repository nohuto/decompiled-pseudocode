/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c3da97c916334404fe04f41838399863___::Run @ 0x1804061D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c3da97c916334404fe04f41838399863_::operator() @ 0x180405944 (_lambda_c3da97c916334404fe04f41838399863_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c3da97c916334404fe04f41838399863___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c3da97c916334404fe04f41838399863_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
