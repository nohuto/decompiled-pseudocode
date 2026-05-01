/*
 * XREFs of ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x180148AF0
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1801487F8 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180065868 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     IsUserSidAssignedAccessSingleAppClassicApp @ 0x18010651C (IsUserSidAssignedAccessSingleAppClassicApp.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18010988C (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x180148B80 (-GetUserSidString@KioskPositioner@@AEBA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1804EE868 (--$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA-AV-$com_pt.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1804EF330 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall KioskPositioner::LoadAssignedAccessConfiguration(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  const unsigned __int16 *StringRawBuffer; // rbx
  __int64 v19; // rax
  int v20; // eax
  int v21; // [rsp+20h] [rbp-49h] BYREF
  __int64 *v22; // [rsp+28h] [rbp-41h] BYREF
  __int64 *v23; // [rsp+30h] [rbp-39h] BYREF
  __int64 v24; // [rsp+38h] [rbp-31h] BYREF
  const WCHAR *v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-21h] BYREF
  HSTRING string; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v28; // [rsp+58h] [rbp-11h] BYREF
  int v29; // [rsp+60h] [rbp-9h] BYREF
  const WCHAR *v30[2]; // [rsp+68h] [rbp-1h] BYREF
  char v31; // [rsp+78h] [rbp+Fh]
  HSTRING_HEADER v32; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v30[0] = (const WCHAR *)a2;
  KioskPositioner::GetUserSidString(a1, &v25, -4LL);
  if ( IsUserSidAssignedAccessSingleAppClassicApp((__int64)v25, v3) )
  {
    v30[1] = 0LL;
    v31 = 0;
    wil::ActivateInstance<Windows::Internal::AssignedAccess::IAssignedAccessManager>(&v28);
    v24 = 0LL;
    v5 = *v28;
    v24 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 56))(v28, &v24);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x458,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v6,
        v21);
    v22 = 0LL;
    v8 = v24;
    v9 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v24 + 72LL);
    v22 = 0LL;
    v30[0] = v25;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, v30, v7);
    v11 = v9(v8, v10[1].Reserved.Reserved1, (__int64 *)&v22);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x45A,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v11,
        v21);
    if ( !v22 )
      goto LABEL_24;
    LOBYTE(v21) = 0;
    v12 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v22 + 88))(v22, &v21);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x460,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v12,
        v21);
    if ( (_BYTE)v21 )
    {
      v26 = 0LL;
      v13 = *v22;
      v26 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v13 + 120))(v22, &v26);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x466,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v14,
          v21);
      v23 = 0LL;
      v15 = *v26;
      v23 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v15 + 48))(v26, 0LL, &v23);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x468,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v16,
          v21);
      v17 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v23 + 64))(v23, &v29);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x46A,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v17,
          v21);
      if ( v29 == 3 )
      {
        string = 0LL;
        v19 = *v23;
        string = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v19 + 48))(v23, &string);
        if ( v20 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x470,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
            (const char *)(unsigned int)v20,
            v21);
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v30[0] = (const WCHAR *)operator new(0x28uLL);
        *(_QWORD *)a2 = Win32PrimaryAppProxy::Win32PrimaryAppProxy((Win32PrimaryAppProxy *)v30[0], StringRawBuffer);
        *(_BYTE *)(a2 + 8) = 1;
        *(_BYTE *)(a2 + 16) = 1;
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
      }
      else
      {
        *(_BYTE *)(a2 + 16) = 0;
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v23);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v26);
    }
    else
    {
LABEL_24:
      *(_BYTE *)(a2 + 16) = 0;
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v22);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v24);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v28);
  }
  else
  {
    *(_BYTE *)(a2 + 16) = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v25);
  return a2;
}
