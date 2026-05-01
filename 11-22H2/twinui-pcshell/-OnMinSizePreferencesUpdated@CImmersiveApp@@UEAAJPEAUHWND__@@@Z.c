/*
 * XREFs of ?OnMinSizePreferencesUpdated@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x18006F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::OnMinSizePreferencesUpdated(CImmersiveApp *this, HWND a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 44) + 216LL))(*((_QWORD *)this + 44), a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A0,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return v5;
  }
  else
  {
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    return 0LL;
  }
}
