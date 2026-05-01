/*
 * XREFs of sub_18001ADA8 @ 0x18001ADA8
 * Callers:
 *     ??1UMSFreeThreadProxy@details@Concurrency@@UEAA@XZ @ 0x18001ADD0 (--1UMSFreeThreadProxy@details@Concurrency@@UEAA@XZ.c)
 *     sub_18001AF50 @ 0x18001AF50 (sub_18001AF50.c)
 * Callees:
 *     sub_18001BC10 @ 0x18001BC10 (sub_18001BC10.c)
 */

__int64 __fastcall sub_18001ADA8(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return sub_18001BC10(2 * v1);
  return result;
}
