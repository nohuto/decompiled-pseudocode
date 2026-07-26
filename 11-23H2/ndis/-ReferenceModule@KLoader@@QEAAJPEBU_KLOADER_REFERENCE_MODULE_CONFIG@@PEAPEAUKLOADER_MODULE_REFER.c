/*
 * XREFs of ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0141A50
 * Callers:
 *     KLoaderReferenceModule @ 0x1C00CFF10 (KLoaderReferenceModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     wil::details::lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___::_lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___ @ 0x1C00D00F8 (wil--details--lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___--_lambda_call__lambda_93aa.c)
 *     wil::details::lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___::_lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___ @ 0x1C00D0120 (wil--details--lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___--_lambda_call__lambda_16f7.c)
 *     ??1?$unique_ptr@UKModuleReference@@U?$default_delete@UKModuleReference@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00D0174 (--1-$unique_ptr@UKModuleReference@@U-$default_delete@UKModuleReference@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x1C01418E0 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 *     ?Reference@DriverService@@QEAAJXZ @ 0x1C0141FC4 (-Reference@DriverService@@QEAAJXZ.c)
 */

__int64 __fastcall KLoader::ReferenceModule(
        KLoader *this,
        const struct _KLOADER_REFERENCE_MODULE_CONFIG *a2,
        struct KLOADER_MODULE_REFERENCE__ **a3)
{
  __int128 v3; // xmm0
  KLoader *v4; // rbx
  __int64 result; // rax
  KPushLockBase *v8; // rdi
  unsigned int v9; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  KPushLockBase **Value; // rcx
  KPushLockBase **v13; // rax
  KPushLockBase *v14; // rdi
  KLockHolder v15; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-20h] BYREF
  char v17; // [rsp+60h] [rbp-10h]
  struct KModule *v18; // [rsp+90h] [rbp+20h] BYREF

  v18 = this;
  v3 = *(_OWORD *)((char *)a2 + 8);
  v4 = qword_1C00F51E0;
  v18 = 0LL;
  *(_OWORD *)&v15.m_State = v3;
  result = KLoader::ReferenceKModule((KPushLockBase *)qword_1C00F51E0, (struct _GUID *)&v15, &v18);
  if ( (_DWORD)result )
    return result;
  v8 = (KPushLockBase *)v18;
  v16[0] = v4;
  v16[1] = v18;
  v17 = 1;
  v9 = DriverService::Reference((struct KModule *)((char *)v18 + 40));
  if ( v9 )
  {
LABEL_10:
    wil::details::lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___::_lambda_call__lambda_93aa6df5f885dc390f79e7d69480c1e9___((__int64)v16);
    return v9;
  }
  *(_QWORD *)&v15.m_State = v8;
  LOBYTE(v15.m_Lock) = 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x62694C4Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v18 = 0LL;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x1Cu,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids);
    wistd::unique_ptr<KModuleReference,wistd::default_delete<KModuleReference>>::~unique_ptr<KModuleReference,wistd::default_delete<KModuleReference>>((void **)&v18);
    wil::details::lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___::_lambda_call__lambda_16f7d953e3aee9e3fcfcb9da7fdb0623___(&v15);
    v9 = -1073741670;
    goto LABEL_10;
  }
  PoolWithTag[1] = 0LL;
  v15.m_State = Unlocked;
  *((_OWORD *)PoolWithTag + 1) = 0LL;
  *PoolWithTag = v8;
  PoolWithTag[1] = *((_QWORD *)a2 + 3);
  v15.m_Lock = v8 + 12;
  v15.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v15);
  Value = (KPushLockBase **)v8[14].m_Lock.Value;
  v13 = (KPushLockBase **)(v11 + 2);
  v14 = v8 + 13;
  if ( *Value != v14 )
    __fastfail(3u);
  v11[3] = Value;
  *v13 = v14;
  *Value = (KPushLockBase *)v13;
  v14[1].m_Lock.Value = (unsigned __int64)v13;
  KLockHolder::~KLockHolder(&v15);
  result = 0LL;
  *a3 = (struct KLOADER_MODULE_REFERENCE__ *)v11;
  return result;
}
