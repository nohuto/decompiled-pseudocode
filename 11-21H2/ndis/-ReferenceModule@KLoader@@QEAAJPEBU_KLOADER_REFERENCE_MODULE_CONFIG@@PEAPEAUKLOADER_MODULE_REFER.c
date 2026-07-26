/*
 * XREFs of ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C0135C24
 * Callers:
 *     KLoaderReferenceModule @ 0x1C00CB240 (KLoaderReferenceModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1C013545C (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x1C0135AB4 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 *     ?Dereference@DriverService@@QEAAXXZ @ 0x1C0135F84 (-Dereference@DriverService@@QEAAXXZ.c)
 *     ?Reference@DriverService@@QEAAJXZ @ 0x1C0136168 (-Reference@DriverService@@QEAAJXZ.c)
 */

__int64 __fastcall KLoader::ReferenceModule(
        KLoader *this,
        const struct _KLOADER_REFERENCE_MODULE_CONFIG *a2,
        struct KLOADER_MODULE_REFERENCE__ **a3)
{
  __int128 v3; // xmm0
  KPushLockBase *v4; // rbp
  __int64 result; // rax
  KPushLockBase *v8; // rdi
  unsigned int v9; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  KPushLockBase **Value; // rcx
  KPushLockBase **v13; // rax
  KPushLockBase *v14; // rdi
  KLockHolder v15; // [rsp+30h] [rbp-38h] BYREF
  struct KModule *v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = this;
  v3 = *(_OWORD *)((char *)a2 + 8);
  v4 = (KPushLockBase *)qword_1C00EC1F0;
  v16 = 0LL;
  *(_OWORD *)&v15.m_State = v3;
  result = KLoader::ReferenceKModule((KPushLockBase *)qword_1C00EC1F0, (struct _GUID *)&v15, &v16);
  if ( !(_DWORD)result )
  {
    v8 = (KPushLockBase *)v16;
    v9 = DriverService::Reference((struct KModule *)((char *)v16 + 40));
    if ( !v9 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x62694C4Eu);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
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
        *a3 = (struct KLOADER_MODULE_REFERENCE__ *)v11;
        return 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x1Cu,
          (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids);
      v9 = -1073741670;
      DriverService::Dereference((DriverService *)&v8[5]);
    }
    KLoader::DereferenceKModule(v4, (struct KModule *)v8);
    return v9;
  }
  return result;
}
