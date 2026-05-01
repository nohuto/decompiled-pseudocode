/*
 * XREFs of ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x18038AECC
 * Callers:
 *     ?_OnPriorityUnboostRequested@SearchAppExperienceManager@@AEAAJXZ @ 0x18038BAC0 (-_OnPriorityUnboostRequested@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$OnPriorityUnboostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z @ 0x180356D18 (--$OnPriorityUnboostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z.c)
 *     ?_GetViewWrapper@SearchAppExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18038B5A4 (-_GetViewWrapper@SearchAppExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@Sh.c)
 */

__int64 __fastcall SearchAppExperienceManager::_ApplyPriorityUnboostIfNeeded(SearchAppExperienceManager *this)
{
  unsigned int v1; // ebx
  int *v2; // rsi
  int v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  v9 = 0;
  v2 = (int *)((char *)this + 540);
  if ( !*((_DWORD *)this + 135) )
  {
    SearchAppExperienceManager::_GetViewWrapper(this, &v11);
    if ( v11 )
    {
      v10 = 0LL;
      v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             &v11,
             &v10);
      v4 = v3;
      if ( v3 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
        v4 = v6;
        v5 = v6;
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4E5,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
            (const char *)(unsigned int)v6);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4E2,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
        v5 = v4;
      }
      v9 = v5;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
      v1 = v4;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  }
  CortanaProactiveTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(&v9, v2);
  return v1;
}
