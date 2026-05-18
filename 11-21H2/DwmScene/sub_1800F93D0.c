/*
 * XREFs of sub_1800F93D0 @ 0x1800F93D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800F7508 @ 0x1800F7508 (sub_1800F7508.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F93D0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int128 v8; // [rsp+28h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-18h]

  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 7LL;
  LOWORD(v8) = 0;
  if ( (unsigned int)sub_1800F7508(a1, a3, (__int64)&v8) )
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)a4;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *(_QWORD *)(a4 + 24) = 7LL;
    *(_WORD *)a4 = 0;
    if ( *((_QWORD *)&v9 + 1) >= 8uLL )
    {
      sub_180010884((char *)v8, 2LL * *((_QWORD *)&v9 + 1) + 2);
      v6 = *(_QWORD *)(a4 + 24);
    }
    else
    {
      v6 = 7LL;
    }
    *(_QWORD *)&v9 = 0LL;
    *((_QWORD *)&v9 + 1) = 7LL;
    LOWORD(v8) = 0;
  }
  else
  {
    *(_OWORD *)a2 = v8;
    *(_OWORD *)(a2 + 16) = v9;
    *(_QWORD *)&v9 = 0LL;
    *((_QWORD *)&v9 + 1) = 7LL;
    LOWORD(v8) = 0;
    v6 = *(_QWORD *)(a4 + 24);
  }
  if ( v6 >= 8 )
    sub_180010884(*(char **)a4, 2 * v6 + 2);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 7LL;
  result = a2;
  *(_WORD *)a4 = 0;
  return result;
}
