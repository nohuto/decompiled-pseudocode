/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_365391053940a4cfa0299527f9e78222___::Run @ 0x180402D00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_365391053940a4cfa0299527f9e78222_::operator() @ 0x18040065C (_lambda_365391053940a4cfa0299527f9e78222_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_365391053940a4cfa0299527f9e78222___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_365391053940a4cfa0299527f9e78222_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
