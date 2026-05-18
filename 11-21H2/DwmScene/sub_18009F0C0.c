/*
 * XREFs of sub_18009F0C0 @ 0x18009F0C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800510D0 @ 0x1800510D0 (sub_1800510D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009F0C0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 96LL))(*a2, 1LL) )
  {
    v4 = *(_QWORD *)(a1 + 144);
    if ( !v4 || ((v4 - 1) & v4) != 0 )
    {
      sub_1800113D0(
        v9,
        "ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
      v6 = sub_1800113D0(
             v8,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
      sub_1800510D0(pExceptionObject, (__int64)v6, v7, (__int64)v9);
      throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
    }
  }
  return sub_180010910((__int64)a2);
}
