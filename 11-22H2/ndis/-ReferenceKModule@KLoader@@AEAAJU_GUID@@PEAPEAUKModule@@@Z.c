/*
 * XREFs of ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x1C0141900
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0141A70 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFER.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0035994 (WPP_RECORDER_SF__guid_.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     CreateKModule @ 0x1C0141180 (CreateKModule.c)
 *     ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x1C0141454 (-FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z.c)
 */

__int64 __fastcall KLoader::ReferenceKModule(KPushLockBase *this, struct _GUID *a2, struct KModule **a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  struct KModule *v8; // rbx
  unsigned int KModule; // ebx
  __int64 result; // rax
  KLoader **Value; // rcx
  int v12; // eax
  struct KModule *ModuleByGuidLocked; // [rsp+40h] [rbp-58h] BYREF
  KLockHolder v14; // [rsp+48h] [rbp-50h] BYREF
  struct _GUID v15; // [rsp+60h] [rbp-38h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x17u,
      (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
      (__int64)a2);
  v14.m_State = Unlocked;
  v14.m_Lock = this;
  v14.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v14);
  ModuleByGuidLocked = KLoader::FindModuleByGuidLocked((KLoader *)this, a2, v6, v7);
  v8 = ModuleByGuidLocked;
  if ( !ModuleByGuidLocked )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x18u,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
        (__int64)a2);
    v15 = *a2;
    KModule = CreateKModule((__int64)&v15, (void **)&ModuleByGuidLocked);
    if ( KModule )
    {
      KLockHolder::~KLockHolder(&v14);
      return KModule;
    }
    Value = (KLoader **)this[2].m_Lock.Value;
    if ( *Value != (KLoader *)&this[1] )
      __fastfail(3u);
    v8 = ModuleByGuidLocked;
    *(_QWORD *)ModuleByGuidLocked = this + 1;
    *((_QWORD *)v8 + 1) = Value;
    *Value = v8;
    this[2].m_Lock.Value = (unsigned __int64)v8;
  }
  v12 = *((_DWORD *)v8 + 4) + 1;
  *((_DWORD *)v8 + 4) = v12;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x19u,
      (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
      (char)v8,
      v12);
  KLockHolder::~KLockHolder(&v14);
  result = 0LL;
  *a3 = v8;
  return result;
}
