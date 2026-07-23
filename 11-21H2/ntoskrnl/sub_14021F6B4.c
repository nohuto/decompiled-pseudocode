/*
 * XREFs of sub_14021F6B4 @ 0x14021F6B4
 * Callers:
 *     sub_1406953C8 @ 0x1406953C8 (sub_1406953C8.c)
 *     sub_140695A40 @ 0x140695A40 (sub_140695A40.c)
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall sub_14021F6B4(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
