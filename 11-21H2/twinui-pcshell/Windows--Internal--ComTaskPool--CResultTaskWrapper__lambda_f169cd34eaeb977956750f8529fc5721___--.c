/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f169cd34eaeb977956750f8529fc5721___::Run @ 0x18040C080
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f169cd34eaeb977956750f8529fc5721_::operator() @ 0x18040A40C (_lambda_f169cd34eaeb977956750f8529fc5721_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f169cd34eaeb977956750f8529fc5721___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f169cd34eaeb977956750f8529fc5721_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
