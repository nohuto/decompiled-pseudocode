/*
 * XREFs of ?AddEndpointVolumeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400654F4
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140029210 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140009BF4 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140009C1C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140065A98 (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@PEAPEAVCAPOEndpointN.c)
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400696E8 (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAPOProcessingHost::AddEndpointVolumeNotificationClient(
        CAPOProcessingHost *this,
        struct IMMDevice **a2,
        struct CAPOProcessingHostObject *a3)
{
  struct IMMDevice *v6; // rsi
  unsigned int v7; // ebx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v9; // eax
  int EndpointNotificationHandler; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 *v13; // [rsp+48h] [rbp+10h] BYREF
  struct CAPOEndpointNotificationsHandler *v14; // [rsp+58h] [rbp+20h] BYREF

  v6 = *a2;
  if ( *a2 )
  {
    v13 = 0LL;
    GetId = v6->lpVtbl->GetId;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v13,
      0LL);
    v9 = ((__int64 (__fastcall *)(struct IMMDevice *, unsigned __int16 **))GetId)(v6, &v13);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v14 = 0LL;
      EndpointNotificationHandler = CAPOProcessingHost::GetEndpointNotificationHandler(this, v13, *a2, &v14);
      v7 = EndpointNotificationHandler;
      if ( EndpointNotificationHandler >= 0 )
      {
        CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient(v14, a3);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBF,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)EndpointNotificationHandler);
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v9);
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v13);
  }
  else
  {
    v7 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x80004003LL);
  }
  return v7;
}
