/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a3f8ac3eb9a33bfdf8e788a75d2a14e3___::Run @ 0x1804169E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a3f8ac3eb9a33bfdf8e788a75d2a14e3_::operator() @ 0x1804124E4 (_lambda_a3f8ac3eb9a33bfdf8e788a75d2a14e3_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a3f8ac3eb9a33bfdf8e788a75d2a14e3___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a3f8ac3eb9a33bfdf8e788a75d2a14e3_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
