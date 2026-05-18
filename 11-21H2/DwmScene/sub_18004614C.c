/*
 * XREFs of sub_18004614C @ 0x18004614C
 * Callers:
 *     sub_1800304D8 @ 0x1800304D8 (sub_1800304D8.c)
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 *     sub_180045DF4 @ 0x180045DF4 (sub_180045DF4.c)
 *     sub_180045FB4 @ 0x180045FB4 (sub_180045FB4.c)
 *     sub_18004607C @ 0x18004607C (sub_18004607C.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_180047028 @ 0x180047028 (sub_180047028.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_1800705E8 @ 0x1800705E8 (sub_1800705E8.c)
 *     sub_180074808 @ 0x180074808 (sub_180074808.c)
 *     sub_18009DA30 @ 0x18009DA30 (sub_18009DA30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_180043FDC @ 0x180043FDC (sub_180043FDC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004614C(__int64 a1, _QWORD *a2, char *a3)
{
  __int64 *v6; // rdi
  char *v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rcx
  __int128 *v10; // rax
  char v11; // bl
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int128 v15; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-40h] BYREF

  v16[0] = a3;
  sub_18002C73C(a1 + 16);
  v6 = *(__int64 **)(a1 + 88);
  v7 = (char *)v6[1];
  v8 = v6;
  if ( !v7[25] )
  {
    do
    {
      if ( (unsigned __int8)sub_180043FDC(v7 + 32, a3) )
      {
        v7 = (char *)*((_QWORD *)v7 + 2);
      }
      else
      {
        v6 = (__int64 *)v7;
        v7 = *(char **)v7;
      }
    }
    while ( !v7[25] );
    v8 = *(__int64 **)(a1 + 88);
  }
  if ( *((_BYTE *)v6 + 25) || (unsigned __int8)sub_180043FDC(a3, v6 + 4) || v6 == v8 )
  {
    v15 = 0LL;
    v10 = &v15;
    v11 = 5;
  }
  else
  {
    v9 = v6[9];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = v6[9];
    }
    v16[0] = v6[8];
    v16[1] = v9;
    v10 = (__int128 *)v16;
    v11 = 6;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v12 = *((_QWORD *)v10 + 1);
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  *a2 = *(_QWORD *)v10;
  a2[1] = v12;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    sub_180010910((__int64)v16);
  }
  if ( (v11 & 1) != 0 )
    sub_180010910((__int64)&v15);
  v13 = *((_QWORD *)a3 + 3);
  if ( v13 >= 8 )
    sub_180010884(*(char **)a3, 2 * v13 + 2);
  *((_QWORD *)a3 + 2) = 0LL;
  *((_QWORD *)a3 + 3) = 7LL;
  *(_WORD *)a3 = 0;
  return a2;
}
