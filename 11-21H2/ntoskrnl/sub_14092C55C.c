/*
 * XREFs of sub_14092C55C @ 0x14092C55C
 * Callers:
 *     sub_14092AC5C @ 0x14092AC5C (sub_14092AC5C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14092C55C(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 (__fastcall **a4)(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6))
{
  PVOID PoolWithTag; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6F98uLL, 0x4D574454u);
  *(_QWORD *)(a1 + 32) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x6F98uLL);
    *(_DWORD *)(a1 + 40) = 0;
  }
  *a4 = sub_14092C440;
  a4[2] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))sub_140540BD0;
  a4[1] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))sub_14092C610;
  a4[3] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))sub_1407F4DD0;
  a4[4] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))sub_1407F4DA0;
  a4[5] = (__int64 (__fastcall *)(__int64, int, __int64, __int64, __int64, __int64))sub_14092C680;
  return 0LL;
}
