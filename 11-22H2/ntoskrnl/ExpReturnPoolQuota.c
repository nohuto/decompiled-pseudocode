/*
 * XREFs of ExpReturnPoolQuota @ 0x140207F24
 * Callers:
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 * Callees:
 *     PsReturnPoolQuota @ 0x140207F60 (PsReturnPoolQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall ExpReturnPoolQuota(struct _KPROCESS *Object, ULONG_PTR Amount, char a3, ULONG a4)
{
  PsReturnPoolQuota(Object, (POOL_TYPE)(a3 & 1), Amount);
  ObDereferenceObjectDeferDeleteWithTag(Object, a4);
}
