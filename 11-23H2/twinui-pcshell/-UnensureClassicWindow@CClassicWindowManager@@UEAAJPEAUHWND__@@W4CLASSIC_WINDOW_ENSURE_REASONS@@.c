/*
 * XREFs of ?UnensureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1803A9810
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1800CADF0 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$UnensureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1803A8724 (--$UnensureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::UnensureClassicWindow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        const char *a4)
{
  RTL_SRWLOCK *v8; // rbx
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF
  PSRWLOCK v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = a3;
  if ( !a3 || ((a3 - 1LL) & a3) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8B5,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      a4);
  LODWORD(v13) = a2;
  CAppManagerTelemetry::UnensureClassicWindow<unsigned int,enum CLASSIC_WINDOW_ENSURE_REASONS &>(
    (int *)&v13,
    (int *)&v12);
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v13 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (unsigned __int8)CClassicWindowManager::_HandleDestructionOrHide((_QWORD *)(a1 - 88), a2, 2LL, a3) )
  {
    v9 = 0;
  }
  else
  {
    v9 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8BB,
      (int)"pcshell\\twinui\\appmanager\\lib\\classicwndmgr.cpp",
      (const char *)0x80004005LL);
  }
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return v9;
}
