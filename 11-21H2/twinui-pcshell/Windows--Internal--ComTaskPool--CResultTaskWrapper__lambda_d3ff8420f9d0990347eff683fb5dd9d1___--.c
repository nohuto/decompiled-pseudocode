/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d3ff8420f9d0990347eff683fb5dd9d1___::Run @ 0x180416B90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d3ff8420f9d0990347eff683fb5dd9d1_::operator() @ 0x18041335C (_lambda_d3ff8420f9d0990347eff683fb5dd9d1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d3ff8420f9d0990347eff683fb5dd9d1___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax

  result = lambda_d3ff8420f9d0990347eff683fb5dd9d1_::operator()((_BYTE **)(a1 + 16), a2, a3, a4);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
