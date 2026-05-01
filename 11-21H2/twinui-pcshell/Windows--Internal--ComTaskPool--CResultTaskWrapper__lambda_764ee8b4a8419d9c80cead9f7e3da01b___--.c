/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_764ee8b4a8419d9c80cead9f7e3da01b___::Run @ 0x1803F1000
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_764ee8b4a8419d9c80cead9f7e3da01b_::operator() @ 0x1803EAD64 (_lambda_764ee8b4a8419d9c80cead9f7e3da01b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_764ee8b4a8419d9c80cead9f7e3da01b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_764ee8b4a8419d9c80cead9f7e3da01b_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
