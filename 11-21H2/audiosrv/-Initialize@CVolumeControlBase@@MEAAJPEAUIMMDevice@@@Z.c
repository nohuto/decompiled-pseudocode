/*
 * XREFs of ?Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z @ 0x180045640
 * Callers:
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180044E0C (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@EEAAJPEAUIMMDevice@@@Z @ 0x1800CC3F0 (-Initialize@CVolumeSoftware@@EEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800462C0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::Initialize(CVolumeControlBase *this, struct IUnknown *a2)
{
  _QWORD *v4; // r14
  int v5; // ebx
  struct IUnknown *v6; // rcx
  int v7; // ecx
  struct IUnknown *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = (_QWORD *)((char *)this + 56);
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, char *))a2->lpVtbl[1].Release)(a2, (char *)this + 56);
  if ( v5 < 0 )
    goto LABEL_7;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 64,
    0LL);
  mmdDevGetInstanceIdFromMMDeviceId(*v4, (char *)this + 64);
  v6 = v9;
  if ( v9 != a2 )
  {
    ATL::AtlComQIPtrAssign(&v9, a2, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v6 = v9;
  }
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v6->lpVtbl[1].QueryInterface)(v6, (char *)this + 72);
  if ( v5 < 0
    || (v5 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 240LL))(this),
        v7 = *((_DWORD *)this + 18),
        *((_QWORD *)this + 28) = *v4,
        *((_DWORD *)this + 58) = v7,
        v5 < 0) )
  {
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::Initialize", 0x9Fu, v5);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  return (unsigned int)v5;
}
