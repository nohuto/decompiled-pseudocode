/*
 * XREFs of sub_18008E4F0 @ 0x18008E4F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18001DD9C @ 0x18001DD9C (sub_18001DD9C.c)
 *     sub_18003725C @ 0x18003725C (sub_18003725C.c)
 *     sub_180043EE4 @ 0x180043EE4 (sub_180043EE4.c)
 *     sub_1800510D0 @ 0x1800510D0 (sub_1800510D0.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18008E4F0(__int64 a1, _QWORD *a2, _DWORD *a3, __int64 a4)
{
  _QWORD *v7; // rax
  __int64 *v8; // rax
  void *v9; // rax
  void *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD v14[4]; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v16[4]; // [rsp+98h] [rbp-90h] BYREF
  _BYTE v17[32]; // [rsp+B8h] [rbp-70h] BYREF
  _BYTE v18[32]; // [rsp+D8h] [rbp-50h] BYREF
  _BYTE v19[32]; // [rsp+F8h] [rbp-30h] BYREF

  if ( (*a3 & 0x10000) == 0 )
  {
    _RTtypeid(a1);
    sub_180043EE4();
    v7 = (_QWORD *)sub_18003725C(a1);
    v8 = sub_18001DD9C(v16, "Component::Clone() -- component '", v7);
    v9 = (void *)sub_18001DC84((__int64)v17, v8);
    v10 = (void *)sub_18001DC84((__int64)v18, v9);
    v11 = sub_18001DC84((__int64)v19, v10);
    v12 = sub_1800113D0(
            v14,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\component.cpp");
    sub_1800510D0(pExceptionObject, (__int64)v12, v13, v11);
    throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180010910(a4);
  return a2;
}
