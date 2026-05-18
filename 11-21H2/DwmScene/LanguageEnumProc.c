/*
 * XREFs of LanguageEnumProc @ 0x18002C000
 * Callers:
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18002C244 @ 0x18002C244 (sub_18002C244.c)
 *     sub_18002C3A0 @ 0x18002C3A0 (sub_18002C3A0.c)
 *     sub_18002C574 @ 0x18002C574 (sub_18002C574.c)
 *     sub_18002C864 @ 0x18002C864 (sub_18002C864.c)
 *     sub_1800FC3BC @ 0x1800FC3BC (sub_1800FC3BC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LanguageEnumProc(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _BYTE v10[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v12[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( !(unsigned __int8)sub_18002C864() )
  {
    sub_1800113D0(v12, "Mutex::doUnlock() -- detected attempt to unlock a mutex that is not owned by this thread");
    v8 = sub_1800113D0(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_18002C244(pExceptionObject, v8, v9, v12);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  v2 = sub_18002C574();
  LOBYTE(v3) = 1;
  v4 = (_QWORD *)sub_18002C3A0(a1, v10, v3);
  v5 = *(_QWORD *)(v2 + 8);
  v6 = *v4 + 16LL;
  if ( v6 != v5 )
  {
    do
    {
      *(_QWORD *)(v6 - 16) = *(_QWORD *)v6;
      *(_BYTE *)(v6 - 8) = *(_BYTE *)(v6 + 8);
      v6 += 16LL;
    }
    while ( v6 != v5 );
    v5 = *(_QWORD *)(v2 + 8);
  }
  *(_QWORD *)(v2 + 8) = v5 - 16;
  return sub_1800FC3BC(a1);
}
