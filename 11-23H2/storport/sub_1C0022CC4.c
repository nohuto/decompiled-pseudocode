/*
 * XREFs of sub_1C0022CC4 @ 0x1C0022CC4
 * Callers:
 *     sub_1C0015DDC @ 0x1C0015DDC (sub_1C0015DDC.c)
 *     DllUnload @ 0x1C0065590 (DllUnload.c)
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C0022CC4(__int64 a1)
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
