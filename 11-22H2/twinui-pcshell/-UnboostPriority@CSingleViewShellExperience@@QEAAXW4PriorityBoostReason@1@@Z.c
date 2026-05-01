/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z @ 0x1800B588C
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x18010D090 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18010D260 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x180199984 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___::Invoke @ 0x1802860A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1802860A0.c)
 *     wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x1807471B4 (wil--details--ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___--_ScopeExitFn__lambda_a7f1.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1800B3210 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x1800B6124 (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  int v3; // eax
  HSTRING v4; // rcx
  PCWSTR StringRawBuffer; // rax
  HSTRING v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR v17; // [rsp+50h] [rbp+18h] BYREF
  PCWSTR v18; // [rsp+58h] [rbp+20h] BYREF

  v16 = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    if ( !*(_BYTE *)(a1 + 140) )
      goto LABEL_5;
    *(_BYTE *)(a1 + 140) = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v3 >= 0 )
      goto LABEL_5;
    v12 = 1244LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v3,
      v13);
    goto LABEL_5;
  }
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)(a1 + 144),
    0LL);
  CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1, v8, v9, v10, v13);
  if ( *(_BYTE *)(a1 + 141) )
  {
    v11 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 128LL))(v11, a1);
    if ( v3 < 0 )
    {
      v12 = 1235LL;
      goto LABEL_10;
    }
  }
LABEL_5:
  v4 = *(HSTRING *)(a1 + 16);
  v15 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v4, 0LL);
  v6 = *(HSTRING *)(a1 + 8);
  v17 = StringRawBuffer;
  v18 = WindowsGetStringRawBuffer(v6, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
           (unsigned int)&v18,
           (unsigned int)&v17,
           (unsigned int)&v16,
           (int)a1 + 141,
           (__int64)&v15,
           a1 + 140);
}
