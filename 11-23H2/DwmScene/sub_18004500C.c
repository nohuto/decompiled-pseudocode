/*
 * XREFs of sub_18004500C @ 0x18004500C
 * Callers:
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180044E24 @ 0x180044E24 (sub_180044E24.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18004500C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _DWORD v7[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-A8h]
  _QWORD v9[5]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v10[4]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-50h] BYREF

  v8 = a1;
  v9[4] = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 1;
  v7[0] = 0;
  sub_180044E24((__int64 *)(a1 + 40), a2, v7);
  if ( (int)**(float **)(a1 + 40) )
  {
    sub_180010DD0(
      v10,
      (__int64)"Shader integer has default value is outside the currently supported range (must be exactly representable as float).");
    v4 = sub_180010DD0(
           v9,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\Inc\\NativeRen"
                    "derer\\Resources\\ShaderDefinitions.h");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180011B24(a2);
  return a1;
}
