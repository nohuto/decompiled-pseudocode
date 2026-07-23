/*
 * XREFs of AlpcpReleasePagedPoolQuota @ 0x14071DDC0
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x14071CB50 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpCreateSecurityContext @ 0x14071CBC8 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureMessageData @ 0x14073AC10 (AlpcpCaptureMessageData.c)
 *     AlpcMessageDestroyProcedure @ 0x1407B6420 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1407D0144 (AlpcpCreateReserve.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402085B0 (PsReturnProcessPagedPoolQuota.c)
 */

unsigned __int64 __fastcall AlpcpReleasePagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    result = a2 + a1[1].SecureState.SecureHandle;
    if ( result >= 0x1000 )
      return PsReturnProcessPagedPoolQuota(a1, a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[1].SecureState, a2);
  }
  return result;
}
