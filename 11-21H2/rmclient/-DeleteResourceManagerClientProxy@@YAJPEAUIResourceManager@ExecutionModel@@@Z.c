/*
 * XREFs of ?DeleteResourceManagerClientProxy@@YAJPEAUIResourceManager@ExecutionModel@@@Z @ 0x18001BD60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DeleteResourceManagerClientProxy(struct IResourceManager *a1)
{
  ((void (__fastcall *)(struct IResourceManager *))a1->lpVtbl->Release)(a1);
  return 0LL;
}
