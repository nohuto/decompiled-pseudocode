/*
 * XREFs of _lambda_0b51ff8d1905919b0baadac0918cf5fb_::operator() @ 0x180059B08
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::IAmbientManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs_____::_)(Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___1_Windows::Devices::Lights::Internal::IAmbientManager___Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs___::Invoke @ 0x18005A1C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18005A1C0.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001AF80 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$com_ptr_t@UILampArrayStaticsPrivate@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180059A74 (--1-$com_ptr_t@UILampArrayStaticsPrivate@Internal@Lights@Devices@Windows@@Uerr_returncode_policy.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0190 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0b51ff8d1905919b0baadac0918cf5fb_::operator()(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2, __int64 a3)
{
  __int64 *v5; // rax
  const char *v6; // r9
  __int64 *v7; // rbx
  __int64 v8; // rcx
  RTL_SRWLOCK *v9; // r8
  __int64 v10; // rax
  _QWORD *Ptr; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  SRWLock = a2;
  if ( !LOBYTE((*a1)[23].Ptr) )
  {
    v5 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( !v7 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x2D1,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        v6);
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    SRWLock = 0LL;
    v8 = v7[2];
    v7[2] = a3;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    wil::com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>((__int64 *)&SRWLock);
    wil::srwlock::lock_exclusive(*a1 + 19, &SRWLock);
    v9 = *a1;
    v10 = (__int64)&(*a1)[15];
    Ptr = (*a1)[16].Ptr;
    if ( *Ptr != v10 )
      __fastfail(3u);
    *v7 = v10;
    v7[1] = (__int64)Ptr;
    *Ptr = v7;
    *(_QWORD *)(v10 + 8) = v7;
    ++*(_QWORD *)(v10 + 16);
    QueueUserAPC(LampArrayRawInputProvider::AmbientUpdateAPC, v9[22].Ptr, (ULONG_PTR)v9);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return 0LL;
}
