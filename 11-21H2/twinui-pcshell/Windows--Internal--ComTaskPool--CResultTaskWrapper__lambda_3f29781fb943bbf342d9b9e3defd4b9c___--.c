/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3f29781fb943bbf342d9b9e3defd4b9c___::Run @ 0x18012F7B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3f29781fb943bbf342d9b9e3defd4b9c_::operator() @ 0x18012F7D8 (_lambda_3f29781fb943bbf342d9b9e3defd4b9c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3f29781fb943bbf342d9b9e3defd4b9c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3f29781fb943bbf342d9b9e3defd4b9c_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
