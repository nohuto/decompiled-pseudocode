/*
 * XREFs of ?UnsubscribeFromPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListener@@@Z @ 0x180308EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::UnsubscribeFromPresentationChanges(
        CImmersiveApp *this,
        struct IImmersiveApplicationPresentationListener *a2)
{
  struct IImmersiveApplicationPresentationListener *v4; // rbx
  RTL_SRWLOCK *v5; // rdi
  struct IImmersiveApplicationPresentationListener *v6; // rax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (struct IImmersiveApplicationPresentationListener *)*((_QWORD *)this + 79);
  if ( v6 && a2 == v6 )
  {
    *((_QWORD *)this + 79) = 0LL;
    v4 = v6;
    v7 = 0;
  }
  else
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C2,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v4 )
    (*(void (__fastcall **)(struct IImmersiveApplicationPresentationListener *))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
