/*
 * XREFs of ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x180050550
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1?CoDecrementMTAUsage@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUCO_MTA_USAGE_COOKIE__@@@Z @ 0x18005068C (-reset@-$unique_storage@U-$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1-CoDecrement.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800C57A0 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ServiceModuleBase::Initialize<Windows::Internal::ServiceModuleBase::SecurityPolicyEveryoneLocal,2,Windows::Internal::DefaultServerDescriptor>(
        Windows::Internal::ServiceModuleBase *this)
{
  char v2; // si
  HRESULT Instance; // eax
  unsigned int v4; // edi
  __int64 v6; // rdx
  int ppv; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 1;
  wil::details::unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>::reset(
    (char *)this + 8,
    0LL);
  Instance = CoIncrementMTAUsage((char *)this + 8);
  v4 = Instance;
  *((_DWORD *)this + 4) = Instance;
  if ( Instance < 0 )
  {
    v6 = 99LL;
  }
  else
  {
    Instance = (*(__int64 (__fastcall **)(Windows::Internal::ServiceModuleBase *))(*(_QWORD *)this + 32LL))(this);
    v4 = Instance;
    if ( Instance < 0 )
    {
      v6 = 123LL;
    }
    else
    {
      (*(void (__fastcall **)(Windows::Internal::ServiceModuleBase *))(*(_QWORD *)this + 16LL))(this);
      *((_BYTE *)this + 20) = 1;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)this + 3);
      Instance = CoCreateInstance(
                   &CLSID_ContextSwitcher,
                   0LL,
                   1u,
                   &GUID_000001da_0000_0000_c000_000000000046,
                   (LPVOID *)this + 3);
      v4 = Instance;
      if ( Instance < 0 )
      {
        v6 = 141LL;
      }
      else
      {
        ppv = 5;
        Instance = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(struct tagComCallData *), Windows::Internal::ServiceModuleBase *, GUID *))(**((_QWORD **)this + 3) + 24LL))(
                     *((_QWORD *)this + 3),
                     Windows::Internal::ServiceModuleBase::ConnectCallbackThunk,
                     this,
                     &IID_IContextCallback);
        v4 = Instance;
        if ( Instance >= 0 )
        {
          v2 = 0;
          v4 = 0;
          goto LABEL_6;
        }
        v6 = 144LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"onecore\\internal\\com\\inc\\ComServiceHelper.h",
    (const char *)(unsigned int)Instance,
    ppv);
LABEL_6:
  if ( v2 )
    Windows::Internal::ServiceModuleBase::Uninitialize(this);
  return v4;
}
