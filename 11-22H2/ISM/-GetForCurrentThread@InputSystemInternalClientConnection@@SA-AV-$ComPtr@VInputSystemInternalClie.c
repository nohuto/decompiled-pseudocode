/*
 * XREFs of ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18014A234
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x1800A9554 (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800D9954 (--0InputProcess@@AEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180029FA0 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B149C (-InternalRelease@-$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18014A07C (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@@Z @ 0x18014EB38 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall InputSystemInternalClientConnection::GetForCurrentThread(_QWORD *a1)
{
  __int64 v2; // rdi
  int v3; // eax
  Microsoft::Bamo::BaseBamoConnection **v4; // rax
  Microsoft::Bamo::BaseBamoConnection *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v8; // rax
  int v10; // [rsp+20h] [rbp-50h]
  _QWORD v11[9]; // [rsp+28h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 *v13; // [rsp+98h] [rbp+28h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v14; // [rsp+A0h] [rbp+30h] BYREF

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( !*(_QWORD *)(v2 + 320) )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v13);
    v3 = CoreUICreate(&v13);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalclientconnection.cpp",
        (const char *)(unsigned int)v3,
        v10);
    v4 = InputSystemInternalClientConnection::Create(&v14, v13);
    v5 = *v4;
    *v4 = 0LL;
    *(_QWORD *)(v2 + 320) = v5;
    Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::InternalRelease(&v14);
    v6 = *(_QWORD *)(v2 + 320);
    v11[0] = off_180214680;
    v11[1] = v6;
    v11[7] = v11;
    CallOnThreadExit::Register(v11);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v13);
  }
  v7 = *(_QWORD *)(v2 + 320);
  *a1 = v7;
  if ( v7 )
  {
    v8 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v8);
  }
  return a1;
}
