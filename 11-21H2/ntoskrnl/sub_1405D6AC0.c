/*
 * XREFs of sub_1405D6AC0 @ 0x1405D6AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1405CCECC @ 0x1405CCECC (sub_1405CCECC.c)
 *     sub_1405CDBB4 @ 0x1405CDBB4 (sub_1405CDBB4.c)
 *     sub_1405D7930 @ 0x1405D7930 (sub_1405D7930.c)
 *     sub_1405D7A4C @ 0x1405D7A4C (sub_1405D7A4C.c)
 *     sub_1407F287C @ 0x1407F287C (sub_1407F287C.c)
 *     sub_140995D54 @ 0x140995D54 (sub_140995D54.c)
 *     sub_140995E20 @ 0x140995E20 (sub_140995E20.c)
 *     sub_14099CFAC @ 0x14099CFAC (sub_14099CFAC.c)
 */

__int64 __fastcall sub_1405D6AC0(int a1, unsigned __int8 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r8

  v4 = 0;
  dword_140D04884 = a1;
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = (unsigned int)(v6 - 4);
      if ( (_DWORD)v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
            sub_140995E20();
        }
        else if ( a2 )
        {
          qword_140C54188 = KeQueryPerformanceCounter(0LL).QuadPart;
          sub_1405D7930(3LL, 0LL, v9);
          if ( (dword_140C23CB0 & 2) != 0 )
            sub_1405CDBB4();
        }
        else
        {
          qword_140C54190 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C54188;
          if ( (dword_140C23CB0 & 2) != 0 )
            sub_1405CCECC();
          sub_1405D7A4C(3LL, 0LL, v10);
        }
      }
      else
      {
        LODWORD(v7) = a2;
        return (unsigned int)sub_140995D54(v7, a3, a4);
      }
    }
    else
    {
      LODWORD(v6) = a2 != 0;
      sub_14099CFAC(v6);
    }
  }
  else
  {
    sub_1407F287C();
  }
  return v4;
}
