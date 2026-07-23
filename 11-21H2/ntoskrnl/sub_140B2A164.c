/*
 * XREFs of sub_140B2A164 @ 0x140B2A164
 * Callers:
 *     sub_140B2A068 @ 0x140B2A068 (sub_140B2A068.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     RtlSetAllBitsEx @ 0x1403D9CD0 (RtlSetAllBitsEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140B2A164(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // ecx

  result = (__int64)sub_1402828F0(66, 0x1000uLL, 0x20206D4Du);
  v5 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 24) = 0x4000LL;
    *(_QWORD *)(a1 + 32) = result;
    RtlSetAllBitsEx((_QWORD *)(a1 + 24));
    v6 = sub_140363220(1);
    _BitScanReverse(&v7, 0x4000u);
    *(_QWORD *)(a1 + 16) = v6 & (unsigned int)((1 << v7) - 1);
    *(_QWORD *)(a1 + 48) = v5 + 2048;
    *(_QWORD *)(a1 + 40) = 0x4000LL;
    memset((void *)(v5 + 2048), 0, 0x800uLL);
    *(_QWORD *)(a1 + 8) = a2;
    result = 1LL;
    _InterlockedExchange((volatile __int32 *)(a1 + 56), 0x4000);
  }
  return result;
}
