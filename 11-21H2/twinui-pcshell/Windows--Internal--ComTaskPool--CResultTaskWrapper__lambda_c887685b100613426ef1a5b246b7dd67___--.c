/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c887685b100613426ef1a5b246b7dd67___::Run @ 0x180166840
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c887685b100613426ef1a5b246b7dd67_::operator() @ 0x180166868 (_lambda_c887685b100613426ef1a5b246b7dd67_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c887685b100613426ef1a5b246b7dd67___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c887685b100613426ef1a5b246b7dd67_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
