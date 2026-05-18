/*
 * XREFs of sub_1800569EC @ 0x1800569EC
 * Callers:
 *     sub_180028B9C @ 0x180028B9C (sub_180028B9C.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180056938 @ 0x180056938 (sub_180056938.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800569EC(__int64 a1, __int64 a2)
{
  __int64 *result; // rax
  int v4; // xmm0_4
  __int64 *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  __int64 v9; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v9 = a2;
  if ( *(float *)&a2 < 0.0 || (v4 = HIDWORD(v9), *((float *)&v9 + 1) < 0.0) )
  {
    sub_180010DD0(v11, (__int64)"Attempted to set an active size with a negative component");
    v7 = (unsigned int)sub_180010DD0(
                         v10,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\texture.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v7, v8, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = v4;
  v5 = *(__int64 **)(a1 + 112);
  v6 = *v5;
  v9 = *v5;
  while ( (__int64 *)v6 != v5 )
  {
    sub_180056938(*(_QWORD *)(v6 + 40), a2);
    result = sub_18001D3F8(&v9);
    v6 = v9;
  }
  return result;
}
