/*
 * XREFs of ?RegisterForLoopbackEndpointChangeNotifications@CAecAttributes@@QEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180105D2C
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180039EF0 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800128C0 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800157C0 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x1800E3AE0 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@PEAVCAecAttributes@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@$$QEAPEAVCAecAttributes@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180104D34 (--$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@PEAVCAecAttributes@@W4__.c)
 *     ??$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXPEBG_K@Z@wistd@@KPEAPEAU?$wnf_array_subscription_state@G@01@@Z @ 0x180104FD4 (--$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAecAttributes::RegisterForLoopbackEndpointChangeNotifications(
        CAecAttributes *this,
        struct Microsoft::WRL::WeakRef *a2,
        int a3)
{
  int v5; // eax
  int v6; // ecx
  int wnf_array_subscription; // eax
  wil::details *v8; // rdx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  wil::details *v14; // [rsp+20h] [rbp-69h] BYREF
  int v15; // [rsp+28h] [rbp-61h] BYREF
  __int64 v16[2]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v18[15]; // [rsp+48h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 2) )
  {
    v5 = *((_DWORD *)this + 6);
    if ( v5 >= 0 )
    {
      v6 = 2;
      if ( v5 <= 1 )
      {
        v15 = 0;
        if ( v5 != 1 )
          v6 = 0;
        LODWORD(v14) = v6;
        v16[0] = (__int64)this;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 5);
        if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,CAecAttributes *,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
                    (_QWORD *)this + 5,
                    v16,
                    (int *)&v14,
                    &v15) >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)g_DeviceEnumerator + 48LL))(
                 g_DeviceEnumerator,
                 *((_QWORD *)this + 5));
          if ( v9 < 0 )
          {
            v10 = 167LL;
            goto LABEL_16;
          }
        }
      }
      else if ( v5 == 2 )
      {
        v18[0] = off_18016C170;
        v18[1] = this;
        v18[13] = v18;
        wnf_array_subscription = wil::details::make_wnf_array_subscription_state<unsigned short>(
                                   2LL,
                                   (__int64)v17,
                                   a3,
                                   &v14);
        v8 = 0LL;
        if ( wnf_array_subscription >= 0 )
          v8 = v14;
        v14 = v8;
        if ( (wil::details **)((char *)this + 48) != &v14 )
        {
          wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
            (wil::details **)this + 6,
            v8);
          v14 = 0LL;
        }
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
          &v14,
          v8);
        wistd::function<void (void)>::~function<void (void)>((__int64)v17);
        if ( !*((_QWORD *)this + 6) )
        {
          v9 = -2147024882;
          v10 = 177LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
            (const char *)(unsigned int)v9);
          return (unsigned int)v9;
        }
      }
    }
    v12 = *((_QWORD *)this + 4);
    v13 = *(_QWORD *)a2;
    if ( v12 != *(_QWORD *)a2 )
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)a2);
        v12 = *((_QWORD *)this + 4);
      }
      v16[0] = v12;
      *((_QWORD *)this + 4) = v13;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v16);
    }
  }
  return 0LL;
}
