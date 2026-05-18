/*
 * XREFs of sub_18004FCA0 @ 0x18004FCA0
 * Callers:
 *     sub_180014370 @ 0x180014370 (sub_180014370.c)
 *     sub_18009BCE8 @ 0x18009BCE8 (sub_18009BCE8.c)
 *     sub_18009BEB0 @ 0x18009BEB0 (sub_18009BEB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18004ECE0 @ 0x18004ECE0 (sub_18004ECE0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18004FCA0(__int64 a1)
{
  char result; // al
  int v2; // edx
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  result = sub_18004ECE0(a1);
  if ( result )
  {
    sub_1800113D0(v7, "Mesh::SetTopology() -- Modification of a mesh that while it is mapped is not supported.");
    v4 = (unsigned int)sub_1800113D0(
                         v6,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\mesh.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(v3 + 300) = v2;
  return result;
}
