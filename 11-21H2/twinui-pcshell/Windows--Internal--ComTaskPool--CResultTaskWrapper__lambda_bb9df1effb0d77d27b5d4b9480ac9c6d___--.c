/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bb9df1effb0d77d27b5d4b9480ac9c6d___::Run @ 0x180416B00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_bb9df1effb0d77d27b5d4b9480ac9c6d_::operator() @ 0x180412BF0 (_lambda_bb9df1effb0d77d27b5d4b9480ac9c6d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_bb9df1effb0d77d27b5d4b9480ac9c6d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_bb9df1effb0d77d27b5d4b9480ac9c6d_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
