/*
 * XREFs of ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18045FA60
 * Callers:
 *     <none>
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800E8E48 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18045ED14 (-_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnPriorityUnboostRequested@SearchAppExperienceManager@@AEAAJXZ @ 0x18045FA00 (-_OnPriorityUnboostRequested@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x18045FBA4 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x18045FC9C (-_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnViewChangedHandler(
        ExperienceManagerUtils **this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v5; // edi
  __int64 v6; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+18h] BYREF
  int v13; // [rsp+48h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v13);
  if ( v5 < 0 )
  {
    v6 = 947LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  switch ( v13 )
  {
    case 0:
      v12 = 0;
      v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 56LL))(
             a3,
             &v12);
      if ( v5 < 0 )
      {
        v6 = 953LL;
        goto LABEL_3;
      }
      v8 = ExperienceManagerUtils::PostToUIThread(this[51], (struct IUnknown *)this, (void *)v12);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 985LL;
        goto LABEL_19;
      }
      return 0;
    case 1:
      ++*((_DWORD *)this + 135);
      v8 = SearchAppExperienceManager::_ApplyPriorityBoostIfNeeded((SearchAppExperienceManager *)this);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 992LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
      return 0;
    case 2:
      return SearchAppExperienceManager::_OnPriorityUnboostRequested((SearchAppExperienceManager *)this);
    case 5:
      return SearchAppExperienceManager::_OnViewCreated((SearchAppExperienceManager *)this);
    case 6:
      return SearchAppExperienceManager::_OnViewDestroyed((SearchAppExperienceManager *)this);
  }
  return 0LL;
}
