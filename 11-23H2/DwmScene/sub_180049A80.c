/*
 * XREFs of sub_180049A80 @ 0x180049A80
 * Callers:
 *     sub_180013AF0 @ 0x180013AF0 (sub_180013AF0.c)
 *     sub_18008CE00 @ 0x18008CE00 (sub_18008CE00.c)
 *     sub_18008CFB8 @ 0x18008CFB8 (sub_18008CFB8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180048AF0 @ 0x180048AF0 (sub_180048AF0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180049A80(__int64 a1)
{
  char result; // al
  int v2; // edx
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  result = sub_180048AF0(a1);
  if ( result )
  {
    sub_180010DD0(
      v7,
      (__int64)"Mesh::SetTopology() -- Modification of a mesh that while it is mapped is not supported.");
    v4 = (unsigned int)sub_180010DD0(
                         v6,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\mesh.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(v3 + 300) = v2;
  return result;
}
