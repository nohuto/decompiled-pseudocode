/*
 * XREFs of sub_1403CC0F0 @ 0x1403CC0F0
 * Callers:
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_140B1AFD8 @ 0x140B1AFD8 (sub_140B1AFD8.c)
 *     sub_140B51A8C @ 0x140B51A8C (sub_140B51A8C.c)
 * Callees:
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403CC0F0(__int64 a1)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v3 = (unsigned __int8)sub_1402F2700(a1);
  sub_1402C6EB0(v2, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v7 = ((unsigned int)result & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= result;
        if ( v7 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
