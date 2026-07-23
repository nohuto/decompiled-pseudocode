/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x1403651C8
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x14031015C (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x1402121E0 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrAllocAligned @ 0x140310554 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140310624 (RtlpHpVaMgrRangeCreate.c)
 */

_BYTE *__fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int16 v3; // ax
  _BYTE *v4; // rbx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h]
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v8 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v2 = RtlpHpVaMgrAllocAligned(a1, (__int64 *)&v8, v8);
  if ( !v2 )
    return 0LL;
  v3 = *(_WORD *)(a1 + 40);
  v7 = 0LL;
  WORD4(v7) = v3;
  v6 = 0LL;
  v4 = RtlpHpVaMgrRangeCreate(a1, v2, (__int64)&v6);
  if ( v4 )
    v2 = 0LL;
  v9 = v2;
  if ( v2 )
    RtlpHpEnvFreeVA(&v9, &v8, 0x8000LL);
  return v4;
}
