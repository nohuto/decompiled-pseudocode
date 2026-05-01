/*
 * XREFs of ?GetForegroundInputHostWindowId@TouchKeyboardExperienceManager@@UEAAJPEAI@Z @ 0x180510250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetForegroundInputHostWindowId(
        TouchKeyboardExperienceManager *this,
        unsigned int *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 49);
  if ( !v2 )
  {
    v3 = -2147467259;
    v4 = 6073LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v3);
    return v3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v2 + 32) + 688LL))(*(_QWORD *)(v2 + 32), a2);
  v3 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB85,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    v4 = 6074LL;
    goto LABEL_3;
  }
  return 0LL;
}
