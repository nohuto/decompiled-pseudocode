/*
 * XREFs of ?GetWindowKindAndModel@@YAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1800A1044
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18009D834 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18016A870 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804D30A0 (-UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagem.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GetWindowKindAndModel(
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a1,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **a3)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v8; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v12; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
    *(_DWORD *)a2 = 1;
  if ( a3 )
    *a3 = 0LL;
  v5 = *(_QWORD *)a1;
  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **))(v5 + 48))(
         a1,
         &v12);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v6,
      v9);
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *, int *))(*(_QWORD *)v12 + 56LL))(
         v12,
         &v11);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1CD,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)(unsigned int)v7,
      v9);
  if ( a2 )
    *(_DWORD *)a2 = v11;
  if ( a3 )
  {
    v8 = v12;
    v12 = 0LL;
    *a3 = v8;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
}
