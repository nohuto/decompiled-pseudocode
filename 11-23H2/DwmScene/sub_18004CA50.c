/*
 * XREFs of sub_18004CA50 @ 0x18004CA50
 * Callers:
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_18004B2D0 @ 0x18004B2D0 (sub_18004B2D0.c)
 *     sub_18004B880 @ 0x18004B880 (sub_18004B880.c)
 *     sub_18004CEE4 @ 0x18004CEE4 (sub_18004CEE4.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18004CA50(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v5; // rcx
  unsigned int v6; // eax
  int v7; // r8d
  __int64 *v8; // rdi
  char result; // al
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h]
  __int64 *v15; // [rsp+60h] [rbp-29h]
  _QWORD v16[4]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+88h] [rbp-1h] BYREF

  v15 = a3;
  v5 = (_QWORD *)(a1 + 104);
  if ( !(0x2E8BA2E8BA2E8BA3LL * ((__int64)(v5[1] - *v5) >> 3)) )
  {
    sub_180010DD0(v16, (__int64)"Out of range");
    v6 = (unsigned int)sub_180010DD0(
                         &v13,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v6, v7, (unsigned int)v16, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v8 = (__int64 *)sub_18004CEE4(v5, 0LL);
  result = sub_180015678(v8, a3);
  if ( !result )
  {
    sub_18004B880(a1, 0LL);
    sub_1800124F8(v8, a3);
    result = sub_180011DE0(a3);
    if ( result )
    {
      sub_180026B04(*a3, &v13);
      result = sub_180011DE0(&v13);
      if ( result )
      {
        v10 = sub_18001246C(&v12, &v13);
        result = sub_18004B2D0(a1, 0LL, v10);
      }
      if ( v14 )
        result = sub_180010530(v14);
    }
  }
  v11 = a3[1];
  if ( v11 )
    return sub_180010530(v11);
  return result;
}
