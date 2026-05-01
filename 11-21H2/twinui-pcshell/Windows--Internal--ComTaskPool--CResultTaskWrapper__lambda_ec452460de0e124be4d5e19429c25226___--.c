/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ec452460de0e124be4d5e19429c25226___::Run @ 0x18040C050
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ec452460de0e124be4d5e19429c25226_::operator() @ 0x18040A370 (_lambda_ec452460de0e124be4d5e19429c25226_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ec452460de0e124be4d5e19429c25226___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ec452460de0e124be4d5e19429c25226_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
