/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_be0582c888406e58cdbd1be224a7784e___::Run @ 0x180416B30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_be0582c888406e58cdbd1be224a7784e_::operator() @ 0x18041301C (_lambda_be0582c888406e58cdbd1be224a7784e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_be0582c888406e58cdbd1be224a7784e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_be0582c888406e58cdbd1be224a7784e_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
