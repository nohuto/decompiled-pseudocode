/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_245d2a2be388f7a941ea2187d291aeff___::Run @ 0x180131500
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_245d2a2be388f7a941ea2187d291aeff_::operator() @ 0x180131528 (_lambda_245d2a2be388f7a941ea2187d291aeff_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_245d2a2be388f7a941ea2187d291aeff___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_245d2a2be388f7a941ea2187d291aeff_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
