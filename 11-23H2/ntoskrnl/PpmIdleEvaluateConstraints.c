/*
 * XREFs of PpmIdleEvaluateConstraints @ 0x1402C2718
 * Callers:
 *     PpmIdlePrepare @ 0x1402C25C0 (PpmIdlePrepare.c)
 * Callees:
 *     PoAllProcessorsDeepIdle @ 0x1402C1DB0 (PoAllProcessorsDeepIdle.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 */

LARGE_INTEGER __fastcall PpmIdleEvaluateConstraints(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v2; // rsi
  int v4; // eax
  char v5; // al
  LARGE_INTEGER v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 33600);
  v7.QuadPart = 0LL;
  *a2 = RtlGetInterruptTimePrecise(&v7);
  *(LARGE_INTEGER *)(v2 + 696) = v7;
  *(_QWORD *)(v2 + 704) = *(_QWORD *)(a1 + 33624) + *(_QWORD *)(a1 + 33808);
  *(_BYTE *)(v2 + 738) = *(_BYTE *)(a1 + 34060);
  *(_BYTE *)(v2 + 736) = *(_BYTE *)(a1 + 33664);
  *(_BYTE *)(v2 + 737) = *(_BYTE *)(a1 + 33665);
  *(_BYTE *)(v2 + 739) = 1;
  if ( *(_BYTE *)(a1 + 33) && PoAllProcessorsDeepIdle() )
  {
    *(_BYTE *)(v2 + 740) = 1;
    *(_WORD *)(v2 + 56) |= 0x80u;
  }
  else
  {
    *(_BYTE *)(v2 + 740) = 0;
  }
  if ( *(_BYTE *)(v2 + 1) )
  {
    *(_WORD *)(v2 + 56) |= 0x100u;
    v4 = *(_DWORD *)(v2 + 36);
  }
  else
  {
    v4 = -1;
  }
  *(_DWORD *)(v2 + 728) = v4;
  if ( PpmIdleRespectIdleStateMax )
  {
    v5 = BYTE6(PpmCurrentProfile[55 * dword_140C3D96C + 24]);
    *(_BYTE *)(v2 + 742) = v5;
    if ( v5 )
      *(_WORD *)(v2 + 56) |= 0x4000u;
  }
  else
  {
    *(_BYTE *)(v2 + 742) = 0;
  }
  return v7;
}
