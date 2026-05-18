/*
 * XREFs of ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBI@Z @ 0x1800492E0
 * Callers:
 *     ?SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z @ 0x180013AF0 (-SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z.c)
 *     ?LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048B24 (-LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineInvalidPointerException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180047AD4 (--0EngineInvalidPointerException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A70 (-IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z @ 0x18004942C (-SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

void __fastcall Spectre::Engine::Mesh::SetIndices(Spectre::Engine::Mesh *this, const unsigned int *const a2)
{
  const unsigned int *v2; // rdx
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
