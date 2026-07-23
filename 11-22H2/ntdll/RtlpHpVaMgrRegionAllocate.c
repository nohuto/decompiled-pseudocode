/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x1800815A4
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x18004A920 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x180047988 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18004B09C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18008163C (RtlpHpVaMgrAllocAligned.c)
 */

_BYTE *__fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  __int16 v2; // ax
  _BYTE *v3; // rax
  PVOID v4; // rcx
  _BYTE *v5; // rdi
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+10h] BYREF

  RegionSize = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  BaseAddress = (PVOID)RtlpHpVaMgrAllocAligned(a1, &RegionSize, RegionSize);
  if ( !BaseAddress )
    return 0LL;
  v2 = *(_WORD *)(a1 + 40);
  v8 = 0LL;
  WORD4(v8) = v2;
  v7 = 0LL;
  v3 = RtlpHpVaMgrRangeCreate(a1, (__int64)BaseAddress, (unsigned __int16 *)&v7);
  v4 = BaseAddress;
  v5 = v3;
  if ( v3 )
    v4 = 0LL;
  BaseAddress = v4;
  if ( v4 )
    RtlpHpEnvFreeVA(&BaseAddress, &RegionSize, 0x8000, (*(unsigned __int8 *)(a1 + 46) >> 1) & 7, *(_QWORD *)(a1 + 32));
  return v5;
}
