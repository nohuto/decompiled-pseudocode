/*
 * XREFs of sub_180025948 @ 0x180025948
 * Callers:
 *     sub_180027780 @ 0x180027780 (sub_180027780.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180027634 @ 0x180027634 (sub_180027634.c)
 */

__int64 __fastcall sub_180025948(__int64 a1, __int128 *a2, __int64 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-38h] BYREF

  *(_QWORD *)&v9 = a1;
  v5 = sub_180017648(v10, a3);
  v9 = *a2;
  v6 = (_QWORD *)sub_180027634(v11, &v9, v5);
  if ( v6[3] >= 0x10uLL )
    v6 = (_QWORD *)*v6;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = &std::runtime_error::`vftable';
  sub_180011B24((__int64)v11);
  v7 = *a2;
  *(_QWORD *)a1 = &std::_System_error::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 16) = v7;
  return result;
}
