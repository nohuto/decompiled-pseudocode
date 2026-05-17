/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x180056194
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x180055CE8 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeCreate @ 0x180056224 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18005687C (RtlpHpVaMgrAllocAligned.c)
 *     ZwFreeVirtualMemory @ 0x1800A4430 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v9 = RtlpHpVaMgrAllocAligned(a1, &v10, v10);
  if ( !v9 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 40);
  v8 = 0LL;
  WORD4(v8) = v2;
  v7 = 0LL;
  v3 = RtlpHpVaMgrRangeCreate(a1, v9, &v7);
  v4 = v9;
  v5 = v3;
  if ( v3 )
    v4 = 0LL;
  v9 = v4;
  if ( v4 )
    ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
  return v5;
}
