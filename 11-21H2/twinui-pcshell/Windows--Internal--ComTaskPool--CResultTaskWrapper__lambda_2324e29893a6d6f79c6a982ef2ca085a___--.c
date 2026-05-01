/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2324e29893a6d6f79c6a982ef2ca085a___::Run @ 0x1800C2A20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2324e29893a6d6f79c6a982ef2ca085a_::operator() @ 0x1800C2A48 (_lambda_2324e29893a6d6f79c6a982ef2ca085a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2324e29893a6d6f79c6a982ef2ca085a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_2324e29893a6d6f79c6a982ef2ca085a_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
