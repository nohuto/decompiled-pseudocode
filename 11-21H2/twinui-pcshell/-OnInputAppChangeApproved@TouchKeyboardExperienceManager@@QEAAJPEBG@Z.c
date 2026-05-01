/*
 * XREFs of ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x180462760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18009EB10 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?SetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAAXPEBG@Z @ 0x18022F08E (-SetCurrentInputAppId@TouchKeyboardExperienceManager@@QEAAXPEBG@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1803D4898 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18045A67C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045ADC4 (--1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18045D1B0 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18045D340 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18046541C (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N00@Z @ 0x180465F28 (-Stop@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N00@Z.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1804696A8 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     ?swap@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAXAEAV12@@Z @ 0x18046AC18 (-swap@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@2.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppChangeApproved(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  bool v6; // r13
  unsigned __int16 **v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // r14
  struct KBViewInfo **i; // rsi
  int v12; // eax
  const unsigned __int16 *v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  int ModalExperienceAsync; // eax
  unsigned int v18; // esi
  const char *v19; // r9
  __int64 result; // rax
  bool v21; // [rsp+20h] [rbp-1C8h]
  bool v22; // [rsp+21h] [rbp-1C7h]
  RTL_SRWLOCK *v23; // [rsp+28h] [rbp-1C0h] BYREF
  __int128 v24; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-1A8h]
  unsigned __int16 *v26[3]; // [rsp+48h] [rbp-1A0h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-188h]
  _QWORD v28[40]; // [rsp+70h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"InputAppActivationRequested");
  v28[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v28,
    a2);
  try
  {
    v22 = 0;
    v6 = 0;
    v21 = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
      1u,
      v4,
      v5);
    TouchKeyboardExperienceManager::GetCurrentInputAppId((__int64)this, (__int64)v26);
    if ( v26[2] )
    {
      v22 = 1;
      v7 = v26;
      if ( v27 >= 8 )
        v7 = (unsigned __int16 **)v26[0];
      if ( (unsigned int)_o__wcsicmp(v7, a2) )
      {
        v24 = 0LL;
        v25 = 0LL;
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v23, this + 53);
        std::vector<std::shared_ptr<KBViewInfo>>::swap(&v24, &this[54]);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v23);
        v10 = (void *)v24;
        v6 = (_QWORD)v24 != *((_QWORD *)&v24 + 1);
        for ( i = (struct KBViewInfo **)v24; i != *((struct KBViewInfo ***)&v24 + 1); i += 2 )
        {
          v12 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, *i, v8, v9);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x23E,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v12);
        }
        v21 = 1;
        v13 = (const unsigned __int16 *)v26;
        if ( v27 >= 8 )
          v13 = v26[0];
        v14 = TouchKeyboardExperienceManager::TerminateInputApp((TouchKeyboardExperienceManager *)this, v13);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x243,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v14);
        if ( v10 )
        {
          std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
            (__int64)v10,
            *((__int64 *)&v24 + 1));
          std::_Deallocate<16,0>(v10, (v25 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
        }
      }
    }
    v15 = -1LL;
    do
      ++v15;
    while ( a2[v15] );
    if ( v15
      && (TouchKeyboardExperienceManager::SetCurrentInputAppId((TouchKeyboardExperienceManager *)this, a2),
          ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync(
                                   (TouchKeyboardExperienceManager *)this,
                                   v16),
          v18 = ModalExperienceAsync,
          ModalExperienceAsync < 0) )
    {
      BYTE4(this[150].Ptr) = 0;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24C,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ModalExperienceAsync);
      std::wstring::_Tidy_deallocate((__int64)v26);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v28);
      result = v18;
    }
    else
    {
      std::wstring::_Tidy_deallocate((__int64)v26);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::Stop(
        (TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v28,
        v22,
        v6,
        v21);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v28);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v23) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x271,
                     (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                     v19);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v28);
    return (unsigned int)v23;
  }
  return result;
}
