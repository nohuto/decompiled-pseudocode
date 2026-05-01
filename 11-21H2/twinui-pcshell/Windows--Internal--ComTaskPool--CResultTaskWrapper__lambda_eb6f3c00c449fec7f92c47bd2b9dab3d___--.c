/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eb6f3c00c449fec7f92c47bd2b9dab3d___::Run @ 0x1801398B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_eb6f3c00c449fec7f92c47bd2b9dab3d_::operator() @ 0x1801398D8 (_lambda_eb6f3c00c449fec7f92c47bd2b9dab3d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_eb6f3c00c449fec7f92c47bd2b9dab3d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_eb6f3c00c449fec7f92c47bd2b9dab3d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
