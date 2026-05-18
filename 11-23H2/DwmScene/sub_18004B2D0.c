/*
 * XREFs of sub_18004B2D0 @ 0x18004B2D0
 * Callers:
 *     sub_18004CA50 @ 0x18004CA50 (sub_18004CA50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18004CEE4 @ 0x18004CEE4 (sub_18004CEE4.c)
 *     sub_180060CD0 @ 0x180060CD0 (sub_180060CD0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_180081120 @ 0x180081120 (sub_180081120.c)
 *     sub_1800829E4 @ 0x1800829E4 (sub_1800829E4.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18004B2D0(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 *v9; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rax
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-79h] BYREF
  __int64 v19; // [rsp+38h] [rbp-71h]
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  __int64 v21; // [rsp+48h] [rbp-61h]
  __int64 v22; // [rsp+50h] [rbp-59h] BYREF
  __int64 v23; // [rsp+58h] [rbp-51h]
  _QWORD *v24; // [rsp+60h] [rbp-49h]
  __int64 v25; // [rsp+68h] [rbp-41h] BYREF
  __int64 v26; // [rsp+70h] [rbp-39h]
  __int64 v27; // [rsp+88h] [rbp-21h] BYREF
  __int64 v28; // [rsp+90h] [rbp-19h]
  _BYTE pExceptionObject[56]; // [rsp+A8h] [rbp-1h] BYREF

  v24 = a3;
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3) )
  {
    sub_180010DD0(&v27, (__int64)"Out of range");
    v5 = (unsigned int)sub_180010DD0(
                         &v25,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v5, v6, (unsigned int)&v27, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = (_QWORD *)sub_18004CEE4();
  v8 = (_QWORD *)sub_180060CD0(*a3, 0LL);
  sub_18001246C(&v27, v8);
  v9 = (__int64 *)sub_1800829E4(v27, &v22);
  sub_180011020(v7 + 3, v9);
  if ( v23 )
    sub_180010530(v23);
  v10 = (_QWORD *)sub_180060CD0(*a3, 3LL);
  sub_18001246C(&v22, v10);
  v11 = (__int64 *)sub_1800829E4(v22, &v20);
  sub_180011020(v7 + 5, v11);
  if ( v21 )
    sub_180010530(v21);
  v12 = (_QWORD *)sub_180060CD0(*a3, 7LL);
  sub_18001246C(&v20, v12);
  v13 = (__int64 *)sub_1800829E4(v20, &v18);
  sub_180011020(v7 + 7, v13);
  if ( v19 )
    sub_180010530(v19);
  v14 = (_QWORD *)sub_180060CD0(*a3, 8LL);
  sub_18001246C(&v18, v14);
  v15 = (__int64 *)sub_1800829E4(v18, &v25);
  sub_180011020(v7 + 9, v15);
  if ( v26 )
    sub_180010530(v26);
  result = sub_180081120(a1);
  if ( v19 )
    result = sub_180010530(v19);
  if ( v21 )
    result = sub_180010530(v21);
  if ( v23 )
    result = sub_180010530(v23);
  if ( v28 )
    result = sub_180010530(v28);
  v17 = a3[1];
  if ( v17 )
    return sub_180010530(v17);
  return result;
}
