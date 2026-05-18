/*
 * XREFs of sub_18004951C @ 0x18004951C
 * Callers:
 *     sub_180048BA4 @ 0x180048BA4 (sub_180048BA4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180047B54 @ 0x180047B54 (sub_180047B54.c)
 *     sub_180048AF0 @ 0x180048AF0 (sub_180048AF0.c)
 *     sub_1800495FC @ 0x1800495FC (sub_1800495FC.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004951C(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp+Fh] BYREF

  if ( sub_180048AF0(a1) )
  {
    sub_180010DD0(
      v10,
      (__int64)"Mesh::SetJointData() -- Modifying mesh buffers apart from MappedResource while it is mapped is not supported.");
    v4 = (unsigned int)sub_180010DD0(
                         v9,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v4, v5, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !v1 || !v3 )
  {
    sub_180010DD0(
      v9,
      (__int64)"Mesh::SetJointData() -- jointWeightArray and jointIndexArray must be non-null and contain N elements, whe"
               "re N=Mesh::GetVertexCount()");
    v7 = sub_180010DD0(
           v10,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180047B54(pExceptionObject, (__int64)v7, v8, (__int64)v9);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_1800495FC(v2, v1, v3, *(unsigned int *)(v2 + 120));
}
