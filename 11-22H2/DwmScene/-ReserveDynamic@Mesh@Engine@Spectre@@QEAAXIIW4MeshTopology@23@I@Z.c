/*
 * XREFs of ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68
 * Callers:
 *     ?LoadFromBuffer@Mesh@Engine@Spectre@@QEAAXAEBUBaseMeshSegment@23@@Z @ 0x180048A80 (-LoadFromBuffer@Mesh@Engine@Spectre@@QEAAXAEBUBaseMeshSegment@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ??0EngineInvalidPointerException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180047AD4 (--0EngineInvalidPointerException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?SetColoursInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z @ 0x180049188 (-SetColoursInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z.c)
 *     ?SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBGI@Z @ 0x1800493B8 (-SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBGI@Z.c)
 *     ?SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z @ 0x18004942C (-SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z.c)
 *     ?SetJointDataInternal@Mesh@Engine@Spectre@@IEAAXQEBI0I@Z @ 0x18004957C (-SetJointDataInternal@Mesh@Engine@Spectre@@IEAAXQEBI0I@Z.c)
 *     ?SetNormalsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I_N@Z @ 0x180049704 (-SetNormalsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I_N@Z.c)
 *     ?SetPositionsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I@Z @ 0x180049850 (-SetPositionsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I@Z.c)
 *     ?SetTangentsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector4@Math@Utils@3@I_N@Z @ 0x180049994 (-SetTangentsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector4@Math@Utils@3@I_N@Z.c)
 *     ?SetUV0Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z @ 0x180049B6C (-SetUV0Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z.c)
 *     ?SetUV1Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z @ 0x180049CAC (-SetUV1Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::Mesh::ReserveDynamic(unsigned int *a1, int a2, int a3, __int64 a4, int a5)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // r10d
  int v12; // r9d
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD v15[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( !a3 || !a2 )
  {
    std::string::string(v15, (__int64)"Mesh::ReserveDynamic() -- vertex capacity and index capacity must not be zero");
    v13 = std::string::string(
            v16,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    Spectre::Engine::EngineInvalidPointerException::EngineInvalidPointerException(
      pExceptionObject,
      (__int64)v13,
      v14,
      (__int64)v15);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( a1[76] == 2 )
  {
    std::string::string(
      v16,
      (__int64)"Mesh::ReserveDynamic() -- this mesh instance is already dynamic -- ReserveDynamic() must be called only once");
    v6 = std::string::string(
           v15,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    Spectre::Engine::EngineInvalidPointerException::EngineInvalidPointerException(
      pExceptionObject,
      (__int64)v6,
      v7,
      (__int64)v16);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    std::string::string(v15, (__int64)"Mesh::ReserveDynamic() -- dynamic mesh vertex format must include position");
    v8 = std::string::string(
           v16,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    Spectre::Engine::EngineInvalidPointerException::EngineInvalidPointerException(
      pExceptionObject,
      (__int64)v8,
      v9,
      (__int64)v15);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  a1[76] = 2;
  Spectre::Engine::RendererResource::SetOption((__int64)a1, 4, 1);
  *(_DWORD *)(v10 + 292) = a5;
  *(_DWORD *)(v10 + 296) = a5;
  *(_DWORD *)(v10 + 124) = v11;
  *(_DWORD *)(v10 + 120) = v11;
  *(_DWORD *)(v10 + 116) = v12;
  *(_DWORD *)(v10 + 112) = v12;
  *(_WORD *)(v10 + 308) = 0;
  Spectre::Engine::Mesh::SetPositionsInternal((Spectre::Engine::Mesh *)v10, 0LL, v11);
  if ( (a5 & 0x80u) != 0 )
    Spectre::Engine::Mesh::SetColoursInternal((Spectre::Engine::Mesh *)a1, 0LL, a1[31]);
  if ( (a5 & 1) != 0 )
    Spectre::Engine::Mesh::SetUV0Internal((Spectre::Engine::Mesh *)a1, 0LL, a1[31]);
  if ( (a5 & 2) != 0 )
    Spectre::Engine::Mesh::SetUV1Internal((Spectre::Engine::Mesh *)a1, 0LL, a1[31]);
  if ( (a5 & 0x10000000) != 0 )
  {
    a1[72] = 1;
    Spectre::Engine::Mesh::SetIndicesInternal((Spectre::Engine::Mesh *)a1, 0LL, a1[29]);
  }
  else if ( (a5 & 0x40) != 0 )
  {
    a1[72] = 0;
    Spectre::Engine::Mesh::SetIndicesInternal((Spectre::Engine::Mesh *)a1, 0LL, a1[29]);
  }
  if ( (a5 & 0x10) != 0 )
    Spectre::Engine::Mesh::SetNormalsInternal((Spectre::Engine::Mesh *)a1, 0LL, a1[31], 0);
  if ( (a5 & 0x20) != 0 )
    Spectre::Engine::Mesh::SetTangentsInternal((Spectre::Engine::Mesh *)a1, 0LL, a1[31], 0);
  if ( (a5 & 0x400) != 0 )
    Spectre::Engine::Mesh::SetJointDataInternal((Spectre::Engine::Mesh *)a1, 0LL, 0LL, a1[31]);
}
