/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_92e9e6c3c5000efe4ca7aee5648eca0d___::Run @ 0x18040BF00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_92e9e6c3c5000efe4ca7aee5648eca0d_::operator() @ 0x180409CE4 (_lambda_92e9e6c3c5000efe4ca7aee5648eca0d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_92e9e6c3c5000efe4ca7aee5648eca0d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_92e9e6c3c5000efe4ca7aee5648eca0d_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
