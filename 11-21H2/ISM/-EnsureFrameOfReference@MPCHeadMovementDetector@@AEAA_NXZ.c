/*
 * XREFs of ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800B82C8
 * Callers:
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800B7F74 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800B7AE0 (--$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Window.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MPCHeadMovementDetector::EnsureFrameOfReference(
        MPCHeadMovementDetector *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 *v4; // r14
  char v5; // di
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, char *); // rsi
  __int64 *v9; // r15
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, char *); // r12
  __int64 *v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  const char *v17; // r9
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, __int64 *); // rbp
  __int64 v20; // rcx
  int v21; // eax
  const char *v22; // r9
  int v23; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 88);
  v5 = 0;
  if ( *((_QWORD *)this + 11) )
    return 1;
  wil::GetActivationFactory<Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal>(
    (const WCHAR *)&v25,
    a2,
    a3);
  v7 = v25;
  v8 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 64LL);
  v9 = (__int64 *)((char *)this + 72);
  v10 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = v8(v7, (char *)this + 72);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v11,
      v23);
  v12 = *v9;
  if ( *v9
    || (wil::details::in1diag3::_Log_Hr(
          retaddr,
          180LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)0x8000FFFFLL),
        (v12 = *v9) != 0) )
  {
    v13 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 88LL);
    v14 = (__int64 *)((char *)this + 80);
    v15 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = v13(v12, (char *)this + 80);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v16,
        v23);
    v18 = *v14;
    if ( !*v14 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        190LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v17);
    v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 96LL);
    v20 = *v4;
    *v4 = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v21 = v19(v18, v4);
    if ( v21 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        (const char *)(unsigned int)v21,
        v23);
    if ( !*v4 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        194LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
        v22);
    v5 = 1;
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v25);
  return v5;
}
