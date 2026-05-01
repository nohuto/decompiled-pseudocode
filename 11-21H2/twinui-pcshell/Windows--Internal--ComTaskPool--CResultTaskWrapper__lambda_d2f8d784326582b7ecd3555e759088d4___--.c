/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d2f8d784326582b7ecd3555e759088d4___::Run @ 0x18040C020
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d2f8d784326582b7ecd3555e759088d4_::operator() @ 0x18040A02C (_lambda_d2f8d784326582b7ecd3555e759088d4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d2f8d784326582b7ecd3555e759088d4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d2f8d784326582b7ecd3555e759088d4_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
