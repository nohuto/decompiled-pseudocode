/*
 * XREFs of ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x1800B2BD8
 * Callers:
 *     ?BoostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x1800B2940 (-BoostPriority@PriorityBoostHelper@@UEAAJXZ.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x18016575C (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x1800B2C9C (--$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B3308 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PriorityBoostHelper::BoostPriorityHelper(PriorityBoostHelper *this)
{
  char *v1; // rdi
  _QWORD *v2; // rcx
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)this + 108;
  if ( *((_DWORD *)this + 27) )
  {
    v11 = 0;
    v2 = (_QWORD *)(*((_QWORD *)this + 8) + 24LL);
    if ( *v2 )
    {
      v12 = 0LL;
      v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             v2,
             &v12);
      v4 = v3;
      if ( v3 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x52,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
          (const char *)(unsigned int)v3,
          v9);
        v6 = v4;
      }
      else
      {
        v11 = v3;
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
        v4 = v5;
        v6 = v5;
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x55,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
            (const char *)(unsigned int)v5,
            v9);
      }
      v11 = v6;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    }
    else
    {
      v4 = 0;
    }
    ExperienceHostLoggingTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(&v11, v1);
    if ( v4 >= 0 )
      return 0LL;
    v8 = 90LL;
  }
  else
  {
    v4 = -2147024875;
    v8 = 76LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v4,
    v9);
  return (unsigned int)v4;
}
