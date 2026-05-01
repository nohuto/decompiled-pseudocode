/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8a0d170bc2e4bd8d0fa5b262927f6f2b___::Run @ 0x18040BED0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8a0d170bc2e4bd8d0fa5b262927f6f2b_::operator() @ 0x180409BF8 (_lambda_8a0d170bc2e4bd8d0fa5b262927f6f2b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8a0d170bc2e4bd8d0fa5b262927f6f2b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8a0d170bc2e4bd8d0fa5b262927f6f2b_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
