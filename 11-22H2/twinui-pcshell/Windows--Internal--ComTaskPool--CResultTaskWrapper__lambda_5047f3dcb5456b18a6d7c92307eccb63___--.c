/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5047f3dcb5456b18a6d7c92307eccb63___::Run @ 0x1804EBB40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5047f3dcb5456b18a6d7c92307eccb63_::operator() @ 0x1804E6784 (_lambda_5047f3dcb5456b18a6d7c92307eccb63_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5047f3dcb5456b18a6d7c92307eccb63___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_5047f3dcb5456b18a6d7c92307eccb63_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
