/*
 * XREFs of sub_1C003D5C0 @ 0x1C003D5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 */

void __fastcall sub_1C003D5C0(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  PVOID DeviceExtension; // rbx
  IRP *v4; // rbp
  unsigned int v5; // edi

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (IRP *)Context[1];
  sub_1C00076F4((__int64)DeviceExtension);
  v5 = sub_1C0039770((char *)DeviceExtension, (__int64)v4);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 37));
  IoUninitializeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  sub_1C0003440(v4, 0, v5);
}
