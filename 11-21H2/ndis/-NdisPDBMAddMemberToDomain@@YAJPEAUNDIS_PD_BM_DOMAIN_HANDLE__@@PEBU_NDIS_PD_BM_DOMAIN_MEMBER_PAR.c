/*
 * XREFs of ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C0129630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall NdisPDBMAddMemberToDomain(
        KPushLockBase *a1,
        const struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS *a2,
        struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **a3)
{
  void *MiniportAdapterContext; // r13
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v5; // r15
  __int64 v7; // rdi
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **PoolWithTag; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **v9; // rbx
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v10; // rsi
  char v11; // al
  int v12; // eax
  _DEVICE_OBJECT *v13; // rcx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v15; // r15
  int v16; // edi
  _DMA_OPERATIONS *DmaOperations; // r12
  unsigned __int16 v18; // r9
  __int64 v19; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **Value; // rax
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-59h] BYREF
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v23; // [rsp+48h] [rbp-51h]
  KLockHolder v24; // [rsp+50h] [rbp-49h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+70h] [rbp-29h] BYREF

  MiniportAdapterContext = a2->MiniportAdapterContext;
  v24.m_Lock = a1;
  *a3 = 0LL;
  v24.m_State = Unlocked;
  v5 = a3;
  v24.m_Region.m_Entered = 0;
  v23 = a3;
  KLockHolder::AcquireExclusive(&v24);
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size < 0x10u || a2->Flags )
  {
    v16 = -1073741811;
    goto LABEL_37;
  }
  v7 = *((_QWORD *)MiniportAdapterContext + 685);
  PoolWithTag = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6D41444Eu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v16 = -1073741670;
    goto LABEL_37;
  }
  v10 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1];
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[1] = 0LL;
  *PoolWithTag = 0LL;
  if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v10 != v10 )
  {
    if ( a1[3].m_Lock.0 )
    {
      v16 = -1073741808;
    }
    else
    {
      v11 = *((_BYTE *)&a1[3].m_Lock.0 + 1);
      if ( v11 == *(_BYTE *)(v7 + 14) )
        goto LABEL_8;
      v16 = -1073740007;
    }
LABEL_30:
    ExFreePoolWithTag(v9, 0x6D41444Eu);
    goto LABEL_37;
  }
  v11 = *(_BYTE *)(v7 + 14);
  *((_BYTE *)&a1[3].m_Lock.0 + 1) = v11;
LABEL_8:
  if ( v11 )
  {
LABEL_32:
    Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)a1[2].m_Lock.Value;
    if ( *Value != v10 )
      __fastfail(3u);
    *v9 = v10;
    v16 = 0;
    v9[1] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)Value;
    *Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v9;
    a1[2].m_Lock.Value = (unsigned __int64)v9;
    v9[2] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1;
    *v5 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *)v9;
    goto LABEL_37;
  }
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  v12 = *(_DWORD *)(v7 + 20);
  v13 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterContext + 479);
  *(_DWORD *)&DeviceDescription[20] = -1;
  *(_DWORD *)&DeviceDescription[40] = v12;
  NumberOfMapRegisters = 0;
  *(_DWORD *)DeviceDescription = 3;
  *(_WORD *)&DeviceDescription[4] = 257;
  *(_DWORD *)&DeviceDescription[32] = 0x20000;
  DmaAdapter = IoGetDmaAdapter(v13, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
  v15 = DmaAdapter;
  if ( !DmaAdapter )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Du,
        0xAu,
        (struct _GUID *)&WPP_078299f750f03c42c1abf7e109e37087_Traceguids,
        MiniportAdapterContext);
    v16 = -1073741823;
    goto LABEL_30;
  }
  if ( a1[3].m_Lock.0 )
    goto LABEL_31;
  DmaOperations = DmaAdapter->DmaOperations;
  v16 = DmaOperations->LeaveDmaDomain(DmaAdapter);
  if ( v16 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v18 = 11;
    goto LABEL_28;
  }
  if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v10 == v10 )
  {
    v16 = DmaOperations->JoinDmaDomain(v15, (void *)-1LL);
    if ( v16 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_29;
      v18 = 12;
      goto LABEL_28;
    }
    goto LABEL_31;
  }
  v19 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 24LL) + 8LL) + 264LL))();
  v16 = DmaOperations->JoinDmaDomain(v15, (void *)v19);
  if ( v16 >= 0 )
  {
LABEL_31:
    v9[3] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v15;
    v5 = v23;
    goto LABEL_32;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_29;
  v18 = 13;
LABEL_28:
  WPP_RECORDER_SF_qD(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    0x1Du,
    v18,
    (struct _GUID *)&WPP_078299f750f03c42c1abf7e109e37087_Traceguids,
    (char)MiniportAdapterContext,
    v16);
LABEL_29:
  v15->DmaOperations->PutDmaAdapter(v15);
  if ( v9 )
    goto LABEL_30;
LABEL_37:
  KLockHolder::~KLockHolder(&v24);
  return (unsigned int)v16;
}
