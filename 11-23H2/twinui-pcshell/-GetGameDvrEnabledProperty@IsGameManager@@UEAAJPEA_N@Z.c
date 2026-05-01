/*
 * XREFs of ?GetGameDvrEnabledProperty@IsGameManager@@UEAAJPEA_N@Z @ 0x1803DE1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IsGameManager::GetGameDvrEnabledProperty(IsGameManager *this, bool *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 2);
  v8 = 0;
  v9 = 4;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, int *))(*(_QWORD *)v2 + 80LL))(v2, 0LL, &v8, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a2 = v8 != 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
