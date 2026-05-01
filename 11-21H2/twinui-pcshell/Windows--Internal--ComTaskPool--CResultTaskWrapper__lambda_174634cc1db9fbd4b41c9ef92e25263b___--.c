/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_174634cc1db9fbd4b41c9ef92e25263b___::Run @ 0x180416660
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_174634cc1db9fbd4b41c9ef92e25263b_::operator() @ 0x180411350 (_lambda_174634cc1db9fbd4b41c9ef92e25263b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_174634cc1db9fbd4b41c9ef92e25263b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_174634cc1db9fbd4b41c9ef92e25263b_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
