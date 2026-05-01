/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef217250f0101fab299e7ccd919808f___::Run @ 0x1801F9860
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8ef217250f0101fab299e7ccd919808f_::operator() @ 0x1801F7E94 (_lambda_8ef217250f0101fab299e7ccd919808f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef217250f0101fab299e7ccd919808f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8ef217250f0101fab299e7ccd919808f_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
