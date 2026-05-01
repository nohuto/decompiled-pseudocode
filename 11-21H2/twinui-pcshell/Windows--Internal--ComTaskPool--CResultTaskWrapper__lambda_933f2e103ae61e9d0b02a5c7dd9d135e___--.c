/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_933f2e103ae61e9d0b02a5c7dd9d135e___::Run @ 0x1804061A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_933f2e103ae61e9d0b02a5c7dd9d135e_::operator() @ 0x180405454 (_lambda_933f2e103ae61e9d0b02a5c7dd9d135e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_933f2e103ae61e9d0b02a5c7dd9d135e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_933f2e103ae61e9d0b02a5c7dd9d135e_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
