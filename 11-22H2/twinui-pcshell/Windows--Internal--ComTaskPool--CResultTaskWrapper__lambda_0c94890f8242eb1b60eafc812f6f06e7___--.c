/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0c94890f8242eb1b60eafc812f6f06e7___::Run @ 0x1804F1840
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0c94890f8242eb1b60eafc812f6f06e7_::operator() @ 0x1804F02DC (_lambda_0c94890f8242eb1b60eafc812f6f06e7_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0c94890f8242eb1b60eafc812f6f06e7___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_0c94890f8242eb1b60eafc812f6f06e7_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
