/*
 * XREFs of ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D120
 * Callers:
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x18005D874 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180014FF8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800EAF98 (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x1800EB2C8 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EE73C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_2d0fc716a24758c5659c2630b6d3cdc8__void_ @ 0x1801592D8 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_2d0fc716a24758c5659c26.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x1801594B0 (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AtmosCheck::RegisterForShellReadyNotifications(AtmosCheck *this)
{
  __int64 *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details **v6; // rbx
  wil::details **v7; // rax
  struct wil::details::wnf_subscription_state_base *v8; // rdx
  wil::details **v9; // rdi
  wil::details *v11; // [rsp+20h] [rbp-69h] BYREF
  __int64 v12; // [rsp+28h] [rbp-61h] BYREF
  AtmosCheck *v13; // [rsp+30h] [rbp-59h] BYREF
  __int64 v14[2]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v16[128]; // [rsp+50h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v13 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
  v12 = 0LL;
  v11 = (wil::details *)&v12;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v11);
  v3 = Microsoft::WRL::AsWeak<IInspectable>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, v2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 2955LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_15;
  }
  v15 = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64 *))(*(_QWORD *)g_PolicyManager + 392LL))(
         g_PolicyManager,
         &v15);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 2958LL;
    goto LABEL_5;
  }
  v6 = (wil::details **)((char *)this + 240);
  if ( !*((_QWORD *)this + 30) )
  {
    v14[0] = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v14[1] = (__int64)this;
    wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_2d0fc716a24758c5659c2630b6d3cdc8__void_(
      (__int64)v16,
      v14);
    v7 = (wil::details **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                            &v11,
                            (__int64)&v15,
                            (__int64)v16);
    v9 = v7;
    if ( v6 != v7 )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        v6,
        *v7);
      *v9 = 0LL;
    }
    if ( v11 )
      wil::details::delete_wnf_subscription_state(v11, v8);
    wistd::function<void (void)>::~function<void (void)>((__int64)v16);
  }
  v4 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v13);
  return v4;
}
