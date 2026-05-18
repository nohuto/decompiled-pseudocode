/*
 * XREFs of sub_18008F6D0 @ 0x18008F6D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18004ACFC @ 0x18004ACFC (sub_18004ACFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008F6D0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 96LL))(*a2, 1LL);
  if ( !(_BYTE)result )
  {
    v5 = *(_QWORD *)(a1 + 144);
    if ( !v5 || (result = v5 - 1, ((v5 - 1) & v5) != 0) )
    {
      sub_180010DD0(
        v10,
        (__int64)"ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
      v6 = sub_180010DD0(
             v9,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\colortransform.cpp");
      sub_18004ACFC(pExceptionObject, (__int64)v6, v7, (__int64)v10);
      throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
    }
  }
  v8 = a2[1];
  if ( v8 )
    return sub_180010530(v8);
  return result;
}
