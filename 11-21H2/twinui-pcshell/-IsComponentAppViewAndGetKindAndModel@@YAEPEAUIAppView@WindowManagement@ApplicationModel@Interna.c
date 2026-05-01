/*
 * XREFs of ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x180049008
 * Callers:
 *     ?AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800236D0 (-AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowMana.c)
 *     ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180048C70 (-AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@Win.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800592A0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803E0A30 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803E1040 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall IsComponentAppViewAndGetKindAndModel(
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a1,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **a3)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char v9; // bl
  int v10; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v11; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v13; // rax
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v16; // [rsp+50h] [rbp+20h] BYREF
  int v17; // [rsp+60h] [rbp+30h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v18; // [rsp+68h] [rbp+38h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v5 = *(_QWORD *)a1;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **))(v5 + 56))(
         a1,
         &v18);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x196,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v6,
      v14);
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *, int *))(*(_QWORD *)v18 + 56LL))(
         v18,
         &v17);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19C,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v7,
      v14);
  v8 = v17;
  if ( a2 )
    *(_DWORD *)a2 = v17;
  v9 = 0;
  v16 = 0;
  if ( v8 == 1 )
  {
    v14 = 0LL;
    if ( (**(int (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *, GUID *, __int64 *))v18)(
           v18,
           &GUID_43c44496_73a7_4b25_b876_1df2708e3e45,
           &v14) >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 144LL))(v14, &v16);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1AD,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
          (const char *)(unsigned int)v10,
          v14);
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v9 = v16;
  }
  if ( a3 )
  {
    v13 = v18;
    v11 = 0LL;
    v18 = 0LL;
    *a3 = v13;
  }
  else
  {
    v11 = v18;
  }
  if ( v11 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *))(*(_QWORD *)v11 + 16LL))(v11);
  return v9;
}
