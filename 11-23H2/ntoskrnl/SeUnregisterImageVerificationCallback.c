/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x1409C8EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14036E840 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140D0CA8C);
  ExUnregisterCallback(a1);
}
