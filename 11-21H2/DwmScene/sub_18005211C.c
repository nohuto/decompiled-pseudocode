/*
 * XREFs of sub_18005211C @ 0x18005211C
 * Callers:
 *     sub_1800520F8 @ 0x1800520F8 (sub_1800520F8.c)
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_1800AC560 @ 0x1800AC560 (sub_1800AC560.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18005211C(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v9[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a1 + 104);
  if ( a3 >= 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v3) >> 3) )
  {
    sub_1800113D0(v10, "Out of range");
    v7 = (unsigned int)sub_1800113D0(
                         v9,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v7, v8, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v4 = 88 * a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = *(_QWORD *)(88 * a3 + v3 + 8);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  *a2 = *(_QWORD *)(v4 + v3);
  a2[1] = *(_QWORD *)(v4 + v3 + 8);
  return a2;
}
