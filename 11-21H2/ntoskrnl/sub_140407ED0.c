/*
 * XREFs of sub_140407ED0 @ 0x140407ED0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140400EB4 @ 0x140400EB4 (sub_140400EB4.c)
 *     sub_140400F4C @ 0x140400F4C (sub_140400F4C.c)
 *     sub_140400F98 @ 0x140400F98 (sub_140400F98.c)
 *     sub_1404011D4 @ 0x1404011D4 (sub_1404011D4.c)
 *     sub_1404012B0 @ 0x1404012B0 (sub_1404012B0.c)
 *     sub_140401368 @ 0x140401368 (sub_140401368.c)
 */

__int64 __fastcall sub_140407ED0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r12
  __int64 v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v15; // [rsp+38h] [rbp-70h] BYREF
  __int128 v16; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+50h] [rbp-58h]

  v4 = (_DWORD *)a1[77];
  v17 = 0LL;
  v16 = 0LL;
  v8 = (unsigned int)sub_140401368((__int64)v4);
  v9 = &v15;
  v10 = 4LL;
  do
  {
    a3 += v8;
    *v9 = sub_140400F4C();
    a4 -= v8;
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = v15;
  sub_1404012B0(v4);
  sub_1404012B0(v4);
  v12 = *((_QWORD *)&v16 + 1);
  sub_1404012B0(v4);
  v13 = v17;
  sub_1404011D4(v4, a1[79]);
  sub_140400EB4(v4, v13);
  sub_1404011D4(v4, v13);
  sub_1404011D4(v4, v11);
  sub_1404011D4(v4, a1[80]);
  sub_1404011D4(v4, v12);
  sub_140400EB4(v4, v12);
  return sub_140400F98();
}
