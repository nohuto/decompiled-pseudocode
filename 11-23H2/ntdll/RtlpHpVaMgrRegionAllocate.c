/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x180081C14
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x18004A7C0 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x180047828 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18004AF3C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x180081CAC (RtlpHpVaMgrAllocAligned.c)
 */

_BYTE *__fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int16 v2; // ax
  _BYTE *v3; // rax
  __int64 v4; // rcx
  _BYTE *v5; // rdi
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v9 = RtlpHpVaMgrAllocAligned(a1, &v10, v10);
  if ( !v9 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 40);
  v8 = 0LL;
  WORD4(v8) = v2;
  v7 = 0LL;
  v3 = RtlpHpVaMgrRangeCreate(a1, v9, (unsigned __int16 *)&v7);
  v4 = v9;
  v5 = v3;
  if ( v3 )
    v4 = 0LL;
  v9 = v4;
  if ( v4 )
    RtlpHpEnvFreeVA((__int64)&v9, (__int64)&v10, 0x8000, (*(unsigned __int8 *)(a1 + 46) >> 1) & 7, *(_QWORD *)(a1 + 32));
  return v5;
}
