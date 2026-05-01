/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0a029e4567c45bb0014685f0a9044f2c___::Run @ 0x18008F610
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0a029e4567c45bb0014685f0a9044f2c_::operator() @ 0x18008F638 (_lambda_0a029e4567c45bb0014685f0a9044f2c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0a029e4567c45bb0014685f0a9044f2c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_0a029e4567c45bb0014685f0a9044f2c_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
