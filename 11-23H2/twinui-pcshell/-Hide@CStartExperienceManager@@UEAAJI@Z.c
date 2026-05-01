/*
 * XREFs of ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18002BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800D4F14 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_eba303ee992e6a97ac61d22e1b9d43e6___ @ 0x1801E0EE8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_eba303ee992e6a97ac61d22e1b9d43e6___.c)
 *     _lambda_eba303ee992e6a97ac61d22e1b9d43e6_::_lambda_eba303ee992e6a97ac61d22e1b9d43e6_ @ 0x1801E1144 (_lambda_eba303ee992e6a97ac61d22e1b9d43e6_--_lambda_eba303ee992e6a97ac61d22e1b9d43e6_.c)
 *     _lambda_eba303ee992e6a97ac61d22e1b9d43e6_::__lambda_eba303ee992e6a97ac61d22e1b9d43e6_ @ 0x1801E1268 (_lambda_eba303ee992e6a97ac61d22e1b9d43e6_--__lambda_eba303ee992e6a97ac61d22e1b9d43e6_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Hide(CStartExperienceManager *this, struct CSingleViewShellExperience *a2)
{
  char v2; // si
  int v3; // r14d
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  volatile int *v8; // rdx
  int v9; // edi
  __int64 v10; // rdx
  char *v12; // r8
  char *v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edi
  int v21; // [rsp+20h] [rbp-39h]
  int v22; // [rsp+20h] [rbp-39h]
  bool v23[4]; // [rsp+30h] [rbp-29h] BYREF
  int v24; // [rsp+34h] [rbp-25h] BYREF
  int v25; // [rsp+38h] [rbp-21h] BYREF
  char *v26; // [rsp+40h] [rbp-19h] BYREF
  struct tagRECT v27; // [rsp+48h] [rbp-11h] BYREF
  _WORD v28[4]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v29; // [rsp+68h] [rbp+Fh]
  __int64 v30; // [rsp+70h] [rbp+17h]
  __int64 v31; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = 0;
  v25 = (int)a2;
  v24 = 3;
  v3 = (int)a2;
  if ( (_DWORD)a2 && !*((_BYTE *)this + 720) )
  {
    CStartExperienceManager::GetMonitorInformation(
      (CStartExperienceManager *)((char *)this - 40),
      a2,
      &v27,
      (enum EDGEUI_TRAYSTUCKPLACE *)&v24,
      v23,
      0LL);
    v28[3] = 0;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v21 = 0;
    v28[2] = v24;
    v28[0] = 1;
    v28[1] = v3;
    v5 = RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v28, 32LL) | 0x10000000;
    if ( v5 >= 0 )
      v2 = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C4,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        0);
  }
  v6 = 1;
  if ( v3 == 7 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 48LL))(*((_QWORD *)this + 66));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1CD,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v21);
    if ( v2 )
    {
      v6 = 3;
      *((_BYTE *)this + 723) = 1;
    }
    v9 = CSingleViewShellExperience::Hide((char *)this + 280, v6);
    if ( v9 < 0 )
    {
      v10 = 468LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        v21);
      return (unsigned int)v9;
    }
  }
  else
  {
    if ( v2 )
    {
      v6 = 3;
      *((_BYTE *)this + 723) = 1;
    }
    v9 = CSingleViewShellExperience::Hide((char *)this + 280, v6);
    if ( v9 < 0 )
    {
      v10 = 477LL;
      goto LABEL_13;
    }
  }
  if ( *((_BYTE *)this + 723) )
  {
    v12 = (char *)this - 40;
    v13 = v12;
    v26 = v12;
    if ( v12 )
    {
      v14 = *((_QWORD *)v12 + 11);
      while ( v14 >= 0 )
      {
        if ( (_DWORD)v14 != 0x7FFFFFFF )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 11, v14 + 1, v14);
          if ( v15 != v14 )
            continue;
        }
        goto LABEL_26;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v14 + 16), v8);
LABEL_26:
      v13 = v26;
    }
    v16 = lambda_eba303ee992e6a97ac61d22e1b9d43e6_::_lambda_eba303ee992e6a97ac61d22e1b9d43e6_(
            (unsigned int)&v27,
            (unsigned int)&v26,
            (_DWORD)v12,
            (unsigned int)&v25,
            (__int64)&v24);
    v20 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_eba303ee992e6a97ac61d22e1b9d43e6___(
            v18,
            v17,
            v19,
            v16);
    lambda_eba303ee992e6a97ac61d22e1b9d43e6_::__lambda_eba303ee992e6a97ac61d22e1b9d43e6_(&v27);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F3,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v20,
        v22);
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(v13);
  }
  return 0LL;
}
