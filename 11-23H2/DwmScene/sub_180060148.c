/*
 * XREFs of sub_180060148 @ 0x180060148
 * Callers:
 *     sub_180018380 @ 0x180018380 (sub_180018380.c)
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_1800961E0 @ 0x1800961E0 (sub_1800961E0.c)
 *     sub_18009CB54 @ 0x18009CB54 (sub_18009CB54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180029E78 @ 0x180029E78 (sub_180029E78.c)
 *     sub_18002A6F0 @ 0x18002A6F0 (sub_18002A6F0.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_180044208 @ 0x180044208 (sub_180044208.c)
 *     sub_18004FAF8 @ 0x18004FAF8 (sub_18004FAF8.c)
 *     sub_18005ECE8 @ 0x18005ECE8 (sub_18005ECE8.c)
 *     sub_18005EFFC @ 0x18005EFFC (sub_18005EFFC.c)
 *     sub_180060CD0 @ 0x180060CD0 (sub_180060CD0.c)
 *     sub_180083188 @ 0x180083188 (sub_180083188.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall sub_180060148(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+38h] [rbp-61h] BYREF
  volatile signed __int32 *v15; // [rsp+40h] [rbp-59h]
  __int64 v16; // [rsp+48h] [rbp-51h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  _QWORD v18[5]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v19; // [rsp+80h] [rbp-19h] BYREF
  __int64 v20; // [rsp+88h] [rbp-11h]
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp+7h] BYREF

  v18[4] = a2;
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_180010DD0(
      &v19,
      (__int64)"ShaderFamily::CreateMaterial() -- materials cannot be created until shader family declaration is complete");
    v4 = sub_180010DD0(
           v18,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)&v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = (_QWORD *)sub_180060CD0(a1, 2LL);
  sub_18001246C(&v16, v6);
  if ( sub_180011DD0(&v16) || !(unsigned __int8)sub_180083188(v16) )
  {
    sub_180010DD0(
      &v19,
      (__int64)"ShaderFamily::CreateMaterial() -- materials cannot be created until valid material layout is specified (n"
               "on-null and complete)");
    v12 = sub_180010DD0(
            v18,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v12, v13, (__int64)&v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = sub_18004FAF8(*(_QWORD *)(a1 + 440));
  sub_18005ECE8(v7, a2);
  if ( sub_180011DE0(a2) )
  {
    v8 = (_QWORD *)*a2;
    v9 = sub_18004347C(a1, &v14);
    sub_180044208(v8, v9);
    sub_180029E78((__int64)&v19, a1 + 472);
    sub_180015604(&v14, a2);
    sub_18005EFFC((__int64 *)(a1 + 480), (__int64)v18, &v14);
    if ( v15 )
      sub_180010574(v15);
    sub_180010F54((__int64)&v19);
  }
  v10 = (_QWORD *)sub_180011D4C(*a2 + 96, &v19);
  sub_18002A6F0((__int64 *)(*a2 + 216), v10);
  if ( v20 )
    sub_180010530(v20);
  if ( v17 )
    sub_180010530(v17);
  return a2;
}
