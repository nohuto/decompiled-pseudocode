/*
 * XREFs of sub_1800F6860 @ 0x1800F6860
 * Callers:
 *     sub_1800F69A0 @ 0x1800F69A0 (sub_1800F69A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_18003372C @ 0x18003372C (sub_18003372C.c)
 *     sub_1800F8034 @ 0x1800F8034 (sub_1800F8034.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800F6860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // r8
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _BYTE v13[16]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v14[6]; // [rsp+38h] [rbp-80h] BYREF
  char *v15[3]; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+80h] [rbp-38h]

  v4 = a2;
  v14[4] = a2;
  v14[5] = a3;
  v5 = a1 + 64;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    a2 = *(_QWORD *)a2;
  sub_18001FB6C((__int64 *)v15, (_WORD *)a2, a3);
  v6 = *(_QWORD *)sub_1800F8034(v5, v13, v15);
  v7 = sub_1800129F4(v14, a3);
  result = (__int64)sub_18003372C((__int64 *)(v6 + 56), v7, v8);
  *(_DWORD *)(v6 + 48) = 0;
  v10 = v7[3];
  if ( v10 >= 8 )
    result = sub_180010884((char *)*v7, 2 * v10 + 2);
  v7[2] = 0LL;
  v7[3] = 7LL;
  *(_WORD *)v7 = 0;
  if ( v16 >= 8 )
    result = sub_180010884(v15[0], 2 * v16 + 2);
  v11 = *(_QWORD *)(v4 + 24);
  if ( v11 >= 8 )
    result = sub_180010884(*(char **)v4, 2 * v11 + 2);
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 7LL;
  *(_WORD *)v4 = 0;
  v12 = *(_QWORD *)(a3 + 24);
  if ( v12 >= 8 )
    result = sub_180010884(*(char **)a3, 2 * v12 + 2);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  return result;
}
