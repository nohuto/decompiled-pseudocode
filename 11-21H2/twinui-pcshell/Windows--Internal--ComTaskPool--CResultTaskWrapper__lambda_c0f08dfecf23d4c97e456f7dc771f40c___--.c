/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c0f08dfecf23d4c97e456f7dc771f40c___::Run @ 0x1803F1030
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c0f08dfecf23d4c97e456f7dc771f40c_::operator() @ 0x1803EAFB0 (_lambda_c0f08dfecf23d4c97e456f7dc771f40c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c0f08dfecf23d4c97e456f7dc771f40c___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_c0f08dfecf23d4c97e456f7dc771f40c_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
