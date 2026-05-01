/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e7e302f6f9f528206f485b6f489d73fa___::Run @ 0x180416BF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e7e302f6f9f528206f485b6f489d73fa_::operator() @ 0x1804135E8 (_lambda_e7e302f6f9f528206f485b6f489d73fa_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e7e302f6f9f528206f485b6f489d73fa___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e7e302f6f9f528206f485b6f489d73fa_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
