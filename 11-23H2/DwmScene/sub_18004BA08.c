/*
 * XREFs of sub_18004BA08 @ 0x18004BA08
 * Callers:
 *     sub_18004B9E4 @ 0x18004B9E4 (sub_18004B9E4.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_18009B5A0 @ 0x18009B5A0 (sub_18009B5A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18004CF30 @ 0x18004CF30 (sub_18004CF30.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004BA08(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v4; // rcx
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD *v7; // rax
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v4 = (_QWORD *)(a1 + 104);
  if ( a3 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v4[1] - *v4) >> 3) )
  {
    sub_180010DD0(v10, (__int64)"Out of range");
    v5 = (unsigned int)sub_180010DD0(
                         v9,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v5, v6, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = (_QWORD *)sub_18004CF30(v4, a3);
  sub_18001246C(a2, v7);
  return a2;
}
