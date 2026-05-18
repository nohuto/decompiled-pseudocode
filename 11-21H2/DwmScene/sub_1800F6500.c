/*
 * XREFs of sub_1800F6500 @ 0x1800F6500
 * Callers:
 *     sub_1800F65D4 @ 0x1800F65D4 (sub_1800F65D4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800F8034 @ 0x1800F8034 (sub_1800F8034.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F6500(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // xmm2_8
  char **v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-58h] BYREF
  char *v10; // [rsp+30h] [rbp-48h]
  char *v11[3]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-28h]

  v4 = (char **)a2;
  v10 = a2;
  v5 = a1 + 64;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(char **)a2;
  sub_18001FB6C((__int64 *)v11, a2, a3);
  v6 = *(_QWORD *)sub_1800F8034(v5, v9, v11);
  *(_QWORD *)(v6 + 96) = v3;
  *(_DWORD *)(v6 + 48) = 2;
  if ( v12 >= 8 )
    sub_180010884(v11[0], 2 * v12 + 2);
  v7 = (unsigned __int64)v4[3];
  if ( v7 >= 8 )
    sub_180010884(*v4, 2 * v7 + 2);
  result = 0LL;
  v4[2] = 0LL;
  v4[3] = (char *)7;
  *(_WORD *)v4 = 0;
  return result;
}
