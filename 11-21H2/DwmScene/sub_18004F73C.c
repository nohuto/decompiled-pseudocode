/*
 * XREFs of sub_18004F73C @ 0x18004F73C
 * Callers:
 *     sub_18004ED94 @ 0x18004ED94 (sub_18004ED94.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18004DBD8 @ 0x18004DBD8 (sub_18004DBD8.c)
 *     sub_18004ECE0 @ 0x18004ECE0 (sub_18004ECE0.c)
 *     sub_18004F81C @ 0x18004F81C (sub_18004F81C.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004F73C(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( sub_18004ECE0(a1) )
  {
    sub_1800113D0(
      v10,
      "Mesh::SetJointData() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v5 = (unsigned int)sub_1800113D0(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v5, v6, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v1 || !v3 )
  {
    sub_1800113D0(
      v9,
      "Mesh::SetJointData() -- jointWeightArray and jointIndexArray must be non-null and contain N elements, where N=Mesh"
      "::GetVertexCount()");
    v7 = sub_1800113D0(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18004DBD8(pExceptionObject, (__int64)v7, v8, (__int64)v9);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_18004F81C(v2, v1, v3, *(unsigned int *)(v2 + 120));
}
