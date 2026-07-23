/*
 * XREFs of sub_14020B57C @ 0x14020B57C
 * Callers:
 *     sub_14068DA14 @ 0x14068DA14 (sub_14068DA14.c)
 *     sub_14068DB00 @ 0x14068DB00 (sub_14068DB00.c)
 *     sub_14068DD88 @ 0x14068DD88 (sub_14068DD88.c)
 *     sub_14068DE2C @ 0x14068DE2C (sub_14068DE2C.c)
 *     sub_14068DFF0 @ 0x14068DFF0 (sub_14068DFF0.c)
 *     sub_14068ED70 @ 0x14068ED70 (sub_14068ED70.c)
 *     sub_14080C508 @ 0x14080C508 (sub_14080C508.c)
 *     sub_14083D6A4 @ 0x14083D6A4 (sub_14083D6A4.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x14041C160 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall sub_14020B57C(ULONG_PTR a1, void **a2, void *a3, ULONG_PTR a4, ULONG NewProtect, ULONG *a6)
{
  void *v6; // rcx
  ULONG_PTR v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, NewProtect, a6);
}
