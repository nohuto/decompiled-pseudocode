/*
 * XREFs of sub_14025D494 @ 0x14025D494
 * Callers:
 *     sub_14025D410 @ 0x14025D410 (sub_14025D410.c)
 *     sub_1405BAEEC @ 0x1405BAEEC (sub_1405BAEEC.c)
 *     sub_1406C2718 @ 0x1406C2718 (sub_1406C2718.c)
 *     sub_140973418 @ 0x140973418 (sub_140973418.c)
 *     sub_140980D40 @ 0x140980D40 (sub_140980D40.c)
 * Callees:
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025D494(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  bool v6; // zf
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = sub_140317A10(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v1 = 48 * (((unsigned __int64)sub_140317A10(&v7) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v2 = (unsigned __int8)sub_1402F2700(v1);
  sub_140336AD8(v1);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = ((unsigned int)result & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= result;
        if ( v6 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
