/*
 * XREFs of ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x1800294B0
 * Callers:
 *     ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x180028A68 (--$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManag.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BB84 (-InternalRelease@-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002BD90 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z@std@@@Z @ 0x180032478 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_tagActivationObjectNotification@@@Z@std@@@Z @ 0x180032690 (-Initialize@-$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ForegroundManager::RuntimeClassInitialize(ForegroundManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // r8
  const char *v5; // r9
  __int64 v6; // r8
  struct InputSystemServerConnection *BamoServerConnection; // rax
  struct Microsoft::Bamo::BaseBamoConnection *v8; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rax
  void (__fastcall ***v11)(_QWORD); // rdx
  __int64 v12; // rdi
  __int64 v13; // r15
  void (__fastcall *v14)(__int64, _QWORD *); // r14
  _QWORD *v15; // rsi
  ULONG v17; // [rsp+20h] [rbp-60h]
  struct InputSystemServerConnection *v18; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v20; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*(_DWORD *)(v2 + 16) & 0x8000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x8000LL) == *(_QWORD *)(v2 + 24) )
  {
    tlgWriteTransfer_EventWriteTransfer(v2, (int)&dword_1801FF4E3, 0, 0, 2u, &v19);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 30);
  v3 = CoreUICreate((char *)this + 240);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      (const char *)(unsigned int)v3,
      v17);
  v19.Ptr = (ULONGLONG)off_1801E4500;
  *(_QWORD *)&v19.Size = this;
  v20 = &v19;
  KernelInputConnection<_tagActivationObjectNotification>::Initialize((char *)this + 248, (char *)this + 240, v4, &v19);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v5);
  if ( !*(_BYTE *)ISMTestMode::s_instance && IsEdition(0x224AuLL) )
  {
    v19.Ptr = (ULONGLONG)off_1801E44D0;
    *(_QWORD *)&v19.Size = this;
    v20 = &v19;
    KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::Initialize((char *)this + 392, (char *)this + 240, v6, &v19);
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v8 = BamoServerConnection;
  v18 = BamoServerConnection;
  if ( BamoServerConnection )
  {
    v9 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(struct InputSystemServerConnection *))(*(_QWORD *)BamoServerConnection + 48LL))(BamoServerConnection);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::AddRef(v9);
  }
  v10 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v8 + 29) + 8LL)
                                                                          + 24LL))(*((_QWORD *)v8 + 29) + 8LL);
  v11 = v10;
  v12 = *((_QWORD *)this + 67);
  *((_QWORD *)this + 67) = v10;
  if ( v10 )
    (**v10)(v10);
  if ( v12 )
    (*(void (__fastcall **)(__int64, void (__fastcall ***)(_QWORD)))(*(_QWORD *)v12 + 8LL))(v12, v11);
  v13 = *((_QWORD *)this + 67);
  v14 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v13 + 8) + 40LL);
  v15 = operator new(0x50uLL);
  *v15 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v15[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_ActivatableEntityPrincipal_Principal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v15 + 2), v8);
  v15[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::`vftable';
  v15[7] = 0LL;
  v15[8] = 0LL;
  v15[9] = 0LL;
  *v15 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v15[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_ActivatableEntityPrincipal_Principal'};
  v14(v13 + 8, v15);
  Microsoft::WRL::ComPtr<InputSystemServerConnection>::InternalRelease(&v18);
  return 0LL;
}
