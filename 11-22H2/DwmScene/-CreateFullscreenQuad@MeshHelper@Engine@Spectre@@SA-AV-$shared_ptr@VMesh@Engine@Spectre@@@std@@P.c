/*
 * XREFs of ?CreateFullscreenQuad@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@@Z @ 0x18008CD80
 * Callers:
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x1800160D8 (--$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VM_ea_1800160D8.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002945C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?SetIndexCount@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800491F4 (-SetIndexCount@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z @ 0x180049208 (-SetIndices@Mesh@Engine@Spectre@@QEAAXQEBG@Z.c)
 *     ?SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z @ 0x180049628 (-SetNormals@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@_N@Z.c)
 *     ?SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z @ 0x180049778 (-SetPositions@Mesh@Engine@Spectre@@QEAAXQEBUVector3@Math@Utils@3@@Z.c)
 *     ?SetTopology@Mesh@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z @ 0x180049A00 (-SetTopology@Mesh@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z.c)
 *     ?SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z @ 0x180049A94 (-SetUV0@Mesh@Engine@Spectre@@QEAAXQEBUVector2@Math@Utils@3@@Z.c)
 *     ?SetVertexCount@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x180049D14 (-SetVertexCount@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
Spectre::Engine::Mesh **__fastcall Spectre::Engine::MeshHelper::CreateFullscreenQuad(
        Spectre::Engine::Mesh **a1,
        __int64 a2)
{
  _OWORD v5[2]; // [rsp+30h] [rbp-69h] BYREF
  _OWORD v6[3]; // [rsp+50h] [rbp-49h] BYREF
  _OWORD v7[3]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int16 v8[2]; // [rsp+B0h] [rbp+17h] BYREF
  int v9; // [rsp+B4h] [rbp+1Bh]
  int v10; // [rsp+B8h] [rbp+1Fh]

  `vector constructor iterator'(
    (char *)v6,
    12LL,
    4LL,
    (void (__fastcall *)(char *))Spectre::Utils::Math::Vector3::Vector3);
  `vector constructor iterator'(
    (char *)v5,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Spectre::Utils::Math::Vector2::Vector2);
  `vector constructor iterator'(
    (char *)v7,
    12LL,
    4LL,
    (void (__fastcall *)(char *))Spectre::Utils::Math::Vector3::Vector3);
  v6[0] = _xmm;
  v6[1] = _xmm;
  v6[2] = _xmm;
  v7[0] = _xmm;
  v7[1] = _xmm;
  v7[2] = _xmm;
  v5[0] = _xmm;
  v5[1] = _xmm;
  *(_DWORD *)v8 = 0x10000;
  v9 = 65538;
  v10 = 131075;
  Spectre::Engine::Engine::CreateResource<Spectre::Engine::Mesh,>(a2, a1);
  Spectre::Engine::Mesh::SetVertexCount(*a1, 4);
  Spectre::Engine::Mesh::SetIndexCount(*a1, 6);
  Spectre::Engine::Mesh::SetTopology(*a1);
  Spectre::Engine::Mesh::SetPositions(*a1, (const struct Spectre::Utils::Math::Vector3 *const)v6);
  Spectre::Engine::Mesh::SetIndices(*a1, v8);
  Spectre::Engine::Mesh::SetNormals(*a1, (const struct Spectre::Utils::Math::Vector3 *const)v7);
  Spectre::Engine::Mesh::SetUV0(*a1, (const struct Spectre::Utils::Math::Vector2 *const)v5);
  Spectre::Engine::Mesh::ComputeRequiredData(*a1);
  return a1;
}
