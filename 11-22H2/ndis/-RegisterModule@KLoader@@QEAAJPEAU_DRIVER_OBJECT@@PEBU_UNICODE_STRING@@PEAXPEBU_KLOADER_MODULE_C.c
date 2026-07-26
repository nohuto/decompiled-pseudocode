/*
 * XREFs of ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x1C0141BEC
 * Callers:
 *     KLoaderRegisterModule @ 0x1C00CFFB0 (KLoaderRegisterModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A098 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0035994 (WPP_RECORDER_SF__guid_.c)
 *     wil::details::lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___::_lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___ @ 0x1C00D00D8 (wil--details--lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___--_lambda_call__lambda_93aa.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1C01412A0 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x1C0141454 (-FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1C0141E9C (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall KLoader::RegisterModule(
        KLoader *this,
        struct _DRIVER_OBJECT *a2,
        const struct _UNICODE_STRING *a3,
        unsigned __int64 a4,
        const struct _KLOADER_MODULE_CHARACTERISTICS *a5)
{
  KLoader *v6; // rsi
  unsigned __int16 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  struct KModule *ModuleByGuidLocked; // rax
  KPushLockBase *v13; // rbx
  unsigned int v14; // ebp
  KLockHolder v15; // [rsp+30h] [rbp-48h] BYREF

  v6 = qword_1C00F51E0;
  if ( *(_DWORD *)a5 < 0x30u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
        *(_DWORD *)a5);
    return 3221225476LL;
  }
  if ( !*((_WORD *)a5 + 12) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 11;
LABEL_11:
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v9,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( !*((_QWORD *)a5 + 5) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 12;
      goto LABEL_11;
    }
    return 3221225485LL;
  }
  v15.m_State = Unlocked;
  v15.m_Lock = (KPushLockBase *)qword_1C00F51E0;
  v15.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v15);
  ModuleByGuidLocked = KLoader::FindModuleByGuidLocked(v6, (const struct _GUID *)((char *)a5 + 4), v10, v11);
  v13 = (KPushLockBase *)ModuleByGuidLocked;
  if ( ModuleByGuidLocked )
  {
    ++*((_DWORD *)ModuleByGuidLocked + 4);
    KLockHolder::~KLockHolder(&v15);
    *(_QWORD *)&v15.m_State = v6;
    v15.m_Lock = v13;
    v15.m_Region.m_Entered = 1;
    v14 = DriverService::Open((DriverService *)&v13[5], a2, (const struct _UNICODE_STRING *)((char *)a5 + 24));
    if ( v14 )
    {
      wil::details::lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___::_lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___((__int64)&v15);
      return v14;
    }
    else
    {
      v13[10].m_Lock.Value = a4;
      v13[11].m_Lock.0 = *($2F38BEDF952D5DA5F266621B11247D04 *)((char *)a5 + 40);
      KLoader::DereferenceKModule((KPushLockBase *)v6, (struct KModule *)v13);
      return 0LL;
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
        (__int64)a5 + 4);
    KLockHolder::~KLockHolder(&v15);
    return 3221225659LL;
  }
}
