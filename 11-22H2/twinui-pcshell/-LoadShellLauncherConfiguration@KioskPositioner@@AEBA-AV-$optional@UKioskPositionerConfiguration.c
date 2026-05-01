/*
 * XREFs of ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800F030C
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800EFA3C (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1801B225C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1805A68C4 (--$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA-AV-$co.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1805A72E0 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall KioskPositioner::LoadShellLauncherConfiguration(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  unsigned __int16 *StringRawBuffer; // rsi
  Win32PrimaryAppProxy *v10; // rdi
  int v11; // eax
  bool v12; // al
  int v13; // [rsp+20h] [rbp-30h]
  HSTRING string; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-20h] BYREF
  Win32PrimaryAppProxy *v16; // [rsp+38h] [rbp-18h]
  Win32PrimaryAppProxy *v17; // [rsp+40h] [rbp-10h]
  char v18; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  int v21; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v22; // [rsp+98h] [rbp+48h] BYREF

  v20 = a1;
  if ( IsShellLauncherEnabledForCurrentUser() )
  {
    v17 = 0LL;
    v18 = 0;
    wil::ActivateInstance<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>(&v15);
    v22 = 0LL;
    v4 = *v15;
    v22 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v4 + 48))(v15, 0LL, &v22);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x439,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v5,
        v13);
    v21 = -1;
    v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v22 + 80))(v22, &v21);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x43B,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v6,
        v13);
    string = 0LL;
    v7 = *v22;
    string = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v7 + 64))(v22, &string);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x43D,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v8,
        v13);
    StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, 0LL);
    if ( v21 == 1 )
    {
      v16 = (Win32PrimaryAppProxy *)operator new(0x28uLL);
      v10 = Win32PrimaryAppProxy::Win32PrimaryAppProxy(v16, StringRawBuffer);
    }
    else
    {
      v10 = (Win32PrimaryAppProxy *)operator new(0x50uLL);
      v16 = v10;
      *(_QWORD *)v10 = &UwpPrimaryAppProxy::`vftable';
      std::wstring::wstring((_QWORD *)v10 + 1, StringRawBuffer);
      *((_QWORD *)v10 + 5) = 0LL;
      *((_QWORD *)v10 + 6) = 0LL;
      *((_QWORD *)v10 + 7) = 0LL;
      *((_QWORD *)v10 + 8) = 0LL;
      *((_QWORD *)v10 + 9) = -1LL;
    }
    v17 = v10;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v22 + 96))(v22, &v20);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x448,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v11,
        v13);
    v12 = (_BYTE)v20 != 0;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = v12;
    *(_BYTE *)(a2 + 16) = 1;
    if ( string )
      WindowsDeleteString(string);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
  }
  else
  {
    *(_BYTE *)(a2 + 16) = 0;
  }
  return a2;
}
