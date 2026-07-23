/*
 * XREFs of sub_1406C1694 @ 0x1406C1694
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     sub_1406C16F8 @ 0x1406C16F8 (sub_1406C16F8.c)
 *     sub_14071EE50 @ 0x14071EE50 (sub_14071EE50.c)
 *     sub_140720F74 @ 0x140720F74 (sub_140720F74.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

__int64 __fastcall sub_1406C1694(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (*(_DWORD *)(a2 + 184) & 0x400000) == 0 )
  {
    while ( (int)sub_1406C16F8(a1, (unsigned int)(a4 != 0) + 1) < 0 )
    {
      if ( (unsigned __int8)sub_14071EE50(*(_QWORD *)(a1 + 8)) )
      {
        a4 = 1;
      }
      else
      {
        sub_140AB4300(*(_QWORD *)(a1 + 8));
        sub_1407C0854(*(_QWORD *)(a1 + 8));
        a4 = 1;
        if ( (unsigned __int8)sub_140720F74(a5, a3) )
          return (unsigned int)-1073741444;
      }
    }
  }
  return v5;
}
