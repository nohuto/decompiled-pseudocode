/*
 * XREFs of sub_180044A1C @ 0x180044A1C
 * Callers:
 *     sub_1800449A4 @ 0x1800449A4 (sub_1800449A4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_1800436E4 @ 0x1800436E4 (sub_1800436E4.c)
 *     sub_1800438A8 @ 0x1800438A8 (sub_1800438A8.c)
 *     sub_18007048C @ 0x18007048C (sub_18007048C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180044A1C(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  __int64 v15; // [rsp+58h] [rbp-8h]
  unsigned __int16 v17; // [rsp+88h] [rbp+28h] BYREF

  v17 = a2;
  *(_DWORD *)(*(_QWORD *)sub_1800436E4((__int64 *)(a1 + 200), (__int64)&v14, &v17) + 32LL) = 1;
  v6 = (_QWORD *)sub_180011D4C(a1 + 96, &v14);
  v7 = sub_1800438A8(&v12, v6);
  v9 = 0LL;
  v9 = *(_OWORD *)v7;
  *v7 = 0LL;
  v7[1] = 0LL;
  result = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64, __int128 *))sub_18007048C)(a4, v10, a3, &v9);
  if ( v11 )
    result = sub_180010530(v11);
  if ( v13 )
    result = sub_180010530(v13);
  if ( v15 )
    return sub_180010530(v15);
  return result;
}
