/*
 * XREFs of HvlpStartVirtualProcessor @ 0x140542A34
 * Callers:
 *     HvlHalStartVirtualProcessor @ 0x140544D10 (HvlHalStartVirtualProcessor.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD540 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x140540E70 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140541AC0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartVirtualProcessor(ULONG a1, _OWORD *a2)
{
  PHYSICAL_ADDRESS *v4; // rax
  __int128 v5; // xmm0
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v4 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 240LL);
  v4->QuadPart = -1LL;
  v4[1].HighPart = 0;
  v4[1].LowPart = a1;
  v4 += 2;
  *(_OWORD *)&v4->LowPart = *a2;
  *(_OWORD *)&v4[2].LowPart = a2[1];
  *(_OWORD *)&v4[4].LowPart = a2[2];
  *(_OWORD *)&v4[6].LowPart = a2[3];
  *(_OWORD *)&v4[8].LowPart = a2[4];
  *(_OWORD *)&v4[10].LowPart = a2[5];
  *(_OWORD *)&v4[12].LowPart = a2[6];
  v4 += 16;
  v5 = a2[7];
  a2 += 8;
  *(_OWORD *)&v4[-2].LowPart = v5;
  *(_OWORD *)&v4->LowPart = *a2;
  *(_OWORD *)&v4[2].LowPart = a2[1];
  *(_OWORD *)&v4[4].LowPart = a2[2];
  *(_OWORD *)&v4[6].LowPart = a2[3];
  *(_OWORD *)&v4[8].LowPart = a2[4];
  *(_OWORD *)&v4[10].LowPart = a2[5];
  v6 = (unsigned __int16)HvcallInitiateHypercall(153) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v8);
  return v6;
}
