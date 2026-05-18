/*
 * XREFs of sub_18002C0EC @ 0x18002C0EC
 * Callers:
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18002C244 @ 0x18002C244 (sub_18002C244.c)
 *     sub_18002C3A0 @ 0x18002C3A0 (sub_18002C3A0.c)
 *     sub_18002C574 @ 0x18002C574 (sub_18002C574.c)
 *     sub_18002C864 @ 0x18002C864 (sub_18002C864.c)
 *     sub_1800FC41C @ 0x1800FC41C (sub_1800FC41C.c)
 */

__int64 __fastcall sub_18002C0EC(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _BYTE v9[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v11[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( !(unsigned __int8)sub_18002C864() )
  {
    sub_1800113D0(v11, "Mutex::doUnlock() -- detected attempt to unlock a mutex that is not owned by this thread");
    v7 = sub_1800113D0(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_18002C244(pExceptionObject, v7, v8, v11);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  v2 = sub_18002C574();
  v3 = (_QWORD *)sub_18002C3A0(a1, v9, 0LL);
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *v3 + 16LL;
  if ( v5 != v4 )
  {
    do
    {
      *(_QWORD *)(v5 - 16) = *(_QWORD *)v5;
      *(_BYTE *)(v5 - 8) = *(_BYTE *)(v5 + 8);
      v5 += 16LL;
    }
    while ( v5 != v4 );
    v4 = *(_QWORD *)(v2 + 8);
  }
  *(_QWORD *)(v2 + 8) = v4 - 16;
  return sub_1800FC41C(a1);
}
