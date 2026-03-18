/*
 * XREFs of UserDereferenceDwmProcess @ 0x1C009BC30
 * Callers:
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00D5730 (NtDCompositionSendDwmLpcMessage.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall UserDereferenceDwmProcess(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObject(a1);
  return result;
}
