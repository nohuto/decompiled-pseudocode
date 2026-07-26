/*
 * XREFs of NdisGetProcessObjectCompartmentId @ 0x1C00B6BD0
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B811C (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 * Callees:
 *     NdisGetJobObjectCompartmentId @ 0x1C00068A0 (NdisGetJobObjectCompartmentId.c)
 *     NdisGetSessionCompartmentId @ 0x1C0006930 (NdisGetSessionCompartmentId.c)
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
