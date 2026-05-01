/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1153ad400af169b76783517fe9940f3f___::Run @ 0x18040BD80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1153ad400af169b76783517fe9940f3f_::operator() @ 0x180409330 (_lambda_1153ad400af169b76783517fe9940f3f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1153ad400af169b76783517fe9940f3f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1153ad400af169b76783517fe9940f3f_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
