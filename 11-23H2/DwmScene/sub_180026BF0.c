/*
 * XREFs of sub_180026BF0 @ 0x180026BF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180017CC8 @ 0x180017CC8 (sub_180017CC8.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180026BF0(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int v5; // eax
  int v6; // r8d
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a2 + 28) > *(_DWORD *)(a2 + 32) )
  {
    sub_180010DD0(
      v9,
      (__int64)"RenderDevice::InitializeDevice() -- MinFeatureLevelRequired must not exceed MaxFeatureLevelRequired");
    v5 = (unsigned int)sub_180010DD0(
                         v8,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\renderer.cpp");
    sub_18006ED7C((unsigned int)pExceptionObject, v5, v6, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180017CC8(a1 + 288, a2);
  *(_OWORD *)(a1 + 384) = *a3;
  *(_OWORD *)(a1 + 400) = a3[1];
  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 308);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  *(_BYTE *)(a1 + 3976) = 1;
  return result;
}
