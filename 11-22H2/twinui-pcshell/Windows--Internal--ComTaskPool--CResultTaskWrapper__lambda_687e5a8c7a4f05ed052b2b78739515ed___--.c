/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_687e5a8c7a4f05ed052b2b78739515ed___::Run @ 0x1804F4FD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator() @ 0x1804F49C4 (_lambda_687e5a8c7a4f05ed052b2b78739515ed_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_687e5a8c7a4f05ed052b2b78739515ed___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
