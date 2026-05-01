/*
 * XREFs of ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180515004
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802DC360 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B0834 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetStopResult@?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18017F134 (-SetStopResult@-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0cfa17de80a192d7104afc8a843b7ae2___ @ 0x1802052D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_0cfa17de80a192d7104afc8a843b7ae2___.c)
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::_lambda_0cfa17de80a192d7104afc8a843b7ae2_ @ 0x1802062D8 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--_lambda_0cfa17de80a192d7104afc8a843b7ae2_.c)
 *     _lambda_0cfa17de80a192d7104afc8a843b7ae2_::__lambda_0cfa17de80a192d7104afc8a843b7ae2_ @ 0x180206618 (_lambda_0cfa17de80a192d7104afc8a843b7ae2_--__lambda_0cfa17de80a192d7104afc8a843b7ae2_.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DAA36 (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1802DB684 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ??$?0$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1805080A8 (--$-0$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integral_constant@D$0A@@w.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@AEAV21@@Z @ 0x18050A870 (--$_Emplace_reallocate@AEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@.c)
 *     ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18050B5BC (--$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@.c)
 *     ?Stop@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180518768 (-Stop@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::OnViewCreated(
        TouchKeyboardExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct EventRegistrationToken a3)
{
  struct IUnknown ***v5; // r15
  struct IUnknown ***v6; // rbx
  __int64 v7; // r14
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rax
  _QWORD *v12; // rcx
  const char *v13; // r9
  std::_Ref_count_base *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edi
  unsigned int v20; // [rsp+40h] [rbp-348h] BYREF
  __int64 v21; // [rsp+48h] [rbp-340h] BYREF
  std::_Ref_count_base *v22[2]; // [rsp+50h] [rbp-338h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-328h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v24; // [rsp+68h] [rbp-320h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+70h] [rbp-318h] BYREF
  __int64 *v26; // [rsp+80h] [rbp-308h] BYREF
  RTL_SRWLOCK *v27; // [rsp+88h] [rbp-300h] BYREF
  __int64 v28; // [rsp+90h] [rbp-2F8h] BYREF
  std::_Ref_count_base *v29; // [rsp+98h] [rbp-2F0h]
  _BYTE v30[48]; // [rsp+A0h] [rbp-2E8h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-2B8h]
  __int64 v32[46]; // [rsp+1E0h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+388h] [rbp+0h]

  v24 = a2;
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::OnViewCreated((__int64)v30, (char)a2);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v27, (RTL_SRWLOCK *)this + 53);
  v5 = (struct IUnknown ***)*((_QWORD *)this + 55);
  v6 = (struct IUnknown ***)*((_QWORD *)this + 54);
  v7 = ((char *)v5 - (char *)v6) >> 4;
  v20 = v7;
  while ( v6 != v5 && !(unsigned int)SHIsSameObject(**v6, (struct IUnknown *)a2) )
    v6 += 2;
  if ( v6 != *((struct IUnknown ****)this + 55) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)v30,
      &SRWLock);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
      v31,
      -2147483635,
      0LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    TouchKeyboardExperienceTelemetryLogger::OnViewCreated::Stop(
      (TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)v30,
      v7);
    goto LABEL_34;
  }
  v21 = 0LL;
  v26 = &v21;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v26);
  v9 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    SRWLock = (PSRWLOCK)this;
    *(_OWORD *)v22 = 0LL;
    try
    {
      v11 = std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &>(&v28, &v24);
      std::shared_ptr<KBViewInfo>::operator=(v22, v11);
      if ( v29 )
        std::_Ref_count_base::_Decref(v29);
      KBViewInfo::InitializeIds(v22[0]);
      v12 = (_QWORD *)*((_QWORD *)this + 55);
      if ( v12 == *((_QWORD **)this + 56) )
      {
        std::vector<std::shared_ptr<KBViewInfo>>::_Emplace_reallocate<std::shared_ptr<KBViewInfo> &>(
          (__int64 *)this + 54,
          *((_QWORD *)this + 55),
          v22);
      }
      else
      {
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          v12,
          v22);
        *((_QWORD *)this + 55) += 16LL;
      }
    }
    catch ( ... )
    {
      v20 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0x1502,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              v13);
      if ( v22[1] )
        std::_Ref_count_base::_Decref(v22[1]);
      v10 = v20;
      goto LABEL_30;
    }
    *(_OWORD *)v25 = 0LL;
    v14 = v22[1];
    if ( v22[1] )
    {
      *(_OWORD *)v25 = *(_OWORD *)v22;
      _InterlockedIncrement((volatile signed __int32 *)v22[1] + 3);
      v14 = v22[1];
    }
    v15 = lambda_0cfa17de80a192d7104afc8a843b7ae2_::_lambda_0cfa17de80a192d7104afc8a843b7ae2_(
            (__int64)v32,
            &v24,
            &v21,
            &SRWLock,
            v25,
            (__int64)v30,
            &v20);
    v18 = Windows::Internal::ComTaskPool::QueueTask__lambda_0cfa17de80a192d7104afc8a843b7ae2___(
            v17,
            v16,
            *((_DWORD *)this + 243),
            v15);
    lambda_0cfa17de80a192d7104afc8a843b7ae2_::__lambda_0cfa17de80a192d7104afc8a843b7ae2_(v32);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1546,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
      if ( v25[1] )
        std::_Ref_count_base::_Decwref(v25[1]);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      v10 = v18;
      goto LABEL_30;
    }
    if ( v25[1] )
      std::_Ref_count_base::_Decwref(v25[1]);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
LABEL_34:
    v10 = 0;
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14F8,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_30:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
LABEL_35:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v27);
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)v30);
  return v10;
}
