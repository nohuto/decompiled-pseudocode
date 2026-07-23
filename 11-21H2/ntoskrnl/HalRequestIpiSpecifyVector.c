/*
 * XREFs of HalRequestIpiSpecifyVector @ 0x140300100
 * Callers:
 *     HalRequestClockInterrupt @ 0x14022F2D0 (HalRequestClockInterrupt.c)
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     sub_1402943C0 @ 0x1402943C0 (sub_1402943C0.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     sub_14051F9A8 @ 0x14051F9A8 (sub_14051F9A8.c)
 * Callees:
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 */

__int64 __fastcall HalRequestIpiSpecifyVector(int a1, _WORD *a2, unsigned int a3)
{
  int v4; // ecx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v6 = 0;
  v5 = 0LL;
  if ( !a1 )
  {
    if ( a2 && *a2 )
    {
      while ( !*(_QWORD *)&a2[4 * (unsigned __int16)a1 + 4] )
      {
        LOWORD(a1) = a1 + 1;
        if ( (unsigned __int16)a1 >= *a2 )
          return 3221225485LL;
      }
      LODWORD(v5) = 2;
      *((_QWORD *)&v5 + 1) = a2;
      return sub_1402ADD00((int *)&v5, a3);
    }
    return 3221225485LL;
  }
  if ( (unsigned int)(a1 - 1) > 1 )
    return 3221225485LL;
  v4 = a1 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      LODWORD(v5) = 3;
    return sub_1402ADD00((int *)&v5, a3);
  }
  LODWORD(v5) = 4;
  return sub_1402ADD00((int *)&v5, a3);
}
