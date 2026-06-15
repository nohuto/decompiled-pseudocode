/*
 * XREFs of ?AddEndpointPropertyChangeNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_ENDPOINT_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x1400652E8
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140029210 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140009BF4 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140009C1C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140065A98 (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@PEAPEAVCAPOEndpointN.c)
 *     ?AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400695F8 (-AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProc.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAPOProcessingHost::AddEndpointPropertyChangeNotificationClient(
        CAPOProcessingHost *this,
        struct IMMDevice **a2,
        struct CAPOProcessingHostObject *a3)
{
  struct IMMDevice *v6; // r14
  unsigned int v7; // ebx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v9; // eax
  int EndpointNotificationHandler; // eax
  __int64 v11; // rcx
  HRESULT Instance; // eax
  __int64 v13; // rdx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int16 *v17; // [rsp+68h] [rbp+10h] BYREF
  CAPOEndpointNotificationsHandler *v18; // [rsp+78h] [rbp+20h] BYREF

  v6 = *a2;
  if ( *a2 )
  {
    v17 = 0LL;
    GetId = v6->lpVtbl->GetId;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v17,
      0LL);
    v9 = ((__int64 (__fastcall *)(struct IMMDevice *, unsigned __int16 **))GetId)(v6, &v17);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v9);
LABEL_19:
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v17);
      return v7;
    }
    v18 = 0LL;
    EndpointNotificationHandler = CAPOProcessingHost::GetEndpointNotificationHandler(this, v17, *a2, &v18);
    v7 = EndpointNotificationHandler;
    if ( EndpointNotificationHandler < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)EndpointNotificationHandler);
LABEL_18:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v18);
      goto LABEL_19;
    }
    CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient(v18, a3);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    if ( !*((_BYTE *)this + 72) )
    {
      v11 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = 0LL;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      Instance = CoCreateInstance(
                   &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                   0LL,
                   0x17u,
                   &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                   (LPVOID *)this + 3);
      v7 = Instance;
      if ( Instance < 0 )
      {
        v13 = 175LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)Instance);
LABEL_17:
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
        goto LABEL_18;
      }
      Instance = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 48LL))(
                   *((_QWORD *)this + 3),
                   (char *)this + 8);
      v7 = Instance;
      if ( Instance < 0 )
      {
        v13 = 176LL;
        goto LABEL_14;
      }
      *((_BYTE *)this + 72) = 1;
    }
    v7 = 0;
    goto LABEL_17;
  }
  v7 = -2147467261;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA2,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)0x80004003LL);
  return v7;
}
