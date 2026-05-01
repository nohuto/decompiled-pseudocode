/*
 * XREFs of ?SetSwitchItems@CMultitaskingViewFrame@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804B24A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabsInSnapAssist@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804A4460 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabsInSnapAssist@@@details@wil@@QEAAX_NW4.c)
 *     ??4?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z @ 0x1804AA584 (--4-$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetSwitchItems(
        CMultitaskingViewFrame *this,
        struct IObservableObjectArray *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=((__int64 *)this + 305, (__int64)a2);
  Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=((__int64 *)this + 304, (__int64)a2);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabsInSnapAssist>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TabsInSnapAssist>::GetImpl'::`2'::impl,
    0,
    v4,
    v5);
  v6 = *((_QWORD *)this + 317);
  if ( !v6 )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IObservableObjectArray *))(*(_QWORD *)v6 + 32LL))(v6, a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D0,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
