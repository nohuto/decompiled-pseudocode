/*
 * XREFs of RtlInvertRangeListEx @ 0x140839EF0
 * Callers:
 *     RtlInvertRangeList @ 0x140839400 (RtlInvertRangeList.c)
 *     sub_14090B3B0 @ 0x14090B3B0 (sub_14090B3B0.c)
 * Callees:
 *     RtlAddRange @ 0x14083A010 (RtlAddRange.c)
 */

__int64 __fastcall RtlInvertRangeListEx(int a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // rax
  __int64 result; // rax

  v6 = a4;
  v7 = 0LL;
  if ( *(_DWORD *)(a2 + 20) )
  {
    v10 = (unsigned __int64 *)(*(_QWORD *)a2 - 40LL);
    if ( a2 == *(_QWORD *)a2 )
    {
      return 0LL;
    }
    else
    {
      while ( 1 )
      {
        if ( *v10 > v7 )
        {
          LOBYTE(a4) = a3;
          result = RtlAddRange(a1, v7, (unsigned int)*v10 - 1, a4, 0, v6, a5);
          if ( (int)result < 0 )
            break;
        }
        v11 = v10[5];
        v7 = v10[1] + 1;
        v10 = (unsigned __int64 *)(v11 - 40);
        if ( a2 == v11 )
        {
          if ( v7 )
          {
            LOBYTE(a4) = a3;
            result = RtlAddRange(a1, v7, -1, a4, 0, v6, a5);
            if ( (int)result < 0 )
              return result;
          }
          return 0LL;
        }
      }
    }
  }
  else
  {
    LOBYTE(a4) = a3;
    return RtlAddRange(a1, 0, -1, a4, 0, v6, a5);
  }
  return result;
}
