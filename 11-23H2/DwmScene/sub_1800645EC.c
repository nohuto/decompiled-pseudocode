/*
 * XREFs of sub_1800645EC @ 0x1800645EC
 * Callers:
 *     sub_18006E810 @ 0x18006E810 (sub_18006E810.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_18001F810 @ 0x18001F810 (sub_18001F810.c)
 *     sub_18001FAFC @ 0x18001FAFC (sub_18001FAFC.c)
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800645EC(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  _WORD *v5; // rdx
  __int64 v6; // r8
  bool v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // r10
  __int64 v29; // rcx
  unsigned __int64 v30; // r11
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rdx
  _QWORD v40[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+30h] [rbp-48h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]
  _BYTE v43[32]; // [rsp+40h] [rbp-38h] BYREF

  sub_18001E3BC(v40, (__int64)L"Model.");
  v4 = (_QWORD *)sub_18001FAFC((__int64)a2, (__int64)v43, 0LL, v41);
  v5 = v40;
  if ( v42 >= 8 )
    v5 = (_WORD *)v40[0];
  v6 = v4[2];
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v7 = v6 == v41 && !(unsigned int)sub_18001F810((__int64)v4, v5, v6);
  sub_180013348((__int64)v43);
  if ( v7 )
  {
    LOBYTE(v8) = 1;
    sub_1800401E8(*a1 + 1465LL, v8, v9, v10);
  }
  v11 = &qword_1801D4948;
  if ( (unsigned __int64)qword_1801D4960 >= 8 )
    v11 = (__int64 *)qword_1801D4948;
  v12 = a2[2];
  v13 = (__int64)a2;
  v14 = a2[3];
  if ( v14 >= 8 )
    v13 = *a2;
  if ( v12 == qword_1801D4958 && !(unsigned int)sub_18001F810(v13, v11, a2[2]) )
  {
    LOBYTE(v15) = 1;
    sub_1800401E8(*a1 + 1466LL, v15, v16, v17);
    v12 = a2[2];
    v14 = a2[3];
  }
  v18 = &qword_1801D49A8;
  if ( (unsigned __int64)qword_1801D49C0 >= 8 )
    v18 = (__int64 *)qword_1801D49A8;
  v19 = (__int64)a2;
  if ( v14 >= 8 )
    v19 = *a2;
  if ( v12 == qword_1801D49B8 && !(unsigned int)sub_18001F810(v19, v18, v12) )
    goto LABEL_36;
  v23 = &qword_1801D49C8;
  if ( (unsigned __int64)qword_1801D49E0 >= 8 )
    v23 = (__int64 *)qword_1801D49C8;
  v24 = (__int64)a2;
  if ( v14 >= 8 )
    v24 = *a2;
  if ( v12 == qword_1801D49D8 && !(unsigned int)sub_18001F810(v24, v23, v12) )
    goto LABEL_36;
  v25 = &qword_1801D49E8;
  if ( (unsigned __int64)qword_1801D4A00 >= 8 )
    v25 = (__int64 *)qword_1801D49E8;
  v26 = (__int64)a2;
  if ( v14 >= 8 )
    v26 = *a2;
  if ( v12 == qword_1801D49F8 && !(unsigned int)sub_18001F810(v26, v25, v12) )
  {
LABEL_36:
    LOBYTE(v20) = 1;
    sub_1800401E8(*a1 + 1467LL, v20, v21, v22);
  }
  v27 = &qword_1801D4A68;
  if ( (unsigned __int64)qword_1801D4A80 >= 8 )
    v27 = (__int64 *)qword_1801D4A68;
  v28 = a2[2];
  v29 = (__int64)a2;
  v30 = a2[3];
  if ( v30 >= 8 )
    v29 = *a2;
  if ( v28 == qword_1801D4A78 && !(unsigned int)sub_18001F810(v29, v27, a2[2]) )
    goto LABEL_61;
  v34 = &qword_1801D4A08;
  if ( (unsigned __int64)qword_1801D4A20 >= 8 )
    v34 = (__int64 *)qword_1801D4A08;
  v35 = (__int64)a2;
  if ( v30 >= 8 )
    v35 = *a2;
  if ( v28 == qword_1801D4A18 && !(unsigned int)sub_18001F810(v35, v34, v28) )
    goto LABEL_61;
  v36 = &qword_1801D4A28;
  if ( (unsigned __int64)qword_1801D4A40 >= 8 )
    v36 = (__int64 *)qword_1801D4A28;
  v37 = (__int64)a2;
  if ( v30 >= 8 )
    v37 = *a2;
  if ( v28 == qword_1801D4A38 && !(unsigned int)sub_18001F810(v37, v36, v28) )
    goto LABEL_61;
  v38 = &qword_1801D4A48;
  if ( (unsigned __int64)qword_1801D4A60 >= 8 )
    v38 = (__int64 *)qword_1801D4A48;
  if ( v30 >= 8 )
    a2 = (__int64 *)*a2;
  if ( v28 == qword_1801D4A58 && !(unsigned int)sub_18001F810((__int64)a2, v38, v28) )
  {
LABEL_61:
    LOBYTE(v31) = 1;
    sub_1800401E8(*a1 + 1468LL, v31, v32, v33);
  }
  return sub_180013348((__int64)v40);
}
