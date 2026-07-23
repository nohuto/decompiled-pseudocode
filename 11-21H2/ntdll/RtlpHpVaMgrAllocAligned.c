/*
 * XREFs of RtlpHpVaMgrAllocAligned @ 0x18005687C
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x180055CE8 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180056194 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180022A74 (RtlpHpEnvAllocVA.c)
 */

PVOID __fastcall RtlpHpVaMgrAllocAligned(__int64 a1, ULONG_PTR *a2, __int64 a3)
{
  char v3; // r11
  int v4; // r10d
  int v5; // r9d
  int v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a1 + 46);
  v4 = 0x2000;
  BaseAddress = 0LL;
  if ( (v3 & 0xEu) >= 6 )
  {
    v4 = (v3 & 0xEu) < 8 ? 536879104 : 536883200;
  }
  else if ( (v3 & 0xE) == 4 )
  {
    v4 = 541073408;
  }
  v5 = v4 | 0x40000;
  if ( (v3 & 0x10) == 0 )
    v5 = v4;
  RtlpHpEnvAllocVA(&BaseAddress, a2, a3, v5, 4u, v7, v8, *(_QWORD *)(a1 + 32));
  return BaseAddress;
}
