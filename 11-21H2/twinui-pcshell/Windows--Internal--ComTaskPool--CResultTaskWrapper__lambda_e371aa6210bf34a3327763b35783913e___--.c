/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e371aa6210bf34a3327763b35783913e___::Run @ 0x180416BC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e371aa6210bf34a3327763b35783913e_::operator() @ 0x1804134BC (_lambda_e371aa6210bf34a3327763b35783913e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e371aa6210bf34a3327763b35783913e___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_e371aa6210bf34a3327763b35783913e_::operator()((_QWORD **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
