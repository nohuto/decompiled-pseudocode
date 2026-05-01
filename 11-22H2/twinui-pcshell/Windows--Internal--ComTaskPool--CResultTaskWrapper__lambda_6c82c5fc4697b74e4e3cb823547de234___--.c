/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6c82c5fc4697b74e4e3cb823547de234___::Run @ 0x1804E07D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6c82c5fc4697b74e4e3cb823547de234_::operator() @ 0x1804DFEE4 (_lambda_6c82c5fc4697b74e4e3cb823547de234_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6c82c5fc4697b74e4e3cb823547de234___::Run(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  result = lambda_6c82c5fc4697b74e4e3cb823547de234_::operator()((__int64 *)(a1 + 16), a2);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
