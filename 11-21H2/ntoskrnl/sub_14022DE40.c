/*
 * XREFs of sub_14022DE40 @ 0x14022DE40
 * Callers:
 *     sub_14022DBD4 @ 0x14022DBD4 (sub_14022DBD4.c)
 *     sub_140338DB0 @ 0x140338DB0 (sub_140338DB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14022DE40(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  for ( result = *(_QWORD *)(a1 + 16); result != 0x3FFFFFFFFFLL; *(_BYTE *)(v2 + 35) |= 8u )
  {
    v2 = 48 * result - 0x220000000000LL;
    result = *(_QWORD *)v2 & 0xFFFFFFFFFFLL;
  }
  return result;
}
