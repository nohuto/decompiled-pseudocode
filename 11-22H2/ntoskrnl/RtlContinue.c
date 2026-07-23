/*
 * XREFs of RtlContinue @ 0x1405B2088
 * Callers:
 *     <none>
 * Callees:
 *     NtContinueEx @ 0x14041EAD0 (NtContinueEx.c)
 */

NTSTATUS __fastcall RtlContinue(_CONTEXT *a1, void *a2)
{
  return NtContinueEx(a1, a2);
}
