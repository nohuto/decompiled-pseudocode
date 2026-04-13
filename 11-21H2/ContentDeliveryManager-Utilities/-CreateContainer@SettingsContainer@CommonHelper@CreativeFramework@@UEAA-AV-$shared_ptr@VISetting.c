/*
 * XREFs of ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800EC8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x1800ED138 (-MakeSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer@Com.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v6 = *(__int64 **)(a1 + 8);
  v7 = *v6;
  v12 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *))(v7 + 80))(v6, a3, a4 ^ 1u, &v12);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      30LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v8,
      v10);
  CreativeFramework::CommonHelper::MakeSettingsContainer(a2, v12);
  *(_BYTE *)(a1 + 32) = 1;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return a2;
}
