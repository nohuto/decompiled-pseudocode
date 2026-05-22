/*
 * XREFs of ??0DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@AEAA@XZ @ 0x18016A61C
 * Callers:
 *     ?Get@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@SAAEAV12345@XZ @ 0x18016C57C (-Get@DiagnosticsDqThread@AnimationLoggingManager@Composition@UI@Windows@@SAAEAV12345@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDispatcherQueueHandler@System@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801152A0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeC_ea_1801152A0.c)
 */

__int128 *__fastcall Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread::DiagnosticsDqThread(
        Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *this)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int128 v6; // xmm0
  int v7; // eax
  void *v8; // rcx
  __int128 options; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread *v12; // [rsp+50h] [rbp+20h] BYREF
  int Address; // [rsp+58h] [rbp+28h] BYREF
  int CompareAddress; // [rsp+60h] [rbp+30h] BYREF
  void *dispatcherQueueController; // [rsp+68h] [rbp+38h] BYREF

  v12 = this;
  dispatcherQueueController = 0LL;
  *(_QWORD *)&options = 0x20000000CLL;
  DWORD2(options) = 1;
  xmmword_180220B20 = 0LL;
  xmmword_180220B30 = 0LL;
  v1 = CreateDispatcherQueueController((DispatcherQueueOptions *)&options, &dispatcherQueueController);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionroot.cpp",
      (const char *)(unsigned int)v1);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      790LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationloggingmanager.cpp",
      (const char *)v2,
      options);
  }
  v3 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)dispatcherQueueController + 48LL))(
         dispatcherQueueController,
         &xmmword_180220B20);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      792LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationloggingmanager.cpp",
      (const char *)(unsigned int)v3,
      options);
  Address = 0;
  *((_QWORD *)&options + 1) = &Address;
  *(_QWORD *)&options = &xmmword_180220B20;
  v4 = DefaultHeap::Alloc(0x50uLL);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::IDispatcherQueueHandler,Microsoft::WRL::FtmBase>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::IDispatcherQueueHandler,Microsoft::WRL::FtmBase>>((__int64)v4);
    v6 = options;
    *v5 = off_1801D8740;
    v5[1] = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::System::IDispatcherQueueHandler::*)(void)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::IDispatcherQueueHandler,Microsoft::WRL::FtmBase>,_lambda_45408fcd3a1e321ae85b6197296025bf_ &,-1,>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_OWORD *)v5 + 4) = v6;
  }
  else
  {
    v5 = 0LL;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, Windows::UI::Composition::AnimationLoggingManager::DiagnosticsDqThread **))(*(_QWORD *)xmmword_180220B20 + 56LL))(
         xmmword_180220B20,
         v5,
         &v12);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      804LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationloggingmanager.cpp",
      (const char *)(unsigned int)v7,
      options);
  if ( (_BYTE)v12 )
  {
    CompareAddress = 0;
    while ( !Address )
      WaitOnAddress(&Address, &CompareAddress, 4uLL, 0xFFFFFFFF);
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  v8 = dispatcherQueueController;
  if ( dispatcherQueueController )
  {
    dispatcherQueueController = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return &xmmword_180220B20;
}
