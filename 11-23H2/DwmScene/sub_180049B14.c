/*
 * XREFs of sub_180049B14 @ 0x180049B14
 * Callers:
 *     sub_180013AF0 @ 0x180013AF0 (sub_180013AF0.c)
 *     sub_180048BA4 @ 0x180048BA4 (sub_180048BA4.c)
 *     sub_18008CE00 @ 0x18008CE00 (sub_18008CE00.c)
 *     sub_18008CFB8 @ 0x18008CFB8 (sub_18008CFB8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180047B54 @ 0x180047B54 (sub_180047B54.c)
 *     sub_180048AF0 @ 0x180048AF0 (sub_180048AF0.c)
 *     sub_180049BEC @ 0x180049BEC (sub_180049BEC.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

__int64 __fastcall sub_180049B14(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // eax
  int v4; // r8d
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD v8[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( sub_180048AF0(a1) )
  {
    sub_180010DD0(
      v9,
      (__int64)"Mesh::SetUV0() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v3 = (unsigned int)sub_180010DD0(
                         v8,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v3, v4, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v1 )
  {
    sub_180010DD0(
      v8,
      (__int64)"Mesh::SetUV0() -- uvArray must be non-null and contain N elements, where N=Mesh::GetVertexCount()");
    v5 = sub_180010DD0(
           v9,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180047B54(pExceptionObject, (__int64)v5, v6, (__int64)v8);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_180049BEC(v2, v1, *(unsigned int *)(v2 + 120));
}
