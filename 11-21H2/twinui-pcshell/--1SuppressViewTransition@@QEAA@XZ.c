/*
 * XREFs of ??1SuppressViewTransition@@QEAA@XZ @ 0x1801EA64C
 * Callers:
 *     ??R?$default_delete@VSuppressViewTransition@@@std@@QEBAXPEAVSuppressViewTransition@@@Z @ 0x1801EA8AC (--R-$default_delete@VSuppressViewTransition@@@std@@QEBAXPEAVSuppressViewTransition@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SuppressViewTransition::~SuppressViewTransition(SuppressViewTransition *this)
{
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 96LL))(*((_QWORD *)this + 1), 1LL);
  pvAttribute = 0;
  DwmSetWindowAttribute(*(HWND *)this, 3u, &pvAttribute, 4u);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 1);
}
