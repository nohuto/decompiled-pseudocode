/*
 * XREFs of ?GetName@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180042E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNameInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18017F4E0 (-GetNameInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktop::GetName(CVirtualDesktop *this, HSTRING *a2)
{
  int NameInternal; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), &SRWLock);
  NameInternal = CVirtualDesktop::GetNameInternal((CVirtualDesktop *)((char *)this + 16), a2);
  v5 = NameInternal;
  if ( NameInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)NameInternal,
      v7);
  else
    v5 = 0;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
