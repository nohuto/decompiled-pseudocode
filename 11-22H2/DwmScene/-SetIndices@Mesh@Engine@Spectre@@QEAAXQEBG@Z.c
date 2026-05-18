/*
 * XREFs of ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z @ 0x180049208
 * Callers:
 *     ?SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z @ 0x180013AF0 (-SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z.c)
 *     ?LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048B24 (-LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z.c)
 *     ?CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@@Z @ 0x18008CD80 (-CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@P.c)
 *     Spectre::Engine::_anonymous_namespace_::CreateMesh @ 0x18008CF38 (Spectre--Engine--_anonymous_namespace_--CreateMesh.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineInvalidPointerException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180047AD4 (--0EngineInvalidPointerException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A70 (-IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBGI@Z @ 0x1800493B8 (-SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBGI@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __fastcall Spectre::Engine::Mesh::SetIndices(Spectre::Engine::Mesh *this, const unsigned __int16 *const a2)
{
  const unsigned __int16 *v2; // rdx
  unsigned int *v3; // rcx
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( Spectre::Engine::Mesh::IsMapped(this) )
  {
    std::string::string(
      v9,
      (__int64)"Mesh::SetIndices() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v4 = (unsigned int)std::string::string(
                         v8,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v4, v5, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v2 )
  {
    std::string::string(
      v8,
      (__int64)"Mesh::SetIndices() -- indexArray must be non-null and contain N elements, where N=Mesh::GetIndexCount()");
    v6 = std::string::string(
           v9,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    Spectre::Engine::EngineInvalidPointerException::EngineInvalidPointerException(
      pExceptionObject,
      (__int64)v6,
      v7,
      (__int64)v8);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  Spectre::Engine::Mesh::SetIndicesInternal((Spectre::Engine::Mesh *)v3, v2, v3[28]);
}
