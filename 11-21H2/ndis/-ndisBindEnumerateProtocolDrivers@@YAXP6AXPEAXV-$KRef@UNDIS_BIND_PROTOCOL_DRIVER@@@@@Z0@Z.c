/*
 * XREFs of ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C010B16C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C010B13C (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C0115B30 (-ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 *     ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C012D740 (-ndisVBusDetachComplete@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C010B2CC (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C0121C44 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

void __fastcall ndisBindEnumerateProtocolDrivers(void (__fastcall *a1)(__int64, __int64 *), __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // rdi
  __int64 v6; // rbx
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v7.m_State = Unlocked;
  v7.m_Lock = (KPushLockBase *)qword_1C00EC730;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v7);
  v4 = qword_1C00EC730;
  for ( i = 0LL; i < *(unsigned int *)(v4 + 44); ++i )
  {
    if ( i >= *(unsigned int *)(v4 + 44) )
LABEL_17:
      __fastfail(5u);
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8 * i);
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 48));
    ExReleasePushLockEx(v7.m_Lock, 0LL);
    KeLeaveCriticalRegion();
    v8 = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 48));
    a1(a2, &v8);
    KeEnterCriticalRegion();
    v7.m_Region.m_Entered = 1;
    ExAcquirePushLockSharedEx(v7.m_Lock, 0LL);
    v4 = qword_1C00EC730;
    v7.m_State = Shared;
    if ( *(unsigned int *)(qword_1C00EC730 + 44) < i )
      goto LABEL_16;
    if ( i >= *(unsigned int *)(qword_1C00EC730 + 44) )
      goto LABEL_17;
    if ( (*(_QWORD *)(*(_QWORD *)(qword_1C00EC730 + 48) + 8 * i) != 0LL) != (v6 != 0) )
LABEL_16:
      i = 0LL;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 48), 0xFFFFFFFF) == 1 )
      {
        NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER((NDIS_BIND_PROTOCOL_DRIVER *)v6);
        ExFreePoolWithTag((PVOID)v6, 0x44745042u);
      }
      v4 = qword_1C00EC730;
    }
  }
  KLockHolder::~KLockHolder(&v7);
}
