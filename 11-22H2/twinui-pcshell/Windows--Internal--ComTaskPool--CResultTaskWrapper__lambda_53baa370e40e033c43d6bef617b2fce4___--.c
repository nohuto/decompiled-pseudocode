/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53baa370e40e033c43d6bef617b2fce4___::Run @ 0x1800A05C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_53baa370e40e033c43d6bef617b2fce4_::operator() @ 0x1800A05E8 (_lambda_53baa370e40e033c43d6bef617b2fce4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53baa370e40e033c43d6bef617b2fce4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_53baa370e40e033c43d6bef617b2fce4_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
