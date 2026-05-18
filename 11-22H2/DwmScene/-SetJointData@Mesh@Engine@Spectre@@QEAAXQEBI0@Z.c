/*
 * XREFs of ?SetJointData@Mesh@Engine@Spectre@@QEAAXQEBI0@Z @ 0x18004949C
 * Callers:
 *     ?LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048B24 (-LoadVertexDataFromStream@Mesh@Engine@Spectre@@IEAAXAEBUBaseMeshSegment@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineInvalidPointerException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180047AD4 (--0EngineInvalidPointerException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ @ 0x180048A70 (-IsMapped@Mesh@Engine@Spectre@@QEBA_NXZ.c)
 *     ?SetJointDataInternal@Mesh@Engine@Spectre@@IEAAXQEBI0I@Z @ 0x18004957C (-SetJointDataInternal@Mesh@Engine@Spectre@@IEAAXQEBI0I@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Mesh::SetJointData(
        Spectre::Engine::Mesh *this,
        const unsigned int *const a2,
        const unsigned int *const a3)
{
  const unsigned int *v3; // rdx
  unsigned int *v4; // rcx
  const unsigned int *v5; // r8
  unsigned int v6; // eax
  int v7; // r8d
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD v10[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( Spectre::Engine::Mesh::IsMapped(this) )
  {
    std::string::string(
      v11,
      (__int64)"Mesh::SetJointData() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v6 = (unsigned int)std::string::string(
                         v10,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v6, v7, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v3 || !v5 )
  {
    std::string::string(
      v10,
      (__int64)"Mesh::SetJointData() -- jointWeightArray and jointIndexArray must be non-null and contain N elements, whe"
               "re N=Mesh::GetVertexCount()");
    v8 = std::string::string(
           v11,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    Spectre::Engine::EngineInvalidPointerException::EngineInvalidPointerException(
      pExceptionObject,
      (__int64)v8,
      v9,
      (__int64)v10);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  Spectre::Engine::Mesh::SetJointDataInternal((Spectre::Engine::Mesh *)v4, v3, v5, v4[30]);
}
