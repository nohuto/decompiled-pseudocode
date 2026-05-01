/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d1defa04705501fb10e3f00eb63c4368___::Run @ 0x1804EBF90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d1defa04705501fb10e3f00eb63c4368_::operator() @ 0x1804E81A0 (_lambda_d1defa04705501fb10e3f00eb63c4368_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d1defa04705501fb10e3f00eb63c4368___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d1defa04705501fb10e3f00eb63c4368_::operator()((WindowWrapperBase **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
