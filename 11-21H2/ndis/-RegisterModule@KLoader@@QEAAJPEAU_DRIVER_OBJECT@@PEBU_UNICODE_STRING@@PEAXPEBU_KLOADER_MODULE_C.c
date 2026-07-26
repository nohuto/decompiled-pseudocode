/*
 * XREFs of ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x1C0135D8C
 * Callers:
 *     KLoaderRegisterModule @ 0x1C00CB300 (KLoaderRegisterModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1C013545C (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x1C0135610 (-FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1C0136020 (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall KLoader::RegisterModule(
        KLoader *this,
        struct _DRIVER_OBJECT *a2,
        const struct _UNICODE_STRING *a3,
        void *a4,
        const struct _KLOADER_MODULE_CHARACTERISTICS *a5)
{
  KLoader *v6; // rbp
  unsigned __int16 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  struct KModule *ModuleByGuidLocked; // rax
  struct KModule *v13; // rbx
  unsigned int v14; // esi
  KLockHolder v15; // [rsp+30h] [rbp-48h] BYREF

  v6 = qword_1C00EC1F0;
  if ( *(_DWORD *)a5 < 0x30u )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
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
  v15.m_Lock = (KPushLockBase *)qword_1C00EC1F0;
  v15.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v15);
  ModuleByGuidLocked = KLoader::FindModuleByGuidLocked(v6, (const struct _GUID *)((char *)a5 + 4), v10, v11);
  v13 = ModuleByGuidLocked;
  if ( ModuleByGuidLocked )
  {
    ++*((_DWORD *)ModuleByGuidLocked + 4);
    KLockHolder::~KLockHolder(&v15);
    v14 = DriverService::Open(
            (struct KModule *)((char *)v13 + 40),
            a2,
            (const struct _UNICODE_STRING *)((char *)a5 + 24));
    if ( !v14 )
    {
      *((_QWORD *)v13 + 10) = a4;
      v14 = 0;
      *((_QWORD *)v13 + 11) = *((_QWORD *)a5 + 5);
    }
    KLoader::DereferenceKModule((KPushLockBase *)v6, v13);
    return v14;
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
