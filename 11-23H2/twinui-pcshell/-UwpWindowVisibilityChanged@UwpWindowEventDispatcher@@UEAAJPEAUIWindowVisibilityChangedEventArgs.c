/*
 * XREFs of ?UwpWindowVisibilityChanged@UwpWindowEventDispatcher@@UEAAJPEAUIWindowVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180037810
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18009D078 (-attach@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWi.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18009E5B8 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_18009E5B8.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowVisibilityChanged(
        UwpWindowEventDispatcher *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *, GUID *, __int64 *))
{
  unsigned int v4; // esi
  __int64 (__fastcall **v5)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *, GUID *, __int64 *); // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, int *); // rdi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  int v20[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  __int64 v24[7]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v26; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h] BYREF
  int v28; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *a2;
  v24[0] = 0LL;
  v6 = (*v5)(
         (struct Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *)a2,
         &GUID_317be656_a8be_48a0_95c9_cd02915bc9de,
         v24);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x548,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v6,
      v20[0]);
  v21 = 0LL;
  v7 = v24[0];
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24[0] + 48LL);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v21);
  v9 = v8(v7, &v21);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x54B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      v20[0]);
  v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindowVisibilityChangedEventArgs *, GUID *, __int64 *), int *))(*a2)[6])(
          a2,
          &v28);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x54E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v10,
      v20[0]);
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 80LL))(v21, &v26);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x551,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v11,
      v20[0]);
  *(_QWORD *)v20 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 38) + 56LL))(*((_QWORD *)this + 38), &v23);
  v13 = *(_QWORD *)v12;
  v14 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(**(_QWORD **)v12 + 112LL);
  *(_QWORD *)v20 = 0LL;
  v15 = v14(v13, v26, v20);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x554,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v15,
      v20[0]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  if ( !*(_QWORD *)v20 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x555,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x80070057LL,
      0);
  v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v20 + 48LL))(*(_QWORD *)v20, &v27);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x558,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      v20[0]);
  v23 = 0LL;
  AcquireSRWLockShared((PSRWLOCK)this + 59);
  v24[1] = (__int64)this + 472;
  UwpWindowEventDispatcher::GetCachedView((char *)this - 16, &v22, v27);
  v17 = v22;
  v22 = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach(&v23, v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  v18 = v23;
  if ( !v23 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x55E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v20[0]);
  if ( this != (UwpWindowEventDispatcher *)-472LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 59);
  LOBYTE(v4) = v28 == 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v18 + 320LL))(v18, 1LL, v4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v24);
  return 0LL;
}
