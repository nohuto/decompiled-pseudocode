/*
 * XREFs of sub_1409E1DB8 @ 0x1409E1DB8
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     sub_1409E01E4 @ 0x1409E01E4 (sub_1409E01E4.c)
 */

__int64 __fastcall sub_1409E1DB8(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r9d
  __int64 i; // r8
  signed __int32 v9[14]; // [rsp+0h] [rbp-38h] BYREF

  v6 = 0;
  if ( a3 && a3 <= 4 )
  {
    if ( *(_QWORD *)(a1 + 1016) || (v6 = sub_1409E01E4(a1)) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL) )
        v6 = -1073741053;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v9[8] = i;
        if ( (unsigned int)i >= a3 )
          break;
        *(_WORD *)(*(_QWORD *)(a1 + 1016) + 2 * i + 12) = *(_WORD *)(a2 + 4 * i);
      }
      _InterlockedOr(v9, 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL) = a3;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
