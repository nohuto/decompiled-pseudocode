/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x14041C2C0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14081BA84 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14081C054 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140858660 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B00 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
