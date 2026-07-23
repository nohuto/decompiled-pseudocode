/*
 * XREFs of PpmHeteroDispatchHgsInterrupt @ 0x14059EC60
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 */

__int64 PpmHeteroDispatchHgsInterrupt()
{
  REGHANDLE v0; // rbx
  __int64 result; // rax

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HGS_UPDATE) )
      EtwWriteEx(v0, &PPM_ETW_HGS_UPDATE, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
  result = (unsigned int)_InterlockedExchange(&PpmHeteroHgsUpdateQueued, 1);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc((ULONG_PTR)&PpmHeteroHgsUpdateDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
