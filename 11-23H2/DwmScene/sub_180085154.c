/*
 * XREFs of sub_180085154 @ 0x180085154
 * Callers:
 *     sub_180044480 @ 0x180044480 (sub_180044480.c)
 *     sub_18007264C @ 0x18007264C (sub_18007264C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001C6E8 @ 0x18001C6E8 (sub_18001C6E8.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004FDD4 @ 0x18004FDD4 (sub_18004FDD4.c)
 *     sub_180082FEC @ 0x180082FEC (sub_180082FEC.c)
 *     sub_18008316C @ 0x18008316C (sub_18008316C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180085154(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rcx
  unsigned __int16 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v19[4]; // [rsp+B8h] [rbp+2Fh] BYREF

  if ( !sub_18008316C(*(_QWORD *)(a1 + 16), a3) )
  {
    v5 = sub_18004FDD4(*(_QWORD *)(v3 + 1152), v17, v4);
    v6 = sub_18001C6E8(v19, (__int64)"Property does not exist: ", v5);
    v7 = sub_180010DD0(
           v16,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertyblock.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v7, v8, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = sub_180082FEC(v3, v4);
  if ( *(_DWORD *)(v9 + 36) != 8 )
  {
    sub_180010DD0(v17, (__int64)"ShaderPropertyBlock::GetTexture() -- Property is not of type Texture");
    v12 = sub_180010DD0(
            v16,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertyblock.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v12, v13, (__int64)v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18001246C(v10, (_QWORD *)(*(_QWORD *)(v11 + 56) + 40LL * *(unsigned int *)(v9 + 40)));
  return v14;
}
