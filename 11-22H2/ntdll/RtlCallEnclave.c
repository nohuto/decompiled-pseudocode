/*
 * XREFs of RtlCallEnclave @ 0x1800A2FB0
 * Callers:
 *     LdrpIssueEnclaveCall @ 0x1800AD210 (LdrpIssueEnclaveCall.c)
 *     LdrInitializeEnclave @ 0x1800D8710 (LdrInitializeEnclave.c)
 * Callees:
 *     ZwCallEnclave @ 0x1800A0000 (ZwCallEnclave.c)
 */

NTSTATUS __fastcall RtlCallEnclave(LPVOID (__cdecl *a1)(LPVOID), void *a2, ULONG a3, PVOID *a4)
{
  return ZwCallEnclave(a1, a2, a3, a4);
}
