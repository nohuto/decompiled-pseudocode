/*
 * XREFs of ndisDriverReinit @ 0x1C0035E20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C011E4E8 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 */

void __fastcall ndisDriverReinit(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  ndisIfEnsureNsiInitialized();
  ndisBootFinishedTime.QuadPart = MEMORY[0xFFFFF78000000014];
}
