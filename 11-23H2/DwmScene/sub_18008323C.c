/*
 * XREFs of sub_18008323C @ 0x18008323C
 * Callers:
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001C74C @ 0x18001C74C (sub_18001C74C.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180081D34 @ 0x180081D34 (sub_180081D34.c)
 *     sub_180082FEC @ 0x180082FEC (sub_180082FEC.c)
 *     sub_1800830E0 @ 0x1800830E0 (sub_1800830E0.c)
 *     sub_18008316C @ 0x18008316C (sub_18008316C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008323C(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  char **v6; // r12
  char **v7; // r15
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // ecx
  int v14; // r13d
  int i; // edi
  char *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // r8
  char *v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h]
  _QWORD v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v28[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v29[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v31[7]; // [rsp+C8h] [rbp-38h] BYREF

  v27[1] = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_180010DD0(
      v28,
      (__int64)"ShaderPropertyLayout::SetMasterLayout() -- layout declaration must be complete before another layout can "
               "be connected as a master.");
    v4 = sub_180010DD0(
           v29,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderpropertylayout.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v4, v5, (__int64)v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800124F8((__int64 *)(a1 + 1176), a2);
  v6 = (char **)(a1 + 1192);
  *(_QWORD *)(a1 + 1200) = *(_QWORD *)(a1 + 1192);
  v7 = (char **)(a1 + 1216);
  *(_QWORD *)(a1 + 1224) = *(_QWORD *)(a1 + 1216);
  v8 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(a1 + 64);
  v26 = result;
  while ( v8 != result )
  {
    if ( *(_DWORD *)(v8 + 48) )
    {
      if ( !sub_18008316C(*a2, *(_WORD *)(v8 + 32)) )
      {
        v20 = sub_18001C74C(
                (char *)pExceptionObject,
                "ShaderPropertyLayout::SetMasterLayout() -- master layout does not have the property '",
                (_QWORD *)v8);
        v21 = sub_18001C61C(v29, v20, (__int64)"' required for import by this layout");
        v22 = sub_180010DD0(
                v28,
                (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\shaderpropertylayout.cpp");
        sub_18003AF58(v31, (__int64)v22, v23, (__int64)v21, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v31;
      }
      v11 = sub_180082FEC(v10, *(_WORD *)(v8 + 32));
      v12 = v11;
      v13 = *(_DWORD *)(v8 + 36);
      if ( v13 != *(_DWORD *)(v11 + 36) )
      {
        v16 = sub_18001C74C(
                (char *)v29,
                "ShaderPropertyLayout::SetMasterLayout() -- master layout has different type for property '",
                (_QWORD *)v8);
        v17 = sub_18001C61C(pExceptionObject, v16, (__int64)"' imported by this layout");
        v18 = sub_180010DD0(
                v28,
                (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\shaderpropertylayout.cpp");
        sub_18003AF58(v31, (__int64)v18, v19, (__int64)v17, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)v31;
      }
      if ( v13 == 8 )
      {
        LODWORD(v27[0]) = *(_DWORD *)(v11 + 40);
        HIDWORD(v27[0]) = *(_DWORD *)(v8 + 40);
        sub_180081D34(v7, v27);
      }
      else
      {
        v14 = sub_1800830E0(v13);
        for ( i = 0; i < v14; ++i )
        {
          LODWORD(v25) = i + *(_DWORD *)(v12 + 40);
          HIDWORD(v25) = i + *(_DWORD *)(v8 + 40);
          sub_180081D34(v6, &v25);
        }
      }
      result = v26;
    }
    v8 += 56LL;
  }
  v24 = a2[1];
  if ( v24 )
    return sub_180010530(v24);
  return result;
}
