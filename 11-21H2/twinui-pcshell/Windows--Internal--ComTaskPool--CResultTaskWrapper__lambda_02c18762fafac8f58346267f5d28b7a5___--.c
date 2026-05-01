/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_02c18762fafac8f58346267f5d28b7a5___::Run @ 0x180416600
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_02c18762fafac8f58346267f5d28b7a5_::operator() @ 0x180410E28 (_lambda_02c18762fafac8f58346267f5d28b7a5_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_02c18762fafac8f58346267f5d28b7a5___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_02c18762fafac8f58346267f5d28b7a5_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
