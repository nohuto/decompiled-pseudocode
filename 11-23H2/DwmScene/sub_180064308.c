/*
 * XREFs of sub_180064308 @ 0x180064308
 * Callers:
 *     sub_18006E6C0 @ 0x18006E6C0 (sub_18006E6C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_18001F810 @ 0x18001F810 (sub_18001F810.c)
 *     sub_18001FAFC @ 0x18001FAFC (sub_18001FAFC.c)
 *     sub_180063290 @ 0x180063290 (sub_180063290.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180064308(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  char v5; // bl
  _WORD *v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  _WORD *v9; // rdx
  __int64 v10; // r8
  char v11; // di
  __int64 v12; // rdi
  struct _Mtx_internal_imp_t *v13; // rbx
  _QWORD v15[2]; // [rsp+28h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-31h]
  unsigned __int64 v17; // [rsp+40h] [rbp-29h]
  _QWORD v18[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-11h]
  unsigned __int64 v20; // [rsp+60h] [rbp-9h]
  _BYTE v21[32]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp+1Fh] BYREF

  sub_18001E3BC(v18, (__int64)L"Camera.");
  sub_18001E3BC(v15, (__int64)L"/Internal/Camera.");
  v4 = (_QWORD *)sub_18001FAFC((__int64)a2, (__int64)v22, 0LL, v19);
  v5 = 1;
  v6 = v18;
  if ( v20 >= 8 )
    v6 = (_WORD *)v18[0];
  v7 = v4[2];
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  if ( v7 == v19 && !(unsigned int)sub_18001F810((__int64)v4, v6, v7) )
    goto LABEL_13;
  v8 = (_QWORD *)sub_18001FAFC((__int64)a2, (__int64)v21, 0LL, v16);
  v5 = 3;
  v9 = v15;
  if ( v17 >= 8 )
    v9 = (_WORD *)v15[0];
  v10 = v8[2];
  if ( v8[3] >= 8uLL )
    v8 = (_QWORD *)*v8;
  if ( v10 != v16 || (unsigned int)sub_18001F810((__int64)v8, v9, v10) )
    v11 = 0;
  else
LABEL_13:
    v11 = 1;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    sub_180013348((__int64)v21);
  }
  if ( (v5 & 1) != 0 )
    sub_180013348((__int64)v22);
  if ( v11 )
  {
    v12 = *a1;
    v13 = (struct _Mtx_internal_imp_t *)(*a1 + 1552LL);
    sub_180011C7C(v13);
    sub_180063290((_QWORD *)(v12 + 1488), (__int64)v21, a2);
    Mtx_unlock(v13);
  }
  sub_180013348((__int64)v15);
  return sub_180013348((__int64)v18);
}
