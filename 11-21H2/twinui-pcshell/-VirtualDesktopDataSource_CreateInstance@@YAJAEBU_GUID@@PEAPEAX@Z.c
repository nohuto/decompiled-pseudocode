/*
 * XREFs of ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B0FC8
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x1800B0040 (-RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopDataSource@@@Z @ 0x1800B108C (--$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualD.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIWeakReferenceSource@@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013C064 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIVirtualDesktopDataSo.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CAE8 (-InternalRelease@-$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopDataSource_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  int CanCastTo; // ebx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  void *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease(&v12);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopDataSource,VirtualDesktopDataSource,>(&v12);
  CanCastTo = v3;
  if ( v3 < 0 )
  {
    v8 = (unsigned int)v3;
    v9 = 117LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)v8);
    goto LABEL_7;
  }
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v10 = v12;
    *a2 = v12;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IWeakReferenceSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::CanCastTo(
                  v12,
                  v6,
                  a2);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  }
  if ( CanCastTo < 0 )
  {
    v8 = (unsigned int)CanCastTo;
    v9 = 118LL;
    goto LABEL_11;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease(&v12);
  return (unsigned int)CanCastTo;
}
