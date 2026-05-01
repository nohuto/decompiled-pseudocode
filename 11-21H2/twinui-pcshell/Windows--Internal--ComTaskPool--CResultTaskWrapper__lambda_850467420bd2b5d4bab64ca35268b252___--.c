/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_850467420bd2b5d4bab64ca35268b252___::Run @ 0x18040BEA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_850467420bd2b5d4bab64ca35268b252_::operator() @ 0x18040996C (_lambda_850467420bd2b5d4bab64ca35268b252_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_850467420bd2b5d4bab64ca35268b252___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_850467420bd2b5d4bab64ca35268b252_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
