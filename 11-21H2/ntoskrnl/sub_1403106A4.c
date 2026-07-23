/*
 * XREFs of sub_1403106A4 @ 0x1403106A4
 * Callers:
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_14030FC20 @ 0x14030FC20 (sub_14030FC20.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403106A4(__int64 a1, unsigned __int8 a2)
{
  signed __int32 v2; // eax
  unsigned __int64 v3; // rbx
  signed __int32 v4; // ett
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  bool v8; // zf

  v2 = *(_DWORD *)(a1 + 48);
  v3 = a2;
  do
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v2 & 0xFFFFFFFC, v2);
  }
  while ( v4 != v2 );
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && a2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << (a2 + 1));
        v8 = ((unsigned int)result & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
