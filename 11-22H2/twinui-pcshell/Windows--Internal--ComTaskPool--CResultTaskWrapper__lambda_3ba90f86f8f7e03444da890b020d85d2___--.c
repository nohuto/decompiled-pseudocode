/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3ba90f86f8f7e03444da890b020d85d2___::Run @ 0x180061C50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3ba90f86f8f7e03444da890b020d85d2_::operator() @ 0x180061C78 (_lambda_3ba90f86f8f7e03444da890b020d85d2_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3ba90f86f8f7e03444da890b020d85d2___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3ba90f86f8f7e03444da890b020d85d2_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
