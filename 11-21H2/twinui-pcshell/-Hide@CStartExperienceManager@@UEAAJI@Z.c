/*
 * XREFs of ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18000C880
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18000CAF8 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?ReducedVisualEffects@@YA_NXZ @ 0x18000D22C (-ReducedVisualEffects@@YA_NXZ.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x18007398C (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EFAA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801191C4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801494E8 (-InternalAddRef@-$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_c11c54da2889639c00e05aec0ffbb75c___ @ 0x1801970B4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_c11c54da2889639c00e05aec0ffbb75c___.c)
 *     _lambda_c11c54da2889639c00e05aec0ffbb75c_::__lambda_c11c54da2889639c00e05aec0ffbb75c_ @ 0x180197168 (_lambda_c11c54da2889639c00e05aec0ffbb75c_--__lambda_c11c54da2889639c00e05aec0ffbb75c_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Hide(CStartExperienceManager *this, struct CSingleViewShellExperience *a2)
{
  char v2; // si
  int v3; // r14d
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rdx
  volatile int *v9; // rdx
  int v10; // edi
  __int64 v11; // rdx
  char *v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // edi
  int v20; // [rsp+20h] [rbp-40h]
  bool v21[4]; // [rsp+30h] [rbp-30h] BYREF
  int v22; // [rsp+34h] [rbp-2Ch] BYREF
  struct tagRECT v23; // [rsp+38h] [rbp-28h] BYREF
  int v24; // [rsp+48h] [rbp-18h]
  int v25; // [rsp+4Ch] [rbp-14h]
  _WORD v26[4]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v2 = 0;
  v22 = 3;
  v3 = (int)a2;
  if ( (_DWORD)a2 && !*((_BYTE *)this + 648) && !ReducedVisualEffects() )
  {
    CStartExperienceManager::GetMonitorInformation(
      (CStartExperienceManager *)((char *)this - 40),
      a2,
      &v23,
      (enum EDGEUI_TRAYSTUCKPLACE *)&v22,
      v21,
      0LL);
    v26[2] = v22;
    v26[0] = 1;
    v20 = 0;
    v26[3] = 0;
    v26[1] = v3;
    v5 = RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v26, 8LL) | 0x10000000;
    if ( v5 >= 0 )
      v2 = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x180,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        0);
  }
  v6 = 1;
  if ( v3 == 7 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 48LL))(*((_QWORD *)this + 65));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x189,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v20);
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
      v8,
      0LL);
    if ( v2 )
    {
      v6 = 3;
      *((_BYTE *)this + 651) = 1;
    }
    v10 = CSingleViewShellExperience::Hide((char *)this + 280, v6);
    if ( v10 < 0 )
    {
      v11 = 400LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v10,
        v20);
      return (unsigned int)v10;
    }
  }
  else
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
      a2,
      0LL);
    if ( v2 )
    {
      v6 = 3;
      *((_BYTE *)this + 651) = 1;
    }
    v10 = CSingleViewShellExperience::Hide((char *)this + 280, v6);
    if ( v10 < 0 )
    {
      v11 = 409LL;
      goto LABEL_14;
    }
  }
  if ( *((_BYTE *)this + 651) )
  {
    v13 = (char *)this - 40;
    if ( v13 )
    {
      v14 = *((_QWORD *)v13 + 11);
      while ( v14 >= 0 )
      {
        if ( (_DWORD)v14 != 0x7FFFFFFF )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 11, v14 + 1, v14);
          if ( v15 != v14 )
            continue;
        }
        goto LABEL_27;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v14 + 16), v9);
    }
LABEL_27:
    *(_QWORD *)&v23.left = v13;
    Microsoft::WRL::ComPtr<CStartExperienceManager>::InternalAddRef(&v23);
    v25 = v22;
    *(_QWORD *)&v23.right = v13;
    v24 = v3;
    v19 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_c11c54da2889639c00e05aec0ffbb75c___(
            v17,
            v16,
            v18,
            &v23);
    lambda_c11c54da2889639c00e05aec0ffbb75c_::__lambda_c11c54da2889639c00e05aec0ffbb75c_(&v23);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v19,
        v20);
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(v13);
  }
  return 0LL;
}
