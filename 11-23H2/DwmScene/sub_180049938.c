/*
 * XREFs of sub_180049938 @ 0x180049938
 * Callers:
 *     sub_180013AF0 @ 0x180013AF0 (sub_180013AF0.c)
 *     sub_180048BA4 @ 0x180048BA4 (sub_180048BA4.c)
 *     sub_180049E50 @ 0x180049E50 (sub_180049E50.c)
 *     sub_180049EC0 @ 0x180049EC0 (sub_180049EC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180047B54 @ 0x180047B54 (sub_180047B54.c)
 *     sub_180048AF0 @ 0x180048AF0 (sub_180048AF0.c)
 *     sub_180049A14 @ 0x180049A14 (sub_180049A14.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

__int64 __fastcall sub_180049938(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v10[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( sub_180048AF0(a1) )
  {
    sub_180010DD0(
      v11,
      (__int64)"Mesh::SetTangents() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v5 = (unsigned int)sub_180010DD0(
                         v10,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v5, v6, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v1 )
  {
    sub_180010DD0(
      v10,
      (__int64)"Mesh::SetTangents() -- tangentArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v7 = sub_180010DD0(
           v11,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180047B54(pExceptionObject, (__int64)v7, v8, (__int64)v10);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  LOBYTE(v4) = v3;
  return sub_180049A14(v2, v1, *(unsigned int *)(v2 + 120), v4);
}
