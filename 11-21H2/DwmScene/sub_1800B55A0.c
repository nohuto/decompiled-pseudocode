/*
 * XREFs of sub_1800B55A0 @ 0x1800B55A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180028864 @ 0x180028864 (sub_180028864.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_1800B3D60 @ 0x1800B3D60 (sub_1800B3D60.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800B3E48 @ 0x1800B3E48 (sub_1800B3E48.c)
 *     sub_1800B4028 @ 0x1800B4028 (sub_1800B4028.c)
 *     sub_1800B4100 @ 0x1800B4100 (sub_1800B4100.c)
 *     sub_1800B423C @ 0x1800B423C (sub_1800B423C.c)
 *     sub_1800B4278 @ 0x1800B4278 (sub_1800B4278.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800B55A0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 *v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // r9
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD v13[3]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15[22]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v16[4]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+138h] [rbp+38h] BYREF

  v2 = a1 + 8;
  v13[2] = a1 + 8;
  sub_18002C84C(a1 + 8);
  if ( *(_DWORD *)(a1 + 16) != 1 )
  {
    sub_1800113D0(v16, "Attempt to call EndTimeSpan() on a query marker that wasn't a timespan.");
    v11 = sub_1800113D0(
            v14,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\gpupro"
            "filer\\gpuprofilerframe.cpp");
    sub_180079B60(pExceptionObject, (__int64)v11, v12, (const char *)v16, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v3 = a1 + 32;
  if ( sub_1800B4028() )
  {
    v4 = sub_1800B423C(a1 + 32, v13);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 72LL))(*v4);
    sub_180010910((__int64)v13);
    v5 = (__int64 *)sub_180028864(*(_QWORD *)(a1 + 24), (__int64)v15);
    v6 = (_QWORD *)(a1 + 216);
    sub_1800B3E48((__int64)v6, v5);
    sub_1800B3DDC((__int64)v15);
    if ( sub_1800B4028() )
    {
      sub_1800B4278(v3, v16);
      v8 = sub_1800B423C(v7, v14);
      sub_1800B4100(v6, v8, v9);
    }
    else
    {
      sub_1800B3D60((__int64)v15);
      sub_1800B3E48(v3, v15);
      sub_1800B3DDC((__int64)v15);
    }
  }
  return j_LanguageEnumProc(v2);
}
