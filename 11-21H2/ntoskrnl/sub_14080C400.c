/*
 * XREFs of sub_14080C400 @ 0x14080C400
 * Callers:
 *     sub_1405A29F8 @ 0x1405A29F8 (sub_1405A29F8.c)
 *     sub_1405A40C4 @ 0x1405A40C4 (sub_1405A40C4.c)
 *     sub_14080C354 @ 0x14080C354 (sub_14080C354.c)
 *     sub_140970D2C @ 0x140970D2C (sub_140970D2C.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140972700 @ 0x140972700 (sub_140972700.c)
 *     sub_1409779A4 @ 0x1409779A4 (sub_1409779A4.c)
 * Callees:
 *     sub_140256158 @ 0x140256158 (sub_140256158.c)
 *     RtlFindSetBitsEx @ 0x14030ACF0 (RtlFindSetBitsEx.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1403A147C @ 0x1403A147C (sub_1403A147C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14080C400(_RTL_BITMAP_EX *a1)
{
  PULONG64 Buffer; // rcx
  PULONG64 v3; // rcx
  PULONG64 v4; // rcx
  ULONG64 SizeOfBitMap; // rdi
  __int64 v6; // r14
  ULONG64 v7; // r8
  ULONG64 SetBits; // rax
  unsigned __int64 v9; // rsi

  Buffer = a1[3].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    a1[3].Buffer = 0LL;
  }
  v3 = a1[4].Buffer;
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[4].Buffer = 0LL;
  }
  v4 = a1[5].Buffer;
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[5].Buffer = 0LL;
  }
  if ( a1[2].Buffer )
  {
    SizeOfBitMap = a1->SizeOfBitMap;
    if ( (a1[6].SizeOfBitMap & 1) != 0 )
      sub_1403A147C();
    v6 = sub_140313C70(*(_QWORD *)(SizeOfBitMap + 48));
    v7 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(a1 + 2, 1uLL, v7);
      v9 = SetBits;
      if ( SetBits == -1LL )
        break;
      sub_140256158(v6 + 8 * SetBits, v6 + 8 * SetBits, (LODWORD(a1[6].SizeOfBitMap) >> 1) & 1);
      v7 = v9;
      _bittestandreset64((signed __int64 *)a1[2].Buffer, v9);
    }
    ExFreePoolWithTag(a1[2].Buffer, 0);
    a1[2].Buffer = 0LL;
  }
}
