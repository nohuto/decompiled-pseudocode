/*
 * XREFs of ?EnsureCamMicUsageInitialized@CPowerReferenceManager@@AEAA_NXZ @ 0x180104580
 * Callers:
 *     _lambda_4c52c3d7a35de23da86c7b5c78016784_::operator() @ 0x180103E1C (_lambda_4c52c3d7a35de23da86c7b5c78016784_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5FBC (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180103478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010452C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CPowerReferenceManager::EnsureCamMicUsageInitialized(CPowerReferenceManager *this)
{
  CPowerReferenceManager *v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int ActivationFactory; // eax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, PVOID, char *); // rdi
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  const char *v8; // r9
  bool v9; // bl
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  CPowerReferenceManager *v12; // [rsp+28h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = this;
  v12 = this;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 608);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 608));
  v13 = v2;
  if ( !*((_QWORD *)v1 + 81) )
  {
    v11 = 0LL;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.CapabilityAccess.Management.CapabilityUsage",
      0x3Du,
      0x3Cu);
    ActivationFactory = RoGetActivationFactory(v15, &GUID_42947746_4ea0_48c2_9274_062ed61f8daa, &v11);
    try
    {
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          36LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)(unsigned int)ActivationFactory,
          v11);
      v4 = v11;
      v5 = *(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v11 + 48LL);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)v1 + 81);
      v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader);
      v7 = v5(v4, v6[1].Reserved.Reserved1, (char *)v1 + 648);
      if ( v7 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          37LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
          (const char *)(unsigned int)v7,
          v11);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x27,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        v8);
      v1 = v12;
    }
  }
  v9 = *((_QWORD *)v1 + 81) != 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
  return v9;
}
