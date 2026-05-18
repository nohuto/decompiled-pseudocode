/*
 * XREFs of sub_1800829E4 @ 0x1800829E4
 * Callers:
 *     sub_180044208 @ 0x180044208 (sub_180044208.c)
 *     sub_18004B2D0 @ 0x18004B2D0 (sub_18004B2D0.c)
 *     sub_180050A68 @ 0x180050A68 (sub_180050A68.c)
 *     sub_180060800 @ 0x180060800 (sub_180060800.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18004FB08 @ 0x18004FB08 (sub_18004FB08.c)
 *     sub_180084484 @ 0x180084484 (sub_180084484.c)
 *     sub_18008549C @ 0x18008549C (sub_18008549C.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800829E4(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  __int64 v13; // [rsp+48h] [rbp-51h]
  _QWORD *v14; // [rsp+50h] [rbp-49h]
  _QWORD v15[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v16[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v14 = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_180010DD0(
      v16,
      (__int64)"ShaderPropertyLayout::CreateBlock() -- layout declaration must be complete before a property block can be created.");
    v4 = sub_180010DD0(
           v15,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = sub_18004347C(a1, &v12);
  v7 = sub_18001C190();
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPropertyBlock>::`vftable';
    sub_180084484(v7 + 16, v6);
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = v8 + 16;
  a2[1] = v8;
  if ( v13 )
    sub_180010530(v13);
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v9 = sub_18004FB08(*(_QWORD *)(a1 + 1152), &v12);
    sub_18008549C(v10, v9);
  }
  return a2;
}
