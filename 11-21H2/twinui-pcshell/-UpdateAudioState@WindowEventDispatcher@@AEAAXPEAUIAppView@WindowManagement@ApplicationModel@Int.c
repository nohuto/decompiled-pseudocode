/*
 * XREFs of ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x1803E704C
 * Callers:
 *     ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180048C70 (-AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@Win.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801224E0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall WindowEventDispatcher::UpdateAudioState(__int64 a1, __int64 *a2, int a3)
{
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rdi
  int v11; // eax
  PCWSTR StringRawBuffer; // rdi
  const char *v13; // r9
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 496) )
  {
    try
    {
      v6 = (*(__int64 (**)(void))(*a2 + 112))();
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB15,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v6,
          v14);
      v7 = *a2;
      v19 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 56))(a2, &v19);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB18,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v8,
          v14);
      string = 0LL;
      v9 = v19;
      v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19 + 48LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v11 = v10(v9, &string);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB1B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v11,
          v14);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v16[0] = *(_QWORD *)(a1 + 328);
      if ( v16[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16[0] + 8LL))(v16[0]);
        (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v16[0] + 24LL))(
          v16[0],
          StringRawBuffer,
          v15,
          0LL,
          a3);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v16);
      WindowsDeleteString(string);
      string = 0LL;
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v19);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xB2A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v13);
    }
  }
}
