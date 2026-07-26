/*
 * XREFs of NdisGetProcessObjectCompartmentId @ 0x1C00B6BF0
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B813C (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 * Callees:
 *     NdisGetJobObjectCompartmentId @ 0x1C0006A30 (NdisGetJobObjectCompartmentId.c)
 *     NdisGetSessionCompartmentId @ 0x1C0006AC0 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall NdisGetProcessObjectCompartmentId(__int64 a1)
{
  __int64 ProcessJob; // rax
  unsigned int ProcessSessionId; // eax

  ProcessJob = PsGetProcessJob();
  if ( ProcessJob )
    return NdisGetJobObjectCompartmentId(ProcessJob);
  ProcessSessionId = PsGetProcessSessionId(a1);
  return NdisGetSessionCompartmentId(ProcessSessionId);
}
