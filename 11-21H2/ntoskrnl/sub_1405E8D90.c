/*
 * XREFs of sub_1405E8D90 @ 0x1405E8D90
 * Callers:
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

__int64 __fastcall sub_1405E8D90(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 2) == 0 && (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 136) = 0;
    *(_BYTE *)(a1 + 138) = 16;
    *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) |= sub_140363220(1);
    result = sub_140363220(1);
    *(_DWORD *)(a1 + 140) = (unsigned __int16)result;
  }
  return result;
}
