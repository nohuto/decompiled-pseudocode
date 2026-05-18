/*
 * XREFs of ?SetTangents@Mesh@Engine@Spectre@@QEAAXQEBUVector4@Math@Utils@3@_N@Z @ 0x1800498B8
 * Callers:
 *     ?SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z @ 0x180013AF0 (-SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z.c)
 *     ?LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048B24 (-LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0c82bcc1497f3afd643663d7c3bef72a__void_std::shared_ptr_Spectre::Utils::Math::Vector4__const_&_std::shared_ptr_Spectre::Utils::Math::Vector3__const_&_void___::_Do_call @ 0x180049DD0 (std--_Func_impl_no_alloc__lambda_0c82bcc1497f3afd643663d7c3bef72a__void_std--shared_ea_180049DD0.c)
 *     std::_Func_impl_no_alloc__lambda_ab41f81ca63d3d4c36433f589e0aa9fa__void_std::shared_ptr_Spectre::Utils::Math::Vector4__const_&_void___::_Do_call @ 0x180049E40 (std--_Func_impl_no_alloc__lambda_ab41f81ca63d3d4c36433f589e0aa9fa__void_std--shared_ea_180049E40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineInvalidPointerException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180047AD4 (--0EngineInvalidPointerException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A70 (-IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?SetTangentsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector4@Math@Utils@3@I_N@Z @ 0x180049994 (-SetTangentsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector4@Math@Utils@3@I_N@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __fastcall Spectre::Engine::Mesh::SetTangents(
        Spectre::Engine::Mesh *this,
        const struct Spectre::Utils::Math::Vector4 *const a2)
{
  const struct Spectre::Utils::Math::Vector4 *v2; // rdx
  unsigned int *v3; // rcx
  bool v4; // r8
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( Spectre::Engine::Mesh::IsMapped(this) )
  {
    std::string::string(
      v10,
      (__int64)"Mesh::SetTangents() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v5 = (unsigned int)std::string::string(
                         v9,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v5, v6, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v2 )
  {
    std::string::string(
      v9,
      (__int64)"Mesh::SetTangents() -- tangentArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v7 = std::string::string(
           v10,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    Spectre::Engine::EngineInvalidPointerException::EngineInvalidPointerException(
      pExceptionObject,
      (__int64)v7,
      v8,
      (__int64)v9);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  Spectre::Engine::Mesh::SetTangentsInternal((Spectre::Engine::Mesh *)v3, v2, v3[30], v4);
}
