/*
 * XREFs of sub_180036888 @ 0x180036888
 * Callers:
 *     sub_180013140 @ 0x180013140 (sub_180013140.c)
 *     sub_180015E00 @ 0x180015E00 (sub_180015E00.c)
 *     sub_180019460 @ 0x180019460 (sub_180019460.c)
 *     sub_180036540 @ 0x180036540 (sub_180036540.c)
 *     sub_1800366A0 @ 0x1800366A0 (sub_1800366A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180036888(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(_QWORD **)(a1 + 704);
  if ( v2 == *(_QWORD **)(a1 + 712) )
  {
    sub_1800113D0(v8, "Engine does not have default scene. Engine is probably not initialized.");
    v5 = (unsigned int)sub_1800113D0(
                         v7,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\engine.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v5, v6, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = v2[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a2 = *v2;
  a2[1] = v2[1];
  return a2;
}
