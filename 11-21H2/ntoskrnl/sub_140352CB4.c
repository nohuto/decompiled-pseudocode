/*
 * XREFs of sub_140352CB4 @ 0x140352CB4
 * Callers:
 *     sub_1402CFF00 @ 0x1402CFF00 (sub_1402CFF00.c)
 *     sub_1403525F0 @ 0x1403525F0 (sub_1403525F0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140352CB4(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
  {
    sub_14020D8D0(*(_QWORD *)(a1 + 48), v1);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  sub_1402B0CE0(*(_QWORD *)(a1 + 48), 2u);
  result = (unsigned int)dword_140D06B08;
  v4 = *(unsigned __int8 *)(a1 + 76);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
