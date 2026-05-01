/*
 * XREFs of ?v_WndProc@AltEscHotkeyHandler@@MEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804AE030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x1800381BC (-IsDesktopInputContext@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall AltEscHotkeyHandler::v_WndProc(
        AltEscHotkeyHandler *this,
        enum Windows::Internal::Shell::Holographic::UserInputContext *a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 786 )
    return DefWindowProcW((HWND)a2, a3, a4, lParam);
  if ( IsDesktopInputContext((__int64)this, a2) )
  {
    v10[0] = 0LL;
    v6 = *((_QWORD *)this + 3);
    v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
    v8 = v7(v6, &GUID_23a47bb4_c26c_4ecf_a5e8_5fbeefdb55d6, v10);
    if ( v8 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10[0] + 32LL))(v10[0]);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
  }
  return 0LL;
}
