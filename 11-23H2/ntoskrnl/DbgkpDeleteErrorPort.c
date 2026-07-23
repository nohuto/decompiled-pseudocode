/*
 * XREFs of DbgkpDeleteErrorPort @ 0x14093A144
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x14053C0D8 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140939B14 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
