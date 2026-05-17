/*
 * XREFs of TpDereferenceGlobalPool @ 0x18005025C
 * Callers:
 *     RtlpTpWorkCallback @ 0x18004CF70 (RtlpTpWorkCallback.c)
 *     RtlpTpIoDllLoaded @ 0x1800AFE36 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x180126AAC (RtlpTpIoAlloc.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FCE0 (TppPoolpDereferenceGlobalPool.c)
 */

struct _PEB *__fastcall TpDereferenceGlobalPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *result; // rax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 == TppPoolpGlobalPool && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)TppPoolpDereferenceGlobalPool(
                            (const void **)&TppPoolpGlobalPool,
                            (__int64)&TppPoolpGlobalPoolLock);
  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress )
    return (struct _PEB *)TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  return result;
}
