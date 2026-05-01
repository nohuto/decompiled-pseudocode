/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fd28b8cfd5332ad6b2a822ae0574fab8___::Run @ 0x180138600
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fd28b8cfd5332ad6b2a822ae0574fab8_::operator() @ 0x180138628 (_lambda_fd28b8cfd5332ad6b2a822ae0574fab8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fd28b8cfd5332ad6b2a822ae0574fab8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_fd28b8cfd5332ad6b2a822ae0574fab8_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
