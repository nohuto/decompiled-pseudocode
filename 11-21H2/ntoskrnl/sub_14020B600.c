/*
 * XREFs of sub_14020B600 @ 0x14020B600
 * Callers:
 *     sub_14068DFF0 @ 0x14068DFF0 (sub_14068DFF0.c)
 *     sub_14068ED70 @ 0x14068ED70 (sub_14068ED70.c)
 *     sub_14080C508 @ 0x14080C508 (sub_14080C508.c)
 *     sub_14083D6A4 @ 0x14083D6A4 (sub_14083D6A4.c)
 * Callees:
 *     ZwUnlockVirtualMemory @ 0x14041F240 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS __fastcall sub_14020B600(ULONG_PTR a1, void **a2, void *a3, ULONG_PTR a4)
{
  void *v4; // rcx
  ULONG_PTR v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  v4 = *a2;
  v7 = a3;
  v6 = a4;
  return ZwUnlockVirtualMemory(v4, &v7, &v6, 1u);
}
