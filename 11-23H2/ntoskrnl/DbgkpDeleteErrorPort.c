/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140939F44
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x14053BB88 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140939914 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A27C (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x14076B890 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
