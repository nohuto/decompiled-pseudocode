/*
 * XREFs of ?SetGameDvrEnabledProperty@IsGameManager@@UEAAJ_N@Z @ 0x1801B3C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IsGameManager::SetGameDvrEnabledProperty(IsGameManager *this, unsigned __int8 a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 2);
  v7 = a2;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64))(*(_QWORD *)v2 + 88LL))(v2, 0LL, &v7, 4LL);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FE,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
