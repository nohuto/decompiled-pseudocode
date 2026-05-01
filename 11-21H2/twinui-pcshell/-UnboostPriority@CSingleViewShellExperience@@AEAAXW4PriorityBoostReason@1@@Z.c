/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1800A0884
 * Callers:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1800A1114 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1800A20AC (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800A2F28 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_adfd743de84c9ff652ba36d153c3725f___1_IInspectable___IInspectable___::Invoke @ 0x1805F1410 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1805F1410.c)
 * Callees:
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x1800745B0 (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18009C8B4 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  HSTRING v8; // rcx
  PCWSTR StringRawBuffer; // rax
  HSTRING v10; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR v17; // [rsp+50h] [rbp+18h] BYREF
  PCWSTR v18; // [rsp+58h] [rbp+20h] BYREF

  v16 = a2;
  if ( !a2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)(a1 + 144),
      0LL);
    CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1, v3, v4, v5, v13);
    if ( !*(_BYTE *)(a1 + 141) )
      goto LABEL_4;
    v6 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 128LL))(v6, a1);
    if ( v7 >= 0 )
      goto LABEL_4;
    v12 = 1227LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7,
      v13);
    goto LABEL_4;
  }
  if ( a2 == 1 )
  {
    if ( *(_BYTE *)(a1 + 140) )
    {
      *(_BYTE *)(a1 + 140) = 0;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
      if ( v7 < 0 )
      {
        v12 = 1236LL;
        goto LABEL_10;
      }
    }
  }
LABEL_4:
  v8 = *(HSTRING *)(a1 + 16);
  v15 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(v8, 0LL);
  v10 = *(HSTRING *)(a1 + 8);
  v17 = StringRawBuffer;
  v18 = WindowsGetStringRawBuffer(v10, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
           (__int64 *)&v18,
           (__int64 *)&v17,
           &v16,
           (char *)(a1 + 141),
           &v15,
           (char *)(a1 + 140));
}
