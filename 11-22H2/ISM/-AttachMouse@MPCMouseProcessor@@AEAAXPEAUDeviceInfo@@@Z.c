/*
 * XREFs of ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18004F298
 * Callers:
 *     ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180037F30 (-ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003F8DC (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1800383D0 (--$_Try_emplace@AEBK$$V@-$map@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCMouseProcessor::AttachMouse(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, struct DeviceInfo *, __int64, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF

  v13 = 0LL;
  v4 = *((_QWORD *)this + 461);
  v5 = *(__int64 (__fastcall **)(__int64, struct DeviceInfo *, __int64, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v13);
  v6 = v5(v4, a2, 1LL, &v13);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1AA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v6,
      v9);
  v7 = v13;
  v10 = v13;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v10);
  v8 = *(_QWORD *)std::map<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>::_Try_emplace<unsigned long const &,>(
                    (__int64 *)this + 672,
                    (__int64)v11,
                    a2);
  *(_QWORD *)(v8 + 40) = a2;
  v10 = 0LL;
  v14 = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(v8 + 48) = v7;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v13);
}
