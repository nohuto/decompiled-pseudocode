/*
 * XREFs of ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x1800417A0
 * Callers:
 *     ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x180041708 (--$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManag.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180029FA0 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180033B3C (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ??0?$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x18004198C (--0-$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x180042B34 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_tagActivationObjectNotification@@@Z@std@@@Z @ 0x180042D4C (-Initialize@-$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ForegroundManager::RuntimeClassInitialize(ForegroundManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // r8
  const char *v5; // r9
  __int64 v6; // r8
  Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rax
  Microsoft::Bamo::BaseBamoConnection *v8; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rax
  void (__fastcall ***v11)(_QWORD); // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  void (__fastcall *v14)(__int64, __int64); // rdi
  void *v15; // rax
  __int64 v16; // rax
  ULONG v18; // [rsp+20h] [rbp-60h]
  Microsoft::Bamo::BaseBamoConnection *v19; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v21; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v2 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*(_DWORD *)(v2 + 16) & 0x8000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x8000LL) == *(_QWORD *)(v2 + 24) )
  {
    tlgWriteTransfer_EventWriteTransfer(v2, (int)&dword_18022FC0F, 0, 0, 2u, &v20);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 30);
  v3 = CoreUICreate((char *)this + 240);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      (const char *)(unsigned int)v3,
      v18);
  v20.Ptr = (ULONGLONG)off_180210710;
  *(_QWORD *)&v20.Size = this;
  v21 = &v20;
  KernelInputConnection<_tagActivationObjectNotification>::Initialize((char *)this + 248, (char *)this + 240, v4, &v20);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v5);
  if ( !*(_BYTE *)ISMTestMode::s_instance && IsEdition(8778LL) )
  {
    v20.Ptr = (ULONGLONG)off_180210740;
    *(_QWORD *)&v20.Size = this;
    v21 = &v20;
    KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::Initialize((char *)this + 392, (char *)this + 240, v6, &v20);
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v8 = BamoServerConnection;
  v19 = BamoServerConnection;
  if ( BamoServerConnection )
  {
    v9 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)BamoServerConnection + 56LL))(BamoServerConnection);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v9);
  }
  v10 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v8 + 31) + 8LL)
                                                                          + 24LL))(*((_QWORD *)v8 + 31) + 8LL);
  v11 = v10;
  v12 = *((_QWORD *)this + 67);
  *((_QWORD *)this + 67) = v10;
  if ( v10 )
    (**v10)(v10);
  if ( v12 )
    (*(void (__fastcall **)(__int64, void (__fastcall ***)(_QWORD)))(*(_QWORD *)v12 + 8LL))(v12, v11);
  v13 = *((_QWORD *)this + 67);
  v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v13 + 8) + 40LL);
  v15 = operator new(0x50uLL);
  v16 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::ListPrincipal<BamoActivatableEntityPrincipal>(
          v15,
          v8);
  v14(v13 + 8, v16);
  Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v19);
  return 0LL;
}
