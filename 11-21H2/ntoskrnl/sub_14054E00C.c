/*
 * XREFs of sub_14054E00C @ 0x14054E00C
 * Callers:
 *     sub_140A59A7C @ 0x140A59A7C (sub_140A59A7C.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14054E00C(unsigned int a1)
{
  __int64 Pool2; // rbx
  __int64 v4; // rax
  int v5; // edi
  __int64 *v6[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v7[14]; // [rsp+80h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  memset(v6, 0, 0x48uLL);
  Pool2 = ExAllocatePool2(64LL, 16LL, 1416850774LL);
  if ( !Pool2 )
    return 3221225626LL;
  v4 = sub_140348800(a1);
  *(_DWORD *)Pool2 = a1;
  *(PHYSICAL_ADDRESS *)(Pool2 + 8) = MmGetPhysicalAddress(*(PVOID *)(v4 - 328));
  v5 = sub_1403A0F08((__int64)v6, (struct _MDL *)Pool2, 0x10u, 0, 0);
  if ( v5 >= 0 )
  {
    v7[1] = v6[0];
    v7[2] = v6[7];
    v5 = sub_140358A20(2u, 3, 0, (__int64)v7);
    sub_1403A0EB4(v6);
  }
  ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v5;
}
