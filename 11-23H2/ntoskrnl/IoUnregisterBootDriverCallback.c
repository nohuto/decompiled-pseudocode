/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140B75F40
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14036E840 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
