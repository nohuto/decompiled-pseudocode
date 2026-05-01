/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f576a1c6e92786dd1ee63bcf62fd8bc8___::Run @ 0x180416C20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f576a1c6e92786dd1ee63bcf62fd8bc8_::operator() @ 0x1804138F0 (_lambda_f576a1c6e92786dd1ee63bcf62fd8bc8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f576a1c6e92786dd1ee63bcf62fd8bc8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f576a1c6e92786dd1ee63bcf62fd8bc8_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
