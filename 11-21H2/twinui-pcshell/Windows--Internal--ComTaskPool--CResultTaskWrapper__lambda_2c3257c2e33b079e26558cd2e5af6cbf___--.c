/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2c3257c2e33b079e26558cd2e5af6cbf___::Run @ 0x180147F60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2c3257c2e33b079e26558cd2e5af6cbf_::operator() @ 0x180147F88 (_lambda_2c3257c2e33b079e26558cd2e5af6cbf_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_2c3257c2e33b079e26558cd2e5af6cbf___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_2c3257c2e33b079e26558cd2e5af6cbf_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
