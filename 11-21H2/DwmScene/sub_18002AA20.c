/*
 * XREFs of sub_18002AA20 @ 0x18002AA20
 * Callers:
 *     sub_1800E201C @ 0x1800E201C (sub_1800E201C.c)
 *     sub_1800E2380 @ 0x1800E2380 (sub_1800E2380.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18005E488 @ 0x18005E488 (sub_18005E488.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18002AA20(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  char result; // al
  _QWORD *v6; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v9[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-60h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_1800113D0(v10, "Attempted to set an active size with a negative component");
    v7 = (unsigned int)sub_1800113D0(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\rendertarget.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v7, v8, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( sub_1800122C0((_QWORD *)(a1 + 96)) )
    sub_18005E488(*v4, a2);
  result = sub_1800122C0((_QWORD *)(a1 + 112));
  if ( result )
    return sub_18005E488(*v6, a2);
  return result;
}
