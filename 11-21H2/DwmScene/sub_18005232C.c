/*
 * XREFs of sub_18005232C @ 0x18005232C
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18005232C(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // eax
  int v5; // r8d
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v2) >> 3) )
  {
    sub_1800113D0(v7, "Out of range");
    v4 = (unsigned int)sub_1800113D0(
                         v6,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v4, v5, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return *(_BYTE *)(88 * a2 + v2 + 16);
}
