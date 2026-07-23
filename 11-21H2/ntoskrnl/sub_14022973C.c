/*
 * XREFs of sub_14022973C @ 0x14022973C
 * Callers:
 *     sub_140229590 @ 0x140229590 (sub_140229590.c)
 * Callees:
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14022973C(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 *v5; // rdi
  __int64 *v6; // r14
  unsigned __int64 v7; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = 0LL;
  v5 = a1;
  if ( a1 )
  {
    do
    {
      v6 = (__int64 *)*v5;
      v7 = (unsigned __int8)sub_1402F2700(v5);
      *((_BYTE *)v5 + 34) = *((_BYTE *)v5 + 34) & 0xF8 | 6;
      if ( (unsigned int)sub_140273FD0(v5) == 3 )
        ++a2[1];
      _InterlockedAnd64(v5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= result;
            if ( v10 )
              result = sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      ++v3;
      v5 = v6;
    }
    while ( v6 );
  }
  a2[4] += v3;
  *a2 += v3;
  return result;
}
