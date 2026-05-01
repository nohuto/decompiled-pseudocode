/*
 * XREFs of ?OnImmersiveShellCreated@ImmersiveShellComponentsConfiguration@@UEAAJPEAUIUnknown@@@Z @ 0x18048A850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveShellComponentsConfiguration::OnImmersiveShellCreated(
        ImmersiveShellComponentsConfiguration *this,
        struct IUnknown *a2)
{
  int v2; // eax
  __int64 v3; // rbx
  int (__fastcall *v4)(__int64, SID *, GUID *, __int64 *); // rdi
  bool v5; // bl
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &v10);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v2,
      v7);
  v3 = v10;
  v4 = *(int (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v5 = v4(v3, &SID_ImmersiveShellHookService, &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4, &v9) >= 0;
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v10);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, 7LL);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  return 0LL;
}
