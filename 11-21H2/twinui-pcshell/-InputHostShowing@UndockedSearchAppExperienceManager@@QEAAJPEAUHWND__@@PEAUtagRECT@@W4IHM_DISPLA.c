/*
 * XREFs of ?InputHostShowing@UndockedSearchAppExperienceManager@@QEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x18038EE60
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::InputHostShowing(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 96) + 32LL))(
          *(_QWORD *)(a1 + 96),
          *(_QWORD *)(a1 + 64)) )
    return 0LL;
  v2 = UndockedSearchAppExperienceManager::PositionSearchAppWindow((UndockedSearchAppExperienceManager *)a1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA75,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
