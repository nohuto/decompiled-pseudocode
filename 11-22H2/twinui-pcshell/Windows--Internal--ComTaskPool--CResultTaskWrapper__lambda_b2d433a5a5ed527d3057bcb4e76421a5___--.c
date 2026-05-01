/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b2d433a5a5ed527d3057bcb4e76421a5___::Run @ 0x1801F99E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b2d433a5a5ed527d3057bcb4e76421a5_::operator() @ 0x1801F8884 (_lambda_b2d433a5a5ed527d3057bcb4e76421a5_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b2d433a5a5ed527d3057bcb4e76421a5___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_b2d433a5a5ed527d3057bcb4e76421a5_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
