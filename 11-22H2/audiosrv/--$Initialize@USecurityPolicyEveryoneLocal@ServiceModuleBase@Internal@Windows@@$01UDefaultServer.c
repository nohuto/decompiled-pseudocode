/*
 * XREFs of ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x18005B940
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1?CoDecrementMTAUsage@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUCO_MTA_USAGE_COOKIE__@@@Z @ 0x18005C4E0 (-reset@-$unique_storage@U-$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1-CoDecrement.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$lambda_call@V_lambda_0844bed45d04fee2db371e67ed993d11_@@@details@wil@@QEAA@XZ @ 0x1800EEDF4 (--1-$lambda_call@V_lambda_0844bed45d04fee2db371e67ed993d11_@@@details@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ServiceModuleBase::Initialize<Windows::Internal::ServiceModuleBase::SecurityPolicyEveryoneLocal,2,Windows::Internal::DefaultServerDescriptor>(
        _DWORD *a1)
{
  HRESULT Instance; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdx
  _DWORD *v6; // [rsp+40h] [rbp-18h] BYREF
  char v7; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a1;
  v7 = 1;
  wil::details::unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>::reset(
    a1 + 2,
    0LL);
  Instance = CoIncrementMTAUsage(a1 + 2);
  v3 = Instance;
  a1[4] = Instance;
  if ( Instance < 0 )
  {
    v5 = 99LL;
  }
  else
  {
    Instance = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 32LL))(a1);
    v3 = Instance;
    if ( Instance < 0 )
    {
      v5 = 123LL;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
      *((_BYTE *)a1 + 20) = 1;
      Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((__int64 *)a1 + 3);
      Instance = CoCreateInstance(
                   &CLSID_ContextSwitcher,
                   0LL,
                   1u,
                   &GUID_000001da_0000_0000_c000_000000000046,
                   (LPVOID *)a1 + 3);
      v3 = Instance;
      if ( Instance < 0 )
      {
        v5 = 141LL;
      }
      else
      {
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(struct tagComCallData *), _DWORD *, GUID *, int, _QWORD))(**((_QWORD **)a1 + 3) + 24LL))(
                     *((_QWORD *)a1 + 3),
                     Windows::Internal::ServiceModuleBase::ConnectCallbackThunk,
                     a1,
                     &IID_IContextCallback,
                     5,
                     0LL);
        v3 = Instance;
        if ( Instance >= 0 )
          return 0LL;
        v5 = 144LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"onecore\\internal\\com\\inc\\ComServiceHelper.h",
    (const char *)(unsigned int)Instance);
  wil::details::lambda_call<_lambda_0844bed45d04fee2db371e67ed993d11_>::~lambda_call<_lambda_0844bed45d04fee2db371e67ed993d11_>(&v6);
  return v3;
}
