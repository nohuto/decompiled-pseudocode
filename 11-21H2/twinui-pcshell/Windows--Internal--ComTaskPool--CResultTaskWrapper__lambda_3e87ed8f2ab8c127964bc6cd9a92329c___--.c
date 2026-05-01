/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3e87ed8f2ab8c127964bc6cd9a92329c___::Run @ 0x18040BE70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3e87ed8f2ab8c127964bc6cd9a92329c_::operator() @ 0x180409874 (_lambda_3e87ed8f2ab8c127964bc6cd9a92329c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3e87ed8f2ab8c127964bc6cd9a92329c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3e87ed8f2ab8c127964bc6cd9a92329c_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
