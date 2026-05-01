/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_69bbfac175da7369ff64947ef3e1264d___::Run @ 0x180033180
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_69bbfac175da7369ff64947ef3e1264d_::operator() @ 0x1800331A8 (_lambda_69bbfac175da7369ff64947ef3e1264d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_69bbfac175da7369ff64947ef3e1264d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_69bbfac175da7369ff64947ef3e1264d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
