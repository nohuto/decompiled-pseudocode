/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_086ca819410f95c1740d891b31dce0f8___::Run @ 0x180078D40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_086ca819410f95c1740d891b31dce0f8_::operator() @ 0x180078D68 (_lambda_086ca819410f95c1740d891b31dce0f8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_086ca819410f95c1740d891b31dce0f8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_086ca819410f95c1740d891b31dce0f8_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
