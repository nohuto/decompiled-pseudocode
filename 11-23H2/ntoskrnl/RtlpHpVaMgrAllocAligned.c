/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x140310554
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x14031015C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1403651C8 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402868B0 (RtlpHpEnvAllocVA.c)
 */

unsigned __int64 __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned int v3; // r11d
  int v5; // r8d
  unsigned int v6; // r10d
  int v7; // r9d
  int v9; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]
  unsigned __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 46);
  v11 = 0LL;
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
  RtlpHpEnvAllocVA(&v11, a2, a3, v7, 4, v9, v6, v10, *(unsigned __int8 *)(a1 + 45));
  return v11;
}
