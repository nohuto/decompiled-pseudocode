/*
 * XREFs of _lambda_aa99c597e8a4a7ee3c1807cb535a4e9f_::operator() @ 0x1801F82EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_aa99c597e8a4a7ee3c1807cb535a4e9f___::Run @ 0x1801F98F0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_aa99c597e8a4a7ee3c1807cb535a4e9f___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F531C (--$query@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$com_ptr_t@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall lambda_aa99c597e8a4a7ee3c1807cb535a4e9f_::operator()(_QWORD **a1)
{
  int v2; // eax
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 **); // rcx
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 **); // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HSTRING *); // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // [rsp+20h] [rbp-58h]
  HSTRING string; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // [rsp+48h] [rbp-30h] BYREF
  __int64 v26[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v28; // [rsp+80h] [rbp+8h] BYREF
  char v29; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v30; // [rsp+90h] [rbp+18h] BYREF
  __int64 v31; // [rsp+98h] [rbp+20h] BYREF

  v25 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)(*a1)[16]
                                                                                              + 120LL))(
         (*a1)[16],
         &v25);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5A1,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      v21);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::query<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
    &v25,
    v26);
  v24 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*a1[1];
  v4 = *v3;
  v24 = 0LL;
  v5 = (*v4)(v3, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, &v24);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5A6,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      v21);
  v30 = 0LL;
  v6 = *v24;
  v30 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v6 + 48))(v24, &v30);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5A9,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v21);
  v29 = 0;
  LOBYTE(v28) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v30 + 56))(v30, &v28);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5AE,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v8,
      v21);
  while ( (_BYTE)v28 )
  {
    v23 = 0LL;
    v9 = *v30;
    v23 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 48))(v30, &v23);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v10,
        v21);
    string = 0LL;
    v31 = 0LL;
    v11 = v23;
    v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v23 + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v13 = v12(v11, &string);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v13,
        v21);
    v14 = v23;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 56LL);
    v16 = v31;
    v31 = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = v15(v14, &v31);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B8,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v17,
        v21);
    v18 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, char *))(*(_QWORD *)v26[0] + 80LL))(
            v26[0],
            string,
            v31,
            &v29);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v18,
        v21);
    v19 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v30 + 64))(v30, &v28);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5BB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v19,
        v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v26);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v25);
  return 0LL;
}
