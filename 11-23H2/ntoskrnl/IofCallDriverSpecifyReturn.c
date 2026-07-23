/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14028D3F0
 * Callers:
 *     PopRequestPowerIrp @ 0x14028F4C0 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x140ACFC10 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14028D254 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14045FC8A (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140AC11C0 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1, ULONG_PTR a2)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver((__int64)a1, a2);
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
