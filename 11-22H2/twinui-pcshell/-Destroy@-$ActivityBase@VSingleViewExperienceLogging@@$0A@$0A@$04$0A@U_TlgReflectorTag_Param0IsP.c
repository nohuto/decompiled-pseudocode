/*
 * XREFs of ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B9164
 * Callers:
 *     ??1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800B9E0C (--1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800DD334 (--1OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1LaunchCompleted@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180199958 (--1LaunchCompleted@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1802EBC1C (--1OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800ADA04 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B0834 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801AFE14 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_1801AFE14.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  _DWORD *v4; // rcx
  int v5; // edx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 39;
  v3 = 1;
  if ( !a1[39] )
    goto LABEL_2;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_2:
    v4 = (_DWORD *)a1[6];
    if ( *v4 == 1 )
    {
      LODWORD(SRWLock) = v4[22];
      v5 = -2147024322;
      if ( (int)SRWLock < 0 )
        v5 = (int)SRWLock;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        (__int64)v4,
        v5,
        (int *)&SRWLock);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
