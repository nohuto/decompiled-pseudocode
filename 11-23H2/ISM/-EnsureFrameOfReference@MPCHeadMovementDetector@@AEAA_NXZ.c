/*
 * XREFs of ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800D1138
 * Callers:
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800D0DE8 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800D0950 (--$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Window.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MPCHeadMovementDetector::EnsureFrameOfReference(
        MPCHeadMovementDetector *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, char *); // r14
  __int64 *v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r14
  __int64 (__fastcall *v12)(__int64, char *); // r15
  __int64 v13; // rcx
  int v14; // eax
  const char *v15; // r9
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, __int64 *); // rbp
  __int64 v18; // rcx
  int v19; // eax
  const char *v20; // r9
  int v21; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 88);
  if ( !*((_QWORD *)this + 11) )
  {
    wil::GetActivationFactory<Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal>(
      (const WCHAR *)&v23,
      a2,
      a3);
    v5 = v23;
    v6 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 64LL);
    v7 = (__int64 *)((char *)this + 72);
    v8 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = v6(v5, (char *)this + 72);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v9,
        v21);
    if ( !*v7 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        180LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)0x8000FFFFLL);
    v10 = *v7;
    if ( !*v7 )
    {
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v23);
      return 0;
    }
    v12 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 88LL);
    v13 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v12(v10, (char *)this + 80);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v14,
        v21);
    v16 = *((_QWORD *)this + 10);
    if ( !v16 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xBE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v15);
    v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 96LL);
    v18 = *v4;
    *v4 = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v19 = v17(v16, v4);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v19,
        v21);
    if ( !*v4 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xC2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v20);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v23);
  }
  return 1;
}
