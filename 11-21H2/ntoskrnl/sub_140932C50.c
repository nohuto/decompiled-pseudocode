/*
 * XREFs of sub_140932C50 @ 0x140932C50
 * Callers:
 *     sub_140546FE0 @ 0x140546FE0 (sub_140546FE0.c)
 * Callees:
 *     sub_14025E490 @ 0x14025E490 (sub_14025E490.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140932C50(int a1, __int64 a2)
{
  _DWORD *Pool2; // rax
  _DWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  struct _MDL *v8; // r14
  int v9; // edi
  __int64 *v10[10]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v11[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v12[14]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v11, 0, 0x48uLL);
  memset(v12, 0, 0x68uLL);
  memset(v10, 0, 0x48uLL);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 280LL, 1416850774LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v7 = *(_QWORD *)(qword_140D068D0 + 136);
  *Pool2 = a1;
  v8 = (struct _MDL *)(v7 - 384);
  Pool2[1] = *(unsigned __int8 *)(v7 + 209) | (*(unsigned __int8 *)(v7 + 208) << 8);
  if ( sub_14025E490() )
  {
    *((_QWORD *)v5 + 4) = *(_QWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 3720LL);
    *((_QWORD *)v5 + 5) = *(_QWORD *)(*(_QWORD *)(qword_140D068D0 + 240) + 3728LL);
    *((PHYSICAL_ADDRESS *)v5 + 6) = MmGetPhysicalAddress(*(PVOID *)(*(_QWORD *)(qword_140D068D0 + 240) + 3728LL));
  }
  *(_OWORD *)(v5 + 14) = *(_OWORD *)a2;
  *(_OWORD *)(v5 + 18) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v5 + 22) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v5 + 26) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v5 + 30) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(v5 + 34) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(v5 + 38) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(v5 + 42) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(v5 + 46) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(v5 + 50) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(v5 + 54) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(v5 + 58) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(v5 + 62) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(v5 + 66) = *(_OWORD *)(a2 + 208);
  result = sub_1403A0F08((__int64)v11, v8, 0xC080u, 2, 2u);
  if ( (int)result >= 0 )
  {
    *((__int64 **)v5 + 1) = v11[0];
    *((__int64 **)v5 + 2) = v11[7];
    *((PHYSICAL_ADDRESS *)v5 + 3) = MmGetPhysicalAddress(*(PVOID *)(a2 + 176));
    v9 = sub_1403A0F08((__int64)v10, (struct _MDL *)v5, 0x118u, 0, 0);
    if ( v9 >= 0 )
    {
      v12[1] = v10[0];
      v12[2] = v10[7];
      v9 = sub_140358A20(2u, 2, 0, (__int64)v12);
      sub_1403A0EB4(v10);
    }
    sub_1403A0EB4(v11);
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)v9;
  }
  return result;
}
