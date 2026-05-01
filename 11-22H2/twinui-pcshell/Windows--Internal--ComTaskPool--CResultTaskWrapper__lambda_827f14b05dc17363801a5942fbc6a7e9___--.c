/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_827f14b05dc17363801a5942fbc6a7e9___::Run @ 0x1801F50D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_827f14b05dc17363801a5942fbc6a7e9_::operator() @ 0x1801F4D40 (_lambda_827f14b05dc17363801a5942fbc6a7e9_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_827f14b05dc17363801a5942fbc6a7e9___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_827f14b05dc17363801a5942fbc6a7e9_::operator()((RTL_SRWLOCK **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
