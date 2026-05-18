/*
 * XREFs of sub_18004FB58 @ 0x18004FB58
 * Callers:
 *     sub_180014370 @ 0x180014370 (sub_180014370.c)
 *     sub_18004ED94 @ 0x18004ED94 (sub_18004ED94.c)
 *     sub_180050090 @ 0x180050090 (sub_180050090.c)
 *     sub_180050100 @ 0x180050100 (sub_180050100.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18004DBD8 @ 0x18004DBD8 (sub_18004DBD8.c)
 *     sub_18004ECE0 @ 0x18004ECE0 (sub_18004ECE0.c)
 *     sub_18004FC34 @ 0x18004FC34 (sub_18004FC34.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

__int64 __fastcall sub_18004FB58(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // r8
  __int64 v4; // r9
  _QWORD *v6; // rax
  __int64 v7; // r8
  unsigned int v8; // eax
  int v9; // r8d
  _QWORD v10[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( sub_18004ECE0(a1) )
  {
    sub_1800113D0(
      v11,
      "Mesh::SetTangents() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v8 = (unsigned int)sub_1800113D0(
                         v10,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v8, v9, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v1 )
  {
    sub_1800113D0(
      v10,
      "Mesh::SetTangents() -- tangentArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v6 = sub_1800113D0(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18004DBD8(pExceptionObject, (__int64)v6, v7, (__int64)v10);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  LOBYTE(v4) = v3;
  return sub_18004FC34(v2, v1, *(unsigned int *)(v2 + 120), v4);
}
