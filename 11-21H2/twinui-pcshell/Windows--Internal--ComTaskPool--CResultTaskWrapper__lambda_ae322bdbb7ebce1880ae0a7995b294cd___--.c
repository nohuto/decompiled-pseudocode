/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ae322bdbb7ebce1880ae0a7995b294cd___::Run @ 0x180402FB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ae322bdbb7ebce1880ae0a7995b294cd_::operator() @ 0x180401528 (_lambda_ae322bdbb7ebce1880ae0a7995b294cd_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ae322bdbb7ebce1880ae0a7995b294cd___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ae322bdbb7ebce1880ae0a7995b294cd_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
