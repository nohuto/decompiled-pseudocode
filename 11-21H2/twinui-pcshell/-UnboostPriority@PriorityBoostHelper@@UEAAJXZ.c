/*
 * XREFs of ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x18009E230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ??$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x18009D890 (--$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PriorityBoostHelper::UnboostPriority(PriorityBoostHelper *this)
{
  const char *v2; // r9
  int *v3; // rsi
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x68,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v2);
  v14 = 0;
  v3 = (int *)((char *)this + 92);
  v4 = *((_DWORD *)this + 23);
  v5 = 0;
  if ( v4 )
  {
    v6 = v4 - 1;
    *v3 = v6;
    if ( !v6 )
    {
      v7 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 6) + 24LL);
      if ( *v7 )
      {
        v15 = 0LL;
        v8 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
               v7,
               &v15);
        v5 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x72,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
            (const char *)(unsigned int)v8,
            v12);
          v10 = v5;
        }
        else
        {
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
          v5 = v9;
          v10 = v9;
          if ( v9 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x75,
              (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
              (const char *)(unsigned int)v9,
              v12);
        }
        v14 = v10;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
      }
    }
  }
  ExperienceHostLoggingTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(&v14, v3);
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7B,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
