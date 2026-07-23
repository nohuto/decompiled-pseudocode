/*
 * XREFs of sub_14020B76C @ 0x14020B76C
 * Callers:
 *     sub_14068DB00 @ 0x14068DB00 (sub_14068DB00.c)
 * Callees:
 *     ZwLockVirtualMemory @ 0x14041D9E0 (ZwLockVirtualMemory.c)
 */

NTSTATUS __fastcall sub_14020B76C(ULONG_PTR a1, void **a2, void *a3, ULONG_PTR a4)
{
  void *v4; // rcx
  ULONG_PTR v6; // [rsp+30h] [rbp+8h] BYREF
  PVOID v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  v4 = *a2;
  v7 = a3;
  v6 = a4;
  return ZwLockVirtualMemory(v4, &v7, &v6, 1u);
}
