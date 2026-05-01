/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_532033d5f85a25734111ea1682d58830___::Run @ 0x1804EBB70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_532033d5f85a25734111ea1682d58830_::operator() @ 0x1804E69B0 (_lambda_532033d5f85a25734111ea1682d58830_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_532033d5f85a25734111ea1682d58830___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_532033d5f85a25734111ea1682d58830_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
