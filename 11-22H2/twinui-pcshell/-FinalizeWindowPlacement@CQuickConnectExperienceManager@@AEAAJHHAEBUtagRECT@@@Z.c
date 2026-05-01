/*
 * XREFs of ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18044D700
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180451204 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x18044ABF0 (--$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@Experi.c)
 *     ??$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x18044ACA0 (--$ExperienceManager_FinalizeWindowPlacement_Prefered@AEAW4Placement@Popups@UI@Windows@@@Experie.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18044BDA8 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18044BDA8.c)
 *     ??1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C180 (--1ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ @ 0x18044F7AC (-StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18044FCCC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagRECT@@AEA_N@Z @ 0x180451598 (-ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagR.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::FinalizeWindowPlacement(
        CQuickConnectExperienceManager *this,
        int a2,
        unsigned int a3,
        const struct tagRECT *a4)
{
  unsigned int v6; // ebx
  unsigned int *v7; // rdi
  int v8; // r12d
  unsigned int v9; // r11d
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // r14d
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-CCh]
  __int64 v16; // [rsp+40h] [rbp-C8h]
  _QWORD v17[40]; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+188h] [rbp+80h] BYREF
  __m128i si128; // [rsp+18Ch] [rbp+84h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  LODWORD(v16) = a2;
  v15 = a3;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"ExperienceManager_FinalizeWindowPlacement");
  v17[0] = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::`vftable';
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::StartActivity((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v17);
  v6 = 0;
  if ( !*((_BYTE *)this + 388) )
  {
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Prefered<enum Windows::UI::Popups::Placement &>(
      (__int64)v17,
      (int *)this + 90);
    v7 = (unsigned int *)&v18;
    v8 = *((_DWORD *)this + 90);
    v9 = 0;
    v10 = v15;
    v11 = (unsigned int)v16;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v18 = v8;
    LOBYTE(v14) = 0;
    while ( 1 )
    {
      if ( !v9 || *v7 != v8 )
      {
        v12 = *v7;
        CQuickConnectExperienceManager::ValidateBoundary(this, *v7, v11, v10, a4, &v14);
        if ( (_BYTE)v14 )
          break;
      }
      ++v9;
      ++v7;
      if ( v9 >= 5 )
      {
        v6 = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x394,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)0x80004005LL);
        goto LABEL_9;
      }
    }
    *((_DWORD *)this + 90) = v12;
    QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Finalized<enum Windows::UI::Popups::Placement &>(
      (__int64)v17,
      (int *)this + 90);
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
  }
LABEL_9:
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::~ExperienceManager_FinalizeWindowPlacement((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement *)v17);
  return v6;
}
