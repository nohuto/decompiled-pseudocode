/*
 * XREFs of ExDeleteDpcEvent @ 0x14060C540
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteDpcEvent(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[7], 0x65447845u);
  ExFreePoolWithTag(P, 0);
}
