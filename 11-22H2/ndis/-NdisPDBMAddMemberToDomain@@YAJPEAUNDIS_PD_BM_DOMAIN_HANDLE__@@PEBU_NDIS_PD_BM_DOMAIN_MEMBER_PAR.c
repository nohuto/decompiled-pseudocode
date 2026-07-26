/*
 * XREFs of ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C01352D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00200C4 (WPP_RECORDER_SF_qd_ea_1C00200C4.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall NdisPDBMAddMemberToDomain(
        KPushLockBase *a1,
        const struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS *a2,
        struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **a3)
{
  void *MiniportAdapterContext; // r13
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v5; // r15
  __int64 v7; // rdi
  _QWORD *PoolWithTag; // rax
  void *v9; // rbx
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v10; // rsi
  char v11; // al
  unsigned int v12; // eax
  _DEVICE_OBJECT *v13; // rcx
  struct _DMA_ADAPTER *DmaAdapter; // r15
  int v15; // edi
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **v16; // rax
  _DMA_OPERATIONS *DmaOperations; // r12
  unsigned __int16 v18; // r9
  __int64 v19; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **Value; // rdx
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-59h] BYREF
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v23; // [rsp+48h] [rbp-51h]
  KLockHolder v24; // [rsp+50h] [rbp-49h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+70h] [rbp-29h] BYREF

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
    v15 = -1073741811;
    goto LABEL_39;
  }
  v7 = *((_QWORD *)MiniportAdapterContext + 685);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6D41444Eu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_39;
  }
  v10 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1];
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[1] = 0LL;
  *PoolWithTag = 0LL;
  if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v10 == v10 )
  {
    v11 = *(_BYTE *)(v7 + 14);
    *((_BYTE *)&a1[3].m_Lock.0 + 1) = v11;
    goto LABEL_8;
  }
  if ( a1[3].m_Lock.0 )
  {
    v15 = -1073741808;
LABEL_32:
    ExFreePoolWithTag(v9, 0x6D41444Eu);
    goto LABEL_39;
  }
  v11 = *((_BYTE *)&a1[3].m_Lock.0 + 1);
  if ( v11 != *(_BYTE *)(v7 + 14) )
  {
    v15 = -1073740007;
    goto LABEL_32;
  }
LABEL_8:
  if ( v11 )
  {
    v16 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
  }
  else
  {
    memset(&DeviceDescription, 0, sizeof(DeviceDescription));
    v12 = *(_DWORD *)(v7 + 20);
    v13 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterContext + 479);
    DeviceDescription.InterfaceType = InterfaceTypeUndefined;
    DeviceDescription.DmaAddressWidth = v12;
    NumberOfMapRegisters = 0;
    DeviceDescription.Version = 3;
    *(_WORD *)&DeviceDescription.Master = 257;
    DeviceDescription.MaximumLength = 0x20000;
    DmaAdapter = IoGetDmaAdapter(v13, &DeviceDescription, &NumberOfMapRegisters);
    if ( !DmaAdapter )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x1Du,
          0xAu,
          (struct _GUID *)&WPP_08e23d885e9f3e5b5dc6dc71f31f970b_Traceguids,
          MiniportAdapterContext);
      v15 = -1073741823;
      goto LABEL_32;
    }
    v16 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
    if ( !*(_BYTE *)&a1[3].m_Lock.0 )
    {
      DmaOperations = DmaAdapter->DmaOperations;
      v15 = DmaOperations->LeaveDmaDomain(DmaAdapter);
      if ( v15 < 0 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v18 = 11;
LABEL_30:
          WPP_RECORDER_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x1Du,
            v18,
            (struct _GUID *)&WPP_08e23d885e9f3e5b5dc6dc71f31f970b_Traceguids,
            (char)MiniportAdapterContext,
            v15);
          goto LABEL_31;
        }
        goto LABEL_31;
      }
      if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v10 == v10 )
      {
        v15 = DmaOperations->JoinDmaDomain(DmaAdapter, (void *)-1LL);
        if ( v15 < 0 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v18 = 12;
            goto LABEL_30;
          }
LABEL_31:
          DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
          goto LABEL_32;
        }
        v16 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
      }
      else
      {
        v19 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 24LL) + 8LL) + 264LL))();
        v15 = DmaOperations->JoinDmaDomain(DmaAdapter, (void *)v19);
        v16 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
        if ( v15 < 0 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v18 = 13;
            goto LABEL_30;
          }
          goto LABEL_31;
        }
      }
    }
    v16[3] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)DmaAdapter;
    v5 = v23;
  }
  Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)a1[2].m_Lock.Value;
  v15 = 0;
  if ( *Value != v10 )
    __fastfail(3u);
  *v16 = v10;
  v16[1] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)Value;
  *Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v16;
  a1[2].m_Lock.Value = (unsigned __int64)v16;
  v16[2] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1;
  *v5 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *)v16;
LABEL_39:
  KLockHolder::~KLockHolder(&v24);
  return (unsigned int)v15;
}
