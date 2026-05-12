/*
 * XREFs of sub_1C002212C @ 0x1C002212C
 * Callers:
 *     sub_1C00220D8 @ 0x1C00220D8 (sub_1C00220D8.c)
 * Callees:
 *     sub_1C0022AA4 @ 0x1C0022AA4 (sub_1C0022AA4.c)
 *     sub_1C006AEE4 @ 0x1C006AEE4 (sub_1C006AEE4.c)
 *     sub_1C00A4654 @ 0x1C00A4654 (sub_1C00A4654.c)
 */

__int64 __fastcall sub_1C002212C(__int64 a1)
{
  int v1; // esi
  bool v3; // zf
  __int64 result; // rax

  v1 = 0;
  v3 = dword_1C0093400 == 0;
  *(_QWORD *)(a1 + 2048) = 0LL;
  *(_QWORD *)(a1 + 2072) = 0LL;
  *(_QWORD *)(a1 + 2080) = 0LL;
  *(_QWORD *)(a1 + 2112) = 1LL;
  *(_QWORD *)(a1 + 2056) = 0LL;
  *(_QWORD *)(a1 + 2064) = 0LL;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  *(_QWORD *)(a1 + 2104) = 0LL;
  *(_DWORD *)(a1 + 2120) = 0;
  *(_QWORD *)(a1 + 2128) = 0LL;
  *(_QWORD *)(a1 + 2136) = 0LL;
  *(_QWORD *)(a1 + 2144) = 0LL;
  if ( !v3 )
  {
    if ( (unsigned int)sub_1C00A4654() )
    {
      if ( (byte_1C0093A06 & 4) != 0 )
        sub_1C006AEE4(
          a1 + 186,
          a1 + 169,
          a1 + 160,
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          a1 + 2024,
          *(_QWORD *)(a1 + 24) + 5000LL,
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4656LL),
          a1 + 160,
          a1 + 169,
          a1 + 186,
          *(_BYTE *)(a1 + 450) & 1,
          (__int64)L"Initializing performance telemetry failed.");
      sub_1C0022AA4(a1);
    }
    else
    {
      v1 = 1;
    }
  }
  result = 2292LL;
  *(_DWORD *)(a1 + 2292) = v1;
  return result;
}
