/*
 * XREFs of ?OnApplicationStateChanged_Old@TouchKeyboardExperienceManager@@AEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18020AA5C
 * Callers:
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x1805142E0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ApplicationStateChanged@AEAPEBGPEBGPEBGPEBG_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBG$$QEAPEBG11$$QEA_NAEA_N@Z @ 0x180204D6C (--$ApplicationStateChanged@AEAPEBGPEBGPEBGPEBG_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SA.c)
 *     _anonymous_namespace_::StringifyStateChange @ 0x18020BE78 (_anonymous_namespace_--StringifyStateChange.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NXZ @ 0x18020C248 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_IAIRV2@@@details@wil@@QEAA_NXZ.c)
 *     ?HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802DB4DC (-HideAllInputViews@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802DBCA8 (-InputAppSuspending@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802DD722 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?ClearCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18050EA78 (-ClearCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180512E0C (-InputAppSuspended@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z @ 0x180515EFC (-SetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAAXPEBG@Z.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x18051B3EC (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180527028 (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18052A148 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged_Old(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edx
  int v7; // eax
  int v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  RTL_SRWLOCK *v13[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  unsigned __int16 *v15; // [rsp+78h] [rbp+18h] BYREF
  char v16; // [rsp+88h] [rbp+28h] BYREF

  v15 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAIRV2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_IAIRV2>::GetImpl'::`2'::impl) )
    return 0LL;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 576), v13);
  v16 = *(_BYTE *)(a1 + 1012);
  switch ( a3 )
  {
    case 1u:
      *(_DWORD *)(a1 + 564) = 1;
      break;
    case 2u:
      *(_DWORD *)(a1 + 564) = 2;
      goto LABEL_11;
    case 4u:
      *(_DWORD *)(a1 + 564) = 3;
      goto LABEL_11;
    case 8u:
      *(_DWORD *)(a1 + 564) = 4;
      break;
    default:
      goto LABEL_11;
  }
  *(_BYTE *)(a1 + 1012) = 0;
LABEL_11:
  v5 = *(unsigned int *)(a1 + 564);
  LOBYTE(v9) = *(_BYTE *)(a1 + 1013);
  v10 = anonymous_namespace_::StringifyApplicationState(v5);
  v11 = anonymous_namespace_::StringifyApplicationState(v6);
  v12 = anonymous_namespace_::StringifyStateChange(a3);
  TouchKeyboardExperienceTelemetryLogger::ApplicationStateChanged<unsigned short const * &,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool &>(
    (__int64 *)&v15,
    &v12,
    &v11,
    &v10,
    (char *)&v9,
    &v16);
  *(_BYTE *)(a1 + 568) = 0;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v13);
  switch ( a3 )
  {
    case 1u:
      TouchKeyboardExperienceManager::SetCurrentInputAppId((TouchKeyboardExperienceManager *)a1, v15);
      KeyboardHosting::TabTipAdapter::OnInputAppResumed(*(KeyboardHosting::TabTipAdapter **)(a1 + 584));
      break;
    case 8u:
      TouchKeyboardExperienceManager::ClearCurrentInputAppId((TouchKeyboardExperienceManager *)a1);
      KeyboardHosting::TabTipAdapter::OnInputAppTerminated(*(KeyboardHosting::TabTipAdapter **)(a1 + 584));
      if ( !*(_BYTE *)(a1 + 1013) && *(int *)(a1 + 1008) >= 0 )
      {
        v7 = KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(*(KeyboardHosting::TabTipAdapter **)(a1 + 584));
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x822,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v7);
      }
      break;
    case 2u:
      TouchKeyboardExperienceManager::HideAllInputViews((TouchKeyboardExperienceManager *)a1);
      TouchKeyboardExperienceTelemetryLogger::InputAppSuspending();
      break;
    case 4u:
      TouchKeyboardExperienceTelemetryLogger::InputAppSuspended();
      break;
  }
  return 0LL;
}
