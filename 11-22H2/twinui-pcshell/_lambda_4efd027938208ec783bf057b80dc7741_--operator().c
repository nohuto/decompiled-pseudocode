/*
 * XREFs of _lambda_4efd027938208ec783bf057b80dc7741_::operator() @ 0x180207794
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4efd027938208ec783bf057b80dc7741___::Run @ 0x18020B9D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4efd027938208ec783bf057b80dc7741___--Run.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$ApplicationResumedButStillActivating@PEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG$$QEAI$$QEA_N@Z @ 0x180204CC0 (--$ApplicationResumedButStillActivating@PEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ??$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG000$$QEA_NAEB_N@Z @ 0x180204E6C (--$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$.c)
 *     ??$ApplicationTerminatedWhileActivating@PEBGPEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG0$$QEAI$$QEA_N@Z @ 0x180204F6C (--$ApplicationTerminatedWhileActivating@PEBGPEBGI_N@TouchKeyboardExperienceTelemetryLogger@@SAX$.c)
 *     ??$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA_N@Z @ 0x180205CC4 (--$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x18020B414 (-RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z.c)
 *     _anonymous_namespace_::StringifyStateChange @ 0x18020BE78 (_anonymous_namespace_--StringifyStateChange.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802DB4DC (-HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802DBCA8 (-InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802DD722 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?ClearCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18050EA78 (-ClearCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180512E0C (-InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x1805132A0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z @ 0x180515EFC (-SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x18051B3EC (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180527028 (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 */

void __fastcall lambda_4efd027938208ec783bf057b80dc7741_::operator()(__int64 a1)
{
  char v2; // di
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  bool v6; // cf
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  const unsigned __int16 *v14; // rdx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v17[2]; // [rsp+40h] [rbp-10h] BYREF
  char v18; // [rsp+78h] [rbp+28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    v2 = 1;
    if ( *(_DWORD *)(a1 + 32) != 8 )
      goto LABEL_12;
    if ( !*(_BYTE *)(a1 + 36) )
      goto LABEL_12;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 376LL);
    if ( !v3 )
      goto LABEL_12;
    v4 = a1;
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      v4 = *(_QWORD *)a1;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, v4, &v19) >= 0
      && (_DWORD)v19 == 1 )
    {
      v18 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1013LL);
      LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 1004LL);
      v5 = anonymous_namespace_::StringifyApplicationState(1LL);
      v6 = *(_QWORD *)(a1 + 24) < 8uLL;
      v15 = v5;
      if ( !v6 )
        a1 = *(_QWORD *)a1;
      v16 = a1;
      TouchKeyboardExperienceTelemetryLogger::ApplicationTerminatedWhileActivating<unsigned short const *,unsigned short const *,unsigned int,bool>(
        &v16,
        &v15,
        (int *)&v20,
        &v18);
    }
    else
    {
LABEL_12:
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(*(_QWORD *)(a1 + 40) + 576LL), v17);
      v7 = *(_QWORD *)(a1 + 40);
      switch ( *(_DWORD *)(a1 + 32) )
      {
        case 1:
          *(_DWORD *)(v7 + 564) = 1;
          break;
        case 2:
          *(_DWORD *)(v7 + 564) = 2;
          break;
        case 4:
          *(_DWORD *)(v7 + 564) = 3;
          break;
        case 8:
          *(_DWORD *)(v7 + 564) = 4;
          break;
      }
      v18 = *(_BYTE *)(v7 + 1013);
      v19 = anonymous_namespace_::StringifyApplicationState(*(unsigned int *)(*(_QWORD *)(a1 + 40) + 564LL));
      v9 = anonymous_namespace_::StringifyApplicationState(v8);
      v10 = *(unsigned int *)(a1 + 32);
      v20 = v9;
      v11 = anonymous_namespace_::StringifyStateChange(v10);
      v6 = *(_QWORD *)(a1 + 24) < 8uLL;
      v16 = v11;
      v12 = a1;
      if ( !v6 )
        v12 = *(_QWORD *)a1;
      v15 = v12;
      TouchKeyboardExperienceTelemetryLogger::ApplicationStateChanged<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool const &>(
        &v15,
        &v16,
        &v20,
        &v19,
        &v18,
        (char *)(a1 + 36));
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + 568LL) = 0;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v17);
      v13 = *(_DWORD *)(a1 + 32);
      switch ( v13 )
      {
        case 1:
          v14 = (const unsigned __int16 *)a1;
          if ( *(_QWORD *)(a1 + 24) >= 8uLL )
            v14 = *(const unsigned __int16 **)a1;
          TouchKeyboardExperienceManager::SetCurrentInputAppId(*(TouchKeyboardExperienceManager **)(a1 + 40), v14);
          KeyboardHosting::TabTipAdapter::OnInputAppResumed(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 40)
                                                                                               + 584LL));
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1012LL) )
          {
            v18 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1013LL);
            v6 = *(_QWORD *)(a1 + 24) < 8uLL;
            LODWORD(v19) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 1004LL);
            if ( !v6 )
              a1 = *(_QWORD *)a1;
            v20 = a1;
            TouchKeyboardExperienceTelemetryLogger::ApplicationResumedButStillActivating<unsigned short const *,unsigned int,bool>(
              &v20,
              &v19,
              &v18);
          }
          break;
        case 8:
          TouchKeyboardExperienceManager::ClearCurrentInputAppId(*(TouchKeyboardExperienceManager **)(a1 + 40));
          KeyboardHosting::TabTipAdapter::OnInputAppTerminated(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 40)
                                                                                                  + 584LL));
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1013LL)
            || *(int *)(*(_QWORD *)(a1 + 40) + 1008LL) < 0
            || *(_DWORD *)(*(_QWORD *)(a1 + 40) + 1004LL) >= 0xAu )
          {
            v2 = 0;
          }
          if ( v2 )
          {
            TouchKeyboardExperienceManager::RelaunchAfterMilliseconds(
              *(TouchKeyboardExperienceManager **)(a1 + 40),
              0x3E8u);
          }
          else
          {
            v18 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1013LL);
            LODWORD(v19) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 1004LL);
            TouchKeyboardExperienceTelemetryLogger::RelaunchInputAppAfterTerminationRejected<unsigned int,bool>(
              (int *)&v19,
              &v18);
          }
          break;
        case 2:
          TouchKeyboardExperienceManager::HideAllInputViews(*(TouchKeyboardExperienceManager **)(a1 + 40));
          TouchKeyboardExperienceTelemetryLogger::InputAppSuspending();
          break;
        case 4:
          TouchKeyboardExperienceTelemetryLogger::InputAppSuspended();
          break;
      }
    }
  }
}
