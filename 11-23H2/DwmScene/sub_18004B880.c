/*
 * XREFs of sub_18004B880 @ 0x18004B880
 * Callers:
 *     sub_18004CA50 @ 0x18004CA50 (sub_18004CA50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18004CEE4 @ 0x18004CEE4 (sub_18004CEE4.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004B880(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r8d
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int128 v6; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp+17h] BYREF

  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3) )
  {
    sub_180010DD0(v8, (__int64)"Out of range");
    v2 = (unsigned int)sub_180010DD0(
                         v7,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v2, v3, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v4 = (_QWORD *)sub_18004CEE4();
  v6 = 0LL;
  sub_180011020(v4 + 3, (__int64 *)&v6);
  if ( *((_QWORD *)&v6 + 1) )
    sub_180010530(*((__int64 *)&v6 + 1));
  v6 = 0LL;
  sub_180011020(v4 + 5, (__int64 *)&v6);
  if ( *((_QWORD *)&v6 + 1) )
    sub_180010530(*((__int64 *)&v6 + 1));
  v6 = 0LL;
  sub_180011020(v4 + 7, (__int64 *)&v6);
  if ( *((_QWORD *)&v6 + 1) )
    sub_180010530(*((__int64 *)&v6 + 1));
  v6 = 0LL;
  result = sub_180011020(v4 + 9, (__int64 *)&v6);
  if ( *((_QWORD *)&v6 + 1) )
    return (_QWORD *)sub_180010530(*((__int64 *)&v6 + 1));
  return result;
}
