/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aec0846700b42ca4e39c995f67d0b5b9___::Run @ 0x1803FAB40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator() @ 0x1803FA32C (_lambda_aec0846700b42ca4e39c995f67d0b5b9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aec0846700b42ca4e39c995f67d0b5b9___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_aec0846700b42ca4e39c995f67d0b5b9_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
