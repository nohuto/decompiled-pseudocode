/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___::Run @ 0x1800A2670
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_21b91f8ed7e4c7f4d9826ebf89a77415_::operator() @ 0x1800A2088 (_lambda_21b91f8ed7e4c7f4d9826ebf89a77415_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_21b91f8ed7e4c7f4d9826ebf89a77415_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
