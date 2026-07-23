/*
 * XREFs of sub_1405A9F00 @ 0x1405A9F00
 * Callers:
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_1405A828C @ 0x1405A828C (sub_1405A828C.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_140A6A948 @ 0x140A6A948 (sub_140A6A948.c)
 *     sub_140B5229C @ 0x140B5229C (sub_140B5229C.c)
 * Callees:
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405A9F00(ULONG_PTR a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  bool v7; // zf

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = (unsigned __int8)sub_1402F2700(v2);
  sub_140313CA0(v2, 0LL, 1);
  sub_1402C6EB0(a1, 256);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
