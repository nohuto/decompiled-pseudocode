/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_127fba945b3ad42759bbeed869c5af3e___::Run @ 0x180416630
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_127fba945b3ad42759bbeed869c5af3e_::operator() @ 0x18041119C (_lambda_127fba945b3ad42759bbeed869c5af3e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_127fba945b3ad42759bbeed869c5af3e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_127fba945b3ad42759bbeed869c5af3e_::operator()((UwpWindowWrapperBase **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
