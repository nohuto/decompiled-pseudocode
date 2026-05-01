/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_759e1e24362ba58b3b85b34b47726433___::Run @ 0x180176380
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_759e1e24362ba58b3b85b34b47726433_::operator() @ 0x1801763A8 (_lambda_759e1e24362ba58b3b85b34b47726433_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_759e1e24362ba58b3b85b34b47726433___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_759e1e24362ba58b3b85b34b47726433_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
