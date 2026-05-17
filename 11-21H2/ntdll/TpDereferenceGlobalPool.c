/*
 * XREFs of TpDereferenceGlobalPool @ 0x180071288
 * Callers:
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpIoDllLoaded @ 0x1800B1D36 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x18012505C (RtlpTpIoAlloc.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18001ED68 (TppPoolpDereferenceGlobalPool.c)
 */

struct _PEB *__fastcall TpDereferenceGlobalPool(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _PEB *result; // rax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 == TppPoolpGlobalPool && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)TppPoolpDereferenceGlobalPool(
                            (const void **)&TppPoolpGlobalPool,
                            (unsigned __int64)&TppPoolpGlobalPoolLock,
                            a3,
                            a4);
  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress )
    return (struct _PEB *)TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  return result;
}
