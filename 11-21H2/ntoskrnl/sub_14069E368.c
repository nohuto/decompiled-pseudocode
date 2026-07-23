/*
 * XREFs of sub_14069E368 @ 0x14069E368
 * Callers:
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 * Callees:
 *     sub_14069E3E0 @ 0x14069E3E0 (sub_14069E3E0.c)
 *     sub_14069FB88 @ 0x14069FB88 (sub_14069FB88.c)
 *     sub_14071BC64 @ 0x14071BC64 (sub_14071BC64.c)
 *     sub_14071C0FC @ 0x14071C0FC (sub_14071C0FC.c)
 */

__int64 __fastcall sub_14069E368(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi

  v2 = *(_QWORD *)(a1 + 32);
  sub_14071BC64(a1);
  if ( a2 && (v5 = sub_14069FB88(v2, a2), v5 < 0) )
  {
    sub_14071C0FC(a1);
  }
  else
  {
    sub_14069E3E0(a1, 2LL);
    *(_WORD *)(a1 + 8) |= 0x20u;
    v5 = 0;
    *(_BYTE *)(v2 + 2944) = 1;
    *(_QWORD *)(v2 + 2936) = a1;
  }
  return (unsigned int)v5;
}
