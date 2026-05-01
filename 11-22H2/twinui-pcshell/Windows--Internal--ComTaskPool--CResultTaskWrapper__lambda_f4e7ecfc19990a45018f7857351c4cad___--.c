/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4e7ecfc19990a45018f7857351c4cad___::Run @ 0x1801F9BB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f4e7ecfc19990a45018f7857351c4cad_::operator() @ 0x1801F947C (_lambda_f4e7ecfc19990a45018f7857351c4cad_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4e7ecfc19990a45018f7857351c4cad___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f4e7ecfc19990a45018f7857351c4cad_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
