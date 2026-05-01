/*
 * XREFs of ?TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x1801AB740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?8VImmersiveMonitorHelper@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@VImmersiveMonitorHelper@@@01@$$T@Z @ 0x1801D71F0 (--$-8VImmersiveMonitorHelper@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@VImmersiveMonitorHelper@@@01@$$T@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_48139195@@@details@wil@@QEAA_NXZ @ 0x180201624 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_48139195@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::TrayEdgeMayHaveChanged(__int64 a1, __int64 a2, __int64 a3)
{
  char IsEnabled; // al
  __int64 *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 360) )
    return 2147943568LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_48139195>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_48139195>::GetImpl'::`2'::impl);
  v7 = (__int64 *)(a1 + 184);
  if ( IsEnabled && (unsigned __int8)Microsoft::WRL::operator==<ImmersiveMonitorHelper>(v7) )
    return 2147947423LL;
  v8 = *v7;
  v9 = *(_QWORD *)(*v7 + 64);
  if ( !v9 )
  {
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)0x8000FFFFLL);
    return (unsigned int)v10;
  }
  v12 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 40LL))(v9, &v12);
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( a3 == v12 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 80) + 104LL))(*(_QWORD *)(v8 + 80)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 80) + 160LL))(*(_QWORD *)(v8 + 80));
  }
  return 0LL;
}
