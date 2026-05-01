/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2dc6b38f508d97fb149bdc7180961dcb___::Run @ 0x1804166F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2dc6b38f508d97fb149bdc7180961dcb_::operator() @ 0x1804115EC (_lambda_2dc6b38f508d97fb149bdc7180961dcb_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2dc6b38f508d97fb149bdc7180961dcb___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_2dc6b38f508d97fb149bdc7180961dcb_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
