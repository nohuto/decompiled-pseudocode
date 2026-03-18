/*
 * XREFs of ExAcquireRundownProtectionEx @ 0x1402F5CE0
 * Callers:
 *     ExReferenceCallBackBlock @ 0x140214EF0 (ExReferenceCallBackBlock.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     PfSnReferenceProcessTrace @ 0x1402E25B4 (PfSnReferenceProcessTrace.c)
 *     PfSnAddProcessTrace @ 0x1402F5E18 (PfSnAddProcessTrace.c)
 *     ExCompareExchangeCallBack @ 0x14039FE58 (ExCompareExchangeCallBack.c)
 *     PspRundownProcess @ 0x1409B3D8C (PspRundownProcess.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionEx(PEX_RUNDOWN_REF RunRef, ULONG Count)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rtt

  _m_prefetchw(RunRef);
  v2 = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  v3 = 2 * Count;
  while ( 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v3 + v2, v2);
    if ( v4 == v2 )
      break;
    if ( (v2 & 1) != 0 )
      return 0;
  }
  return 1;
}
