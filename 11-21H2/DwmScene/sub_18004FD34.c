/*
 * XREFs of sub_18004FD34 @ 0x18004FD34
 * Callers:
 *     sub_180014370 @ 0x180014370 (sub_180014370.c)
 *     sub_18004ED94 @ 0x18004ED94 (sub_18004ED94.c)
 *     sub_18009BCE8 @ 0x18009BCE8 (sub_18009BCE8.c)
 *     sub_18009BEB0 @ 0x18009BEB0 (sub_18009BEB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18004DBD8 @ 0x18004DBD8 (sub_18004DBD8.c)
 *     sub_18004ECE0 @ 0x18004ECE0 (sub_18004ECE0.c)
 *     sub_18004FE0C @ 0x18004FE0C (sub_18004FE0C.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

__int64 __fastcall sub_18004FD34(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  unsigned int v6; // eax
  int v7; // r8d
  _QWORD v8[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( sub_18004ECE0(a1) )
  {
    sub_1800113D0(
      v9,
      "Mesh::SetUV0() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v6 = (unsigned int)sub_1800113D0(
                         v8,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v6, v7, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v1 )
  {
    sub_1800113D0(
      v8,
      "Mesh::SetUV0() -- uvArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v4 = sub_1800113D0(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_18004DBD8(pExceptionObject, (__int64)v4, v5, (__int64)v8);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_18004FE0C(v2, v1, *(unsigned int *)(v2 + 120));
}
