/*
 * XREFs of ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800EF940
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800EFA3C (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1800EDAA0 (-GetUserSidString@KioskPositioner@@AEBA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     IsUserSidAssignedAccessSingleAppClassicApp @ 0x1800F034C (IsUserSidAssignedAccessSingleAppClassicApp.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180186BAC (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1805A6804 (--$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA-AV-$com_pt.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1805A72E0 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=14
Win32PrimaryAppProxy *__fastcall KioskPositioner::LoadAssignedAccessConfiguration(void *a1, Win32PrimaryAppProxy *a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 **); // rdi
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  const unsigned __int16 *StringRawBuffer; // rbx
  int v19; // [rsp+20h] [rbp-49h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-41h] BYREF
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  HLOCAL hMem; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-21h] BYREF
  __int64 *v25; // [rsp+50h] [rbp-19h] BYREF
  HSTRING string; // [rsp+58h] [rbp-11h] BYREF
  int v27; // [rsp+60h] [rbp-9h] BYREF
  Win32PrimaryAppProxy *v28[3]; // [rsp+68h] [rbp-1h] BYREF
  char v29; // [rsp+80h] [rbp+17h]
  _BYTE v30[32]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v28[0] = a2;
  KioskPositioner::GetUserSidString(a1, (LPWSTR *)&hMem);
  if ( (unsigned int)IsUserSidAssignedAccessSingleAppClassicApp(hMem) )
  {
    v28[2] = 0LL;
    v29 = 0;
    wil::ActivateInstance<Windows::Internal::AssignedAccess::IAssignedAccessManager>(&v25);
    v21 = 0LL;
    v4 = *v25;
    v21 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 56))(v25, &v21);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x458,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v5,
        v19);
    v20 = 0LL;
    v6 = v21;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v21 + 72LL);
    v20 = 0LL;
    v28[0] = (Win32PrimaryAppProxy *)hMem;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v30, v28);
    v9 = v7(v6, *(_QWORD *)(v8 + 24), &v20);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x45A,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v9,
        v19);
    if ( !v20 )
      goto LABEL_13;
    LOBYTE(v19) = 0;
    v10 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v20 + 88))(v20, &v19);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x460,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v10,
        v19);
    if ( (_BYTE)v19 )
    {
      v24 = 0LL;
      v11 = *v20;
      v24 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v11 + 120))(v20, &v24);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x466,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v12,
          v19);
      v23 = 0LL;
      v13 = *v24;
      v23 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v13 + 48))(v24, 0LL, &v23);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x468,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v14,
          v19);
      v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v23 + 64))(v23, &v27);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x46A,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v15,
          v19);
      if ( v27 == 3 )
      {
        string = 0LL;
        v16 = *v23;
        string = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v16 + 48))(v23, &string);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x470,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
            (const char *)(unsigned int)v17,
            v19);
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v28[0] = (Win32PrimaryAppProxy *)operator new(0x28uLL);
        *(_QWORD *)a2 = Win32PrimaryAppProxy::Win32PrimaryAppProxy(v28[0], StringRawBuffer);
        *((_BYTE *)a2 + 8) = 1;
        *((_BYTE *)a2 + 16) = 1;
        if ( string )
          WindowsDeleteString(string);
      }
      else
      {
        *((_BYTE *)a2 + 16) = 0;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    }
    else
    {
LABEL_13:
      *((_BYTE *)a2 + 16) = 0;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  }
  else
  {
    *((_BYTE *)a2 + 16) = 0;
  }
  if ( hMem )
    LocalFree(hMem);
  return a2;
}
