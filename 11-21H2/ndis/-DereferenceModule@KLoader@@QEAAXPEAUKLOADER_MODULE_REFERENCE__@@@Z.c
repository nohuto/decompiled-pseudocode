/*
 * XREFs of ?DereferenceModule@KLoader@@QEAAXPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1C013556C
 * Callers:
 *     KLoaderDereferenceModule @ 0x1C00CB0D0 (KLoaderDereferenceModule.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1C013545C (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     ?Dereference@DriverService@@QEAAXXZ @ 0x1C0135F84 (-Dereference@DriverService@@QEAAXXZ.c)
 */

void __fastcall KLoader::DereferenceModule(KLoader *this, struct KLOADER_MODULE_REFERENCE__ *a2)
{
  KPushLockBase *v2; // rdi
  KPushLockBase *v4; // rsi
  __int64 v5; // rdx
  struct KLOADER_MODULE_REFERENCE__ **v6; // r8
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(KPushLockBase **)a2;
  v7.m_State = Unlocked;
  v4 = (KPushLockBase *)qword_1C00EC1F0;
  v7.m_Lock = v2 + 12;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v7);
  v5 = *((_QWORD *)a2 + 2);
  if ( *(struct KLOADER_MODULE_REFERENCE__ **)(v5 + 8) != (struct KLOADER_MODULE_REFERENCE__ *)((char *)a2 + 16)
    || (v6 = (struct KLOADER_MODULE_REFERENCE__ **)*((_QWORD *)a2 + 3),
        *v6 != (struct KLOADER_MODULE_REFERENCE__ *)((char *)a2 + 16)) )
  {
    __fastfail(3u);
  }
  *v6 = (struct KLOADER_MODULE_REFERENCE__ *)v5;
  *(_QWORD *)(v5 + 8) = v6;
  KLockHolder::~KLockHolder(&v7);
  ExFreePoolWithTag(a2, 0);
  DriverService::Dereference((DriverService *)&v2[5]);
  KLoader::DereferenceKModule(v4, (struct KModule *)v2);
}
