/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1408100B8
 * Callers:
 *     CmInitSystem2 @ 0x140B39668 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140821FA8 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&dword_140C04390);
}
