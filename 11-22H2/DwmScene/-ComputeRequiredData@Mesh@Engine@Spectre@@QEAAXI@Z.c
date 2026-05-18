/*
 * XREFs of ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0
 * Callers:
 *     ?SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z @ 0x180013AF0 (-SetData@SpectreMesh@@UEAAJAEBUDataParameters@ISpectreMesh@@@Z.c)
 *     ?OnMeshAttach@StandardShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@Z @ 0x18007E3F0 (-OnMeshAttach@StandardShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@.c)
 *     ?CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@@Z @ 0x18008CD80 (-CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@std@@P.c)
 *     ?CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@MM_NI1@Z @ 0x18008CFFC (-CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@st.c)
 *     ?OnMeshAttach@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@Z @ 0x18009B300 (-OnMeshAttach@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@PEAVRenderDevice@23@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ?ComputeNormals@Mesh@Engine@Spectre@@IEAAXPEAV223@@Z @ 0x180047FEC (-ComputeNormals@Mesh@Engine@Spectre@@IEAAXPEAV223@@Z.c)
 *     ?ComputeNormalsAndTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x1800481C0 (-ComputeNormalsAndTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z.c)
 *     ?ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z @ 0x180048514 (-ComputeTangents@Mesh@Engine@Spectre@@IEAAXPEAV223@_N@Z.c)
 *     ?HasNormals@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A20 (-HasNormals@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasPositions@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A34 (-HasPositions@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasTangents@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A48 (-HasTangents@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A70 (-IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Mesh::ComputeRequiredData(Spectre::Engine::Mesh *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  int v4; // r8d
  Spectre::Engine::Mesh *v5; // rcx
  char v6; // r8
  unsigned int v7; // r9d
  char v8; // di
  char HasNormals; // al
  char v10; // r9
  char v11; // r8
  char v12; // si
  bool HasTangents; // al
  char v14; // r8
  char v15; // r9
  struct Spectre::Engine::Engine *v16; // rdx
  _QWORD v17[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v18[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( Spectre::Engine::Mesh::IsMapped(this) )
  {
    std::string::string(
      v18,
      (__int64)"Mesh::ComputeRequiredData() -- Modification of a mesh that while it is mapped is not supported.");
    v3 = (unsigned int)std::string::string(
                         v17,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v3, v4, (unsigned int)v18, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  Spectre::Engine::RendererResource::SetOption(v2, 4, 1);
  if ( Spectre::Engine::Mesh::HasPositions(v5) )
  {
    v8 = v6 & (v7 >> 2);
    HasNormals = Spectre::Engine::Mesh::HasNormals(this);
    v12 = v11 & v10 & ~HasNormals;
    HasTangents = Spectre::Engine::Mesh::HasTangents(this);
    LOBYTE(v16) = v15 != 0 ? v14 ^ HasTangents : 0;
    if ( (_BYTE)v16 && std::operator==<Spectre::Engine::Scene>((_QWORD *)this + 30) )
    {
      Trace::LevelSettingsWrapper::Output(
        &gTraceLevelsMesh,
        3,
        "Attempting to compute tangents for mesh without UV coordinates. Tangents will not be calculated.");
      LOBYTE(v16) = 0;
    }
    if ( v12 )
    {
      if ( (_BYTE)v16 )
        Spectre::Engine::Mesh::ComputeNormalsAndTangents(this, v16, v8);
      else
        Spectre::Engine::Mesh::ComputeNormals(this, v16);
    }
    else if ( (_BYTE)v16 )
    {
      Spectre::Engine::Mesh::ComputeTangents(this, v16, v8);
    }
  }
}
