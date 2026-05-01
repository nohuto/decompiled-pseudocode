/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1be1e40747901402039ac9a9af83119a___::Run @ 0x1804EBA80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1be1e40747901402039ac9a9af83119a_::operator() @ 0x1804E5CE0 (_lambda_1be1e40747901402039ac9a9af83119a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1be1e40747901402039ac9a9af83119a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1be1e40747901402039ac9a9af83119a_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
