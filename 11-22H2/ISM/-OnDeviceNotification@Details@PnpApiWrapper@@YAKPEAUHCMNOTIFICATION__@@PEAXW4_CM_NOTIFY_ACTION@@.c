/*
 * XREFs of ?OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800149C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ @ 0x1800638EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DLSDR@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800D1000 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E6A8C (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ @ 0x1800E7B74 (-GetAddressOf@HString@Wrappers@WRL@Microsoft@@QEAAPEAPEAUHSTRING__@@XZ.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800F9BEC (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall PnpApiWrapper::Details::OnDeviceNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  const wchar_t *v7; // r14
  PnpDevice *v8; // rdi
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  unsigned int v14; // ebx
  int v15; // r8d
  int v16; // r8d
  HSTRING *AddressOf; // rax
  unsigned __int64 v19; // rdi
  UINT32 v20; // eax
  int v21; // edx
  unsigned int v22; // r8d
  HRESULT v23; // eax
  int v24; // edx
  unsigned int v25; // r8d
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-50h] BYREF
  HSTRING string; // [rsp+40h] [rbp-38h] BYREF

  if ( !a2 || *(_QWORD *)a2 != a1 )
    return 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !a3 )
  {
    v14 = 3;
    goto LABEL_27;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    v14 = 4;
LABEL_27:
    v7 = (const wchar_t *)(a4 + 24);
    goto LABEL_28;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
    {
      v14 = 5;
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_19:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
    {
      v14 = 6;
      goto LABEL_18;
    }
    goto LABEL_21;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = 2;
      v15 = v13 - 2;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
            return 0LL;
        }
        else
        {
          v14 = 1;
        }
      }
      else
      {
        v14 = 0;
      }
      v7 = (const wchar_t *)(a4 + 8);
      goto LABEL_28;
    }
    goto LABEL_23;
  }
LABEL_21:
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
  {
LABEL_23:
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl) )
      return 0LL;
    v14 = 8;
    goto LABEL_18;
  }
  v14 = 7;
LABEL_18:
  v8 = *(PnpDevice **)(a2 + 16);
LABEL_28:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DLSDR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DLSDR>::GetImpl'::`2'::impl)
    && v8 )
  {
    v26 = 0LL;
    AddressOf = Microsoft::WRL::Wrappers::HString::GetAddressOf((Microsoft::WRL::Wrappers::HString *)&v26);
    if ( PnpDevice::GetInterfacePath(v8, AddressOf) >= 0 )
    {
      try
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 8))(v14, v26, *((_QWORD *)v8 + 18));
      }
      catch ( ... )
      {
      }
    }
    Microsoft::WRL::Wrappers::HString::~HString((Microsoft::WRL::Wrappers::HString *)&v26);
  }
  else
  {
    v19 = (a4 + a5 - (unsigned __int64)v7) >> 1;
    if ( v19 <= 0xFFFFFFFF )
    {
      v20 = wcsnlen(v7, (a4 + a5 - (unsigned __int64)v7) >> 1);
      if ( v20 )
      {
        if ( v20 < v19 )
        {
          string = 0LL;
          if ( v20 + 1 < v20 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v21, v22);
            __debugbreak();
          }
          v23 = WindowsCreateStringReference(v7, v20, &hstringHeader, &string);
          if ( v23 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23, v24, v25);
            __debugbreak();
          }
          (*(void (__fastcall **)(_QWORD, HSTRING, _QWORD))(a2 + 8))(v14, string, *(_QWORD *)(a2 + 16));
        }
      }
    }
  }
  return 0LL;
}
