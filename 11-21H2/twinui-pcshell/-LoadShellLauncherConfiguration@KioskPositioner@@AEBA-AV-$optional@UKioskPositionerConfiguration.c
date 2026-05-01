/*
 * XREFs of ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x180148D70
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1801487F8 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800FD8E0 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1804EE928 (--$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA-AV-$co.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1804EF330 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=9
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
  HSTRING string; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-28h] BYREF
  Win32PrimaryAppProxy *v15; // [rsp+30h] [rbp-20h]
  Win32PrimaryAppProxy *v16; // [rsp+38h] [rbp-18h]
  char v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  int v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v21; // [rsp+88h] [rbp+38h] BYREF

  v19 = a1;
  if ( IsShellLauncherEnabledForCurrentUser(a1) )
  {
    v16 = 0LL;
    v17 = 0;
    wil::ActivateInstance<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>(&v14);
    v21 = 0LL;
    v4 = *v14;
    v21 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v4 + 48))(v14, 0LL, &v21);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x439,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v5,
        (int)string);
    v20 = -1;
    v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v21 + 80))(v21, &v20);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x43B,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v6,
        (int)string);
    string = 0LL;
    v7 = *v21;
    string = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v7 + 64))(v21, &string);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x43D,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v8,
        (int)string);
    StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, 0LL);
    if ( v20 == 1 )
    {
      v15 = (Win32PrimaryAppProxy *)operator new(0x28uLL);
      v10 = Win32PrimaryAppProxy::Win32PrimaryAppProxy(v15, StringRawBuffer);
    }
    else
    {
      v10 = (Win32PrimaryAppProxy *)operator new(0x50uLL);
      v15 = v10;
      *(_QWORD *)v10 = &UwpPrimaryAppProxy::`vftable';
      std::wstring::wstring((_QWORD *)v10 + 1, StringRawBuffer);
      *((_QWORD *)v10 + 5) = 0LL;
      *((_QWORD *)v10 + 6) = 0LL;
      *((_QWORD *)v10 + 7) = 0LL;
      *((_QWORD *)v10 + 8) = 0LL;
      *((_QWORD *)v10 + 9) = -1LL;
    }
    v16 = v10;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v21 + 96))(v21, &v19);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x448,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v11,
        (int)string);
    v12 = (_BYTE)v19 != 0;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = v12;
    *(_BYTE *)(a2 + 16) = 1;
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v21);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v14);
  }
  else
  {
    *(_BYTE *)(a2 + 16) = 0;
  }
  return a2;
}
