/*
 * XREFs of ?OnIdleStateChanged@XamlLauncherState@@UEAAJH@Z @ 0x1800702B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800E8E48 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall XamlLauncherState::OnIdleStateChanged(XamlLauncherState *this, int a2, __int64 a3, __int64 a4)
{
  struct IUnknown *v4; // rax
  ExperienceManagerUtils *v5; // rcx
  int v6; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct IUnknown *)((char *)this - 48);
  v5 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  if ( !a2 )
  {
    v6 = ExperienceManagerUtils::PostToUIThread(v5, v4, (void *)6, a4);
    if ( v6 >= 0 )
      return 0LL;
    v8 = 399LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v6,
      v9);
    return 0LL;
  }
  v6 = ExperienceManagerUtils::PostToUIThread(v5, v4, (void *)1, a4);
  if ( v6 < 0 )
  {
    v8 = 395LL;
    goto LABEL_7;
  }
  return 0LL;
}
