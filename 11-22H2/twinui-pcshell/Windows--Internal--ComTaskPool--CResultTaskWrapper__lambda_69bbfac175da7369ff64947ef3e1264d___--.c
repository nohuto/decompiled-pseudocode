/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_69bbfac175da7369ff64947ef3e1264d___::Run @ 0x1801F3E80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_69bbfac175da7369ff64947ef3e1264d_::operator() @ 0x1801F38AC (_lambda_69bbfac175da7369ff64947ef3e1264d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_69bbfac175da7369ff64947ef3e1264d___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_69bbfac175da7369ff64947ef3e1264d_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
