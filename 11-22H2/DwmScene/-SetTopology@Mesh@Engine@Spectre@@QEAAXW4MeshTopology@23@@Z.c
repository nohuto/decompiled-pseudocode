/*
 * XREFs of ?SetTopology@Mesh@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z @ 0x180049A00
 * Callers:
 *     ?SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z @ 0x180013AF0 (-SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z.c)
 *     ?CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@@Z @ 0x18008CD80 (-CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@P.c)
 *     Spectre::Engine::_anonymous_namespace_::CreateMesh @ 0x18008CF38 (Spectre--Engine--_anonymous_namespace_--CreateMesh.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A70 (-IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Spectre::Engine::Mesh::SetTopology(Spectre::Engine::Mesh *a1)
{
  bool result; // al
  int v2; // edx
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  result = Spectre::Engine::Mesh::IsMapped(a1);
  if ( result )
  {
    std::string::string(
      v7,
      (__int64)"Mesh::SetTopology() -- Modification of a mesh that while it is mapped is not supported.");
    v4 = (unsigned int)std::string::string(
                         v6,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(v3 + 300) = v2;
  return result;
}
