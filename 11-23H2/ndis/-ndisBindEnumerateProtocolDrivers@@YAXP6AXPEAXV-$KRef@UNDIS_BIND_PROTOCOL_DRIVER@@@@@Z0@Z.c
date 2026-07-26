/*
 * XREFs of ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C01121A8
 * Callers:
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C011200C (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0114308 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C01212D0 (-ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 *     ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C0139540 (-ndisVBusDetachComplete@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C011203C (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ??1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ @ 0x1C012D6C4 (--1NDIS_BIND_PROTOCOL_DRIVER@@QEAA@XZ.c)
 */

void __fastcall ndisBindEnumerateProtocolDrivers(
        void (__fastcall *a1)(__int64, NDIS_BIND_PROTOCOL_DRIVER **),
        __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // rdi
  NDIS_BIND_PROTOCOL_DRIVER *v6; // rbx
  volatile signed __int32 *p_DriverReady; // rsi
  KLockHolder v8; // [rsp+20h] [rbp-38h] BYREF
  NDIS_BIND_PROTOCOL_DRIVER *v9; // [rsp+70h] [rbp+18h] BYREF

  v8.m_State = Unlocked;
  v8.m_Lock = (KPushLockBase *)qword_1C00F5728;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v8);
  v4 = qword_1C00F5728;
  for ( i = 0LL; i < *(unsigned int *)(v4 + 44); ++i )
  {
    if ( i >= *(unsigned int *)(v4 + 44) )
LABEL_17:
      __fastfail(5u);
    v6 = *(NDIS_BIND_PROTOCOL_DRIVER **)(*(_QWORD *)(v4 + 48) + 8 * i);
    p_DriverReady = (volatile signed __int32 *)&v6[1].DriverReady;
    if ( v6 )
      _InterlockedIncrement(p_DriverReady);
    ExReleasePushLockEx(v8.m_Lock, 0LL);
    KeLeaveCriticalRegion();
    v9 = v6;
    if ( v6 )
      _InterlockedIncrement(p_DriverReady);
    a1(a2, &v9);
    KeEnterCriticalRegion();
    v8.m_Region.m_Entered = 1;
    ExAcquirePushLockSharedEx(v8.m_Lock, 0LL);
    v4 = qword_1C00F5728;
    v8.m_State = Shared;
    if ( *(unsigned int *)(qword_1C00F5728 + 44) < i )
      goto LABEL_16;
    if ( i >= *(unsigned int *)(qword_1C00F5728 + 44) )
      goto LABEL_17;
    if ( (*(_QWORD *)(*(_QWORD *)(qword_1C00F5728 + 48) + 8 * i) != 0LL) != (v6 != 0LL) )
LABEL_16:
      i = 0LL;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(p_DriverReady, 0xFFFFFFFF) == 1 )
      {
        NDIS_BIND_PROTOCOL_DRIVER::~NDIS_BIND_PROTOCOL_DRIVER(v6);
        ExFreePoolWithTag(v6, 0x44745042u);
      }
      v4 = qword_1C00F5728;
    }
  }
  KLockHolder::~KLockHolder(&v8);
}
