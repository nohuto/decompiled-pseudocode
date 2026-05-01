/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_00182c6ee200e78e0959b7edcc3d9c9f___::Run @ 0x180402BD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_00182c6ee200e78e0959b7edcc3d9c9f_::operator() @ 0x1803FFC58 (_lambda_00182c6ee200e78e0959b7edcc3d9c9f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_00182c6ee200e78e0959b7edcc3d9c9f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_00182c6ee200e78e0959b7edcc3d9c9f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
