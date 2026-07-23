/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x18008163C
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x18004A920 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1800815A4 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1800475D4 (RtlpHpEnvAllocVA.c)
 */

PVOID __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, ULONG_PTR *a2, __int64 a3)
{
  unsigned int v3; // r11d
  int v5; // r8d
  unsigned int v6; // r10d
  int v7; // r9d
  int v9; // [rsp+28h] [rbp-30h]
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 46);
  BaseAddress = 0LL;
  v5 = 0x2000;
  v6 = (v3 >> 1) & 7;
  if ( v6 >= 3 )
  {
    if ( v6 < 5 )
    {
      v5 = 536883200;
      if ( v6 != 4 )
        v5 = 536879104;
    }
  }
  else if ( v6 == 2 )
  {
    v5 = 541073408;
  }
  v7 = v5 | 0x40000;
  if ( (v3 & 0x10) == 0 )
    v7 = v5;
  RtlpHpEnvAllocVA(&BaseAddress, a2, a3, v7, 4u, v9, v6, *(_QWORD *)(a1 + 32));
  return BaseAddress;
}
