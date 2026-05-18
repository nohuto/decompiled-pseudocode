/*
 * XREFs of sub_18004BBF0 @ 0x18004BBF0
 * Callers:
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18004CF30 @ 0x18004CF30 (sub_18004CF30.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18004BBF0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rcx
  unsigned int v3; // eax
  int v4; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v2 = (_QWORD *)(a1 + 104);
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v2[1] - *v2) >> 3) )
  {
    sub_180010DD0(v7, (__int64)"Out of range");
    v3 = (unsigned int)sub_180010DD0(
                         v6,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v3, v4, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return *(_BYTE *)(sub_18004CF30(v2, a2) + 16);
}
