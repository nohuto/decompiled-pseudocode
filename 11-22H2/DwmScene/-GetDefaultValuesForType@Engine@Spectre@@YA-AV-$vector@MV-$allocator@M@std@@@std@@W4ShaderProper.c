/*
 * XREFs of ?GetDefaultValuesForType@Engine@Spectre@@YA?AV?$vector@MV?$allocator@M@std@@@std@@W4ShaderPropertyType@12@@Z @ 0x180082D50
 * Callers:
 *     ?SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18008342C (-SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@V?$initializer_list@M@1@AEBV?$allocator@M@1@@Z @ 0x180044D4C (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@V-$initializer_list@M@1@AEBV-$allocator@M@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Spectre::Engine::GetDefaultValuesForType(__int64 *a1, int a2, __int64 a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int128 *v13; // rdx
  __int128 *p_pExceptionObject; // rax
  _QWORD v16[6]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v17; // [rsp+60h] [rbp-29h] BYREF
  __int128 pExceptionObject; // [rsp+70h] [rbp-19h] BYREF
  __int64 v19; // [rsp+80h] [rbp-9h]
  __int64 v20; // [rsp+88h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  __int64 v22; // [rsp+98h] [rbp+Fh]
  __int64 v23; // [rsp+A0h] [rbp+17h]
  __int64 v24; // [rsp+A8h] [rbp+1Fh]
  _QWORD v25[4]; // [rsp+B0h] [rbp+27h] BYREF

  *(_QWORD *)&v17 = a1;
  if ( !a2 || (v4 = a2 - 1) == 0 || (v5 = v4 - 1) == 0 )
  {
    LODWORD(v17) = 0;
    v16[0] = &v17;
    p_pExceptionObject = (__int128 *)((char *)&v17 + 4);
    goto LABEL_17;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_QWORD *)&v17 = 0LL;
    v16[0] = &v17;
    p_pExceptionObject = (__int128 *)((char *)&v17 + 8);
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_QWORD *)&v17 = 0LL;
    DWORD2(v17) = 0;
    v16[0] = &v17;
    p_pExceptionObject = (__int128 *)((char *)&v17 + 12);
    goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( !v8 || (v9 = v8 - 1) == 0 )
  {
    v17 = 0LL;
    v16[0] = &v17;
    p_pExceptionObject = &pExceptionObject;
LABEL_17:
    v13 = (__int128 *)v16;
    v16[1] = p_pExceptionObject;
    goto LABEL_18;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    pExceptionObject = Spectre::Utils::Math::Matrix::Identity;
    v19 = 0x3F80000000000000LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 1065353216LL;
    v23 = 0LL;
    v24 = 0x3F80000000000000LL;
    *(_QWORD *)&v17 = &pExceptionObject;
    *((_QWORD *)&v17 + 1) = v25;
    v13 = &v17;
LABEL_18:
    std::vector<float>::vector<float>(a1, (__int64)v13, a3);
    return a1;
  }
  if ( v10 != 1 )
  {
    std::string::string(
      v25,
      (__int64)"ShaderPropertyDefinition::ShaderPropertyDefinition() -- unsupported property type");
    v11 = std::string::string(
            v16,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderpropertylayout.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      &pExceptionObject,
      (__int64)v11,
      v12,
      (__int64)v25,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return a1;
}
