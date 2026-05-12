/*
 * XREFs of StorpShutdownRegistryWatch @ 0x1C0021EC4
 * Callers:
 *     RaidUnitFreeResources @ 0x1C001544C (RaidUnitFreeResources.c)
 *     DllUnload @ 0x1C0064D60 (DllUnload.c)
 *     RaidAdapterReleaseResources @ 0x1C00A6D44 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall StorpShutdownRegistryWatch(__int64 a1)
{
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  ZwClose(*(HANDLE *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((PVOID)(a1 + 160), Executive, 0, 0, 0LL);
  return ExDeleteResourceLite((PERESOURCE)(a1 + 24));
}
