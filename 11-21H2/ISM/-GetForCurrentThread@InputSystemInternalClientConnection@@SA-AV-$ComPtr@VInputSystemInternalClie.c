/*
 * XREFs of ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x1801208EC
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18007FF60 (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800B1580 (--0InputProcess@@AEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002BD90 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180087D3C (-InternalRelease@-$ComPtr@VAnimationDataProviderConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18012077C (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@@Z @ 0x180126408 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall InputSystemInternalClientConnection::GetForCurrentThread(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  Microsoft::Bamo::BaseBamoConnection **v5; // rax
  Microsoft::Bamo::BaseBamoConnection *v6; // rcx
  __int64 v7; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rax
  _QWORD v10[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 *v12; // [rsp+88h] [rbp+28h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v13; // [rsp+90h] [rbp+30h] BYREF

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v3 = *(_QWORD *)(v2 + 320);
  if ( !v3 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v12);
    v4 = CoreUICreate(&v12);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalclientconnection.cpp",
        (const char *)(unsigned int)v4,
        v10[0]);
    v5 = InputSystemInternalClientConnection::Create(&v13, v12);
    v6 = *v5;
    *v5 = 0LL;
    *(_QWORD *)(v2 + 320) = v6;
    Microsoft::WRL::ComPtr<AnimationDataProviderConnection>::InternalRelease(&v13);
    v7 = *(_QWORD *)(v2 + 320);
    v10[0] = off_1801E83C0;
    v10[1] = v7;
    v10[7] = v10;
    CallOnThreadExit::Register(v10);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v12);
    v3 = *(_QWORD *)(v2 + 320);
  }
  *a1 = v3;
  if ( v3 )
  {
    v8 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v8);
  }
  return a1;
}
