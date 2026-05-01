/*
 * XREFs of ?_OnThumbnailSizeChanged@CMultitaskingViewFrame@@AEAAXPEAX@Z @ 0x18056F524
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E1E60 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewFrame::_OnThumbnailSizeChanged(CMultitaskingViewFrame *this, void *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, GUID *, __int64 *); // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *((_QWORD *)this + 314);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    v6 = v5(v4, &GUID_a1b0cf80_ce10_4efd_8623_e2697c1b0f4b, &v8);
    if ( v6 >= 0 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 32LL))(v8, a2);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x435,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v6);
  }
  (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 315) + 480LL))(*((_QWORD *)this + 315), a2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
}
