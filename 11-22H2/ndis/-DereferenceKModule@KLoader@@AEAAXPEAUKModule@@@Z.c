/*
 * XREFs of ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1C01412A0
 * Callers:
 *     wil::details::lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___::_lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___ @ 0x1C00D00D8 (wil--details--lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___--_lambda_call__lambda_93aa.c)
 *     ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C01413B0 (-DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x1C0141BEC (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A098 (WPP_RECORDER_SF_D.c)
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1C00D0184 (--_GKModule@@QEAAPEAXI@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall KLoader::DereferenceKModule(KPushLockBase *this, struct KModule *a2)
{
  int v4; // edi
  int v5; // edi
  struct KModule *v6; // rcx
  struct KModule **v7; // rax
  __int64 v8; // [rsp+28h] [rbp-30h]
  KLockHolder v9; // [rsp+30h] [rbp-28h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Au,
      (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
      a2);
  v9.m_State = Unlocked;
  v9.m_Lock = this;
  v9.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v9);
  v4 = *((_DWORD *)a2 + 4);
  if ( !v4 )
    NT_ASSERT("Module->ReferenceCount > 0");
  v5 = v4 - 1;
  *((_DWORD *)a2 + 4) = v5;
  if ( !v5 )
  {
    v6 = *(struct KModule **)a2;
    if ( *(struct KModule **)(*(_QWORD *)a2 + 8LL) != a2 || (v7 = (struct KModule **)*((_QWORD *)a2 + 1), *v7 != a2) )
      __fastfail(3u);
    *v7 = v6;
    *((_QWORD *)v6 + 1) = v7;
    KModule::`scalar deleting destructor'((char *)a2, 0);
    ExFreePoolWithTag(a2, 0);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v5;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Bu,
      (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids,
      v8);
  }
  KLockHolder::~KLockHolder(&v9);
}
