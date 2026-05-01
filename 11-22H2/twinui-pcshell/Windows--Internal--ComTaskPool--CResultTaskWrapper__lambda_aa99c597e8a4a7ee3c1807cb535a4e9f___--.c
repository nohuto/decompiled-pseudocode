/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aa99c597e8a4a7ee3c1807cb535a4e9f___::Run @ 0x1801F98F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_aa99c597e8a4a7ee3c1807cb535a4e9f_::operator() @ 0x1801F82EC (_lambda_aa99c597e8a4a7ee3c1807cb535a4e9f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aa99c597e8a4a7ee3c1807cb535a4e9f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_aa99c597e8a4a7ee3c1807cb535a4e9f_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
