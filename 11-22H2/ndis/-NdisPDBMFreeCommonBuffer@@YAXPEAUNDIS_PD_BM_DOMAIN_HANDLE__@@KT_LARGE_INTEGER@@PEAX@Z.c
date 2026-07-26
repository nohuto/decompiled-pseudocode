/*
 * XREFs of ?NdisPDBMFreeCommonBuffer@@YAXPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KT_LARGE_INTEGER@@PEAX@Z @ 0x1C01358F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NdisPDBMFreeCommonBuffer(KPushLockBase *a1, unsigned int a2, union _LARGE_INTEGER a3, void *a4)
{
  char v8; // [rsp+20h] [rbp-38h]
  KLockHolder v9; // [rsp+30h] [rbp-28h] BYREF

  v9.m_State = Unlocked;
  v9.m_Lock = a1;
  v9.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v9);
  if ( *((_BYTE *)&a1[3].m_Lock.0 + 1) )
  {
    MmFreeContiguousMemory(a4);
  }
  else
  {
    v8 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, union _LARGE_INTEGER, void *, char))(*(_QWORD *)(*(_QWORD *)(a1[1].m_Lock.Value + 24)
                                                                                           + 8LL)
                                                                               + 24LL))(
      *(_QWORD *)(a1[1].m_Lock.Value + 24),
      a2,
      a3,
      a4,
      v8);
  }
  --HIDWORD(a1[3].m_Lock.Ptr);
  KLockHolder::~KLockHolder(&v9);
}
