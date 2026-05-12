/*
 * XREFs of sub_1C005961C @ 0x1C005961C
 * Callers:
 *     sub_1C0059230 @ 0x1C0059230 (sub_1C0059230.c)
 *     sub_1C00592E8 @ 0x1C00592E8 (sub_1C00592E8.c)
 *     sub_1C00593B0 @ 0x1C00593B0 (sub_1C00593B0.c)
 *     sub_1C0059468 @ 0x1C0059468 (sub_1C0059468.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0056B08 @ 0x1C0056B08 (sub_1C0056B08.c)
 *     sub_1C005BE2C @ 0x1C005BE2C (sub_1C005BE2C.c)
 */

__int64 __fastcall sub_1C005961C(PDEVICE_OBJECT DeviceObject, int a2, int a3, union _LARGE_INTEGER *a4, ULONG *a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rbx
  int v13; // esi
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v14[0]) = 0;
  memset_0(a4, 0, *a5);
  v9 = sub_1C0007CF4(64LL, 64LL, 1128358226LL, (__int64)DeviceObject);
  v11 = (void *)v9;
  if ( !v9 )
    return 3221225626LL;
  sub_1C0056B08(v9, v10, a2, a3);
  v13 = sub_1C005BE2C(DeviceObject, v11, 0x40u, a4, *a5, (__int64)v14);
  if ( v13 >= 0 )
    *a5 = v14[0];
  ExFreePoolWithTag(v11, 0x43416152u);
  return (unsigned int)v13;
}
