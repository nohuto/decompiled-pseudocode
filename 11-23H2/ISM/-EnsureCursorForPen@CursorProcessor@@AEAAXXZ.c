/*
 * XREFs of ?EnsureCursorForPen@CursorProcessor@@AEAAXXZ @ 0x180158E14
 * Callers:
 *     ?OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801592C0 (-OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ @ 0x180158BBC (-CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CursorProcessor::EnsureCursorForPen(CursorProcessor *this)
{
  __int64 *v2; // rbp
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, _QWORD, __int64, __int64); // rbx
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _DWORD *, __int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = 0LL;
  v2 = (__int64 *)((char *)this + 96);
  if ( !*((_QWORD *)this + 12) )
  {
    v3 = *((_QWORD *)this + 13);
    v4 = *(int (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v3 + 56LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v9);
    LOBYTE(v5) = 1;
    if ( v4(v3, 0LL, 1LL, v5) < 0 )
    {
      v10[2] = 0;
      v10[1] = 2;
      v10[0] = 0;
      v6 = *((_QWORD *)this + 13);
      v7 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(*(_QWORD *)v6 + 24LL);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
      v8 = v7(v6, v10, 1LL, v2);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x17C,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursor\\system\\lib\\cursorprocessor.cpp",
          (const char *)(unsigned int)v8,
          (int)&v9);
      InputTraceLogging::Cursor::CursorProcessorCreateCursorForPen((__int64)retaddr);
    }
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v9);
}
