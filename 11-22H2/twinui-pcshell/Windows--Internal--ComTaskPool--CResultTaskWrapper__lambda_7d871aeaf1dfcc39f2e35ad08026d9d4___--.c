/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7d871aeaf1dfcc39f2e35ad08026d9d4___::Run @ 0x1804EBD80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7d871aeaf1dfcc39f2e35ad08026d9d4_::operator() @ 0x1804E70B0 (_lambda_7d871aeaf1dfcc39f2e35ad08026d9d4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7d871aeaf1dfcc39f2e35ad08026d9d4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7d871aeaf1dfcc39f2e35ad08026d9d4_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
