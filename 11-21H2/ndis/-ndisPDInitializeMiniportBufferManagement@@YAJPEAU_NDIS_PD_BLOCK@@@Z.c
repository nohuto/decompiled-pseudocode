/*
 * XREFs of ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0128A80
 * Callers:
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0127D40 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001E034 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010BF6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C0124AA0 (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ?ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z @ 0x1C0128A4C (-ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z.c)
 *     ?ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z @ 0x1C0129230 (-ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z.c)
 */

__int64 __fastcall ndisPDInitializeMiniportBufferManagement(struct _NDIS_PD_BLOCK *a1)
{
  __int64 v2; // rax
  struct NDIS_PD_BM_DOMAIN *v3; // rax
  struct NDIS_PD_BM_DOMAIN *v4; // rbx
  char *PoolWithTag; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 (__fastcall *v8)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **); // r8
  void (*v9)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *); // rax
  int v10; // edi
  int v11; // ecx
  struct NDIS_PD_BM_DOMAIN *v12; // rdi
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 **v15; // rdx
  int v16; // ecx
  struct NDIS_PD_BM_DOMAIN **v17; // rdx
  struct NDIS_PD_BM_DOMAIN *v18; // rax
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  KLockHolder v21; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+A0h] [rbp+20h] BYREF
  int v23; // [rsp+A4h] [rbp+24h]

  *(_QWORD *)((char *)&v20 + 1) = 0LL;
  *(_DWORD *)((char *)&v20 + 9) = 0;
  *(_WORD *)((char *)&v20 + 13) = 0;
  HIBYTE(v20) = 0;
  v2 = *(_QWORD *)a1;
  LODWORD(v20) = 1048960;
  if ( *((_BYTE *)a1 + 13) )
    v2 = *(_QWORD *)(v2 + 24);
  *((_QWORD *)&v20 + 1) = v2;
  if ( !*((_DWORD *)a1 + 4) )
    goto LABEL_7;
  v21.m_Lock = (KPushLockBase *)qword_1C00EC710;
  v21.m_State = Unlocked;
  v21.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v21);
  v3 = ndisPDFindAndReferenceBMDomainUnderLock(*((_DWORD *)a1 + 4));
  v4 = v3;
  if ( v3 && !ndisPdAreBMsCompatible(a1, v3) )
    goto LABEL_19;
  KLockHolder::~KLockHolder(&v21);
  if ( !v4 )
  {
LABEL_7:
    v23 = 0;
    v22 = 524672;
    if ( !*((_DWORD *)a1 + 4) )
      v23 |= 1u;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x6D41444Eu);
    v4 = (struct NDIS_PD_BM_DOMAIN *)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *(_DWORD *)PoolWithTag = 1;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 7) = 0LL;
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_QWORD *)PoolWithTag + 9) = 0LL;
    *((_QWORD *)PoolWithTag + 10) = 0LL;
    *((_QWORD *)PoolWithTag + 11) = 0LL;
    *((_QWORD *)PoolWithTag + 12) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    v6 = PoolWithTag + 40;
    v6[1] = v6;
    *v6 = v6;
    if ( *((_BYTE *)a1 + 13) )
    {
      v7 = *(_QWORD **)(*(_QWORD *)a1 + 3760LL);
      v8 = (__int64 (__fastcall *)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **))v7[142];
      *((_QWORD *)v4 + 7) = v8;
      *((_QWORD *)v4 + 8) = v7[143];
      *((_QWORD *)v4 + 9) = v7[144];
      *((_QWORD *)v4 + 10) = v7[145];
      *((_QWORD *)v4 + 11) = v7[146];
      v9 = (void (*)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *))v7[147];
    }
    else
    {
      *((_QWORD *)v4 + 8) = NdisPDBMAddMemberToDomain;
      v8 = NdisPDBMCreateDomain;
      *((_QWORD *)v4 + 7) = NdisPDBMCreateDomain;
      *((_QWORD *)v4 + 9) = NdisPDBMRemoveMemberFromDomain;
      *((_QWORD *)v4 + 10) = NdisPDBMDeleteDomain;
      *((_QWORD *)v4 + 11) = NdisPDBMAllocateCommonBuffer;
      v9 = NdisPDBMFreeCommonBuffer;
    }
    *((_QWORD *)v4 + 12) = v9;
    v10 = v8((const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *)&v22, (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v4 + 4);
    if ( v10 < 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x1Du,
          0xDu,
          (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
          *(_QWORD *)a1,
          v10);
      goto LABEL_34;
    }
    v21.m_Lock = (KPushLockBase *)qword_1C00EC710;
    v21.m_State = Unlocked;
    v21.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v21);
    v11 = *((_DWORD *)a1 + 4);
    if ( v11 )
    {
      v12 = ndisPDFindAndReferenceBMDomainUnderLock(v11);
      if ( v12 )
      {
        KLockHolder::ReleaseExclusive(&v21);
        NDIS_PD_BM_DOMAIN::Deref(v4);
        v4 = v12;
        if ( !ndisPdAreBMsCompatible(a1, v12) )
        {
LABEL_19:
          v10 = -1073740007;
          KLockHolder::~KLockHolder(&v21);
LABEL_34:
          NDIS_PD_BM_DOMAIN::Deref(v4);
          return (unsigned int)v10;
        }
LABEL_23:
        KLockHolder::~KLockHolder(&v21);
        goto LABEL_24;
      }
      *((_DWORD *)v4 + 6) = *((_DWORD *)a1 + 4);
    }
    v13 = (__int64 *)((char *)v4 + 8);
    v14 = qword_1C00EC710 + 8240;
    v15 = *(__int64 ***)(qword_1C00EC710 + 8248);
    if ( *v15 != (__int64 *)(qword_1C00EC710 + 8240) )
      goto LABEL_35;
    *v13 = v14;
    *((_QWORD *)v4 + 2) = v15;
    *v15 = v13;
    *(_QWORD *)(v14 + 8) = v13;
    goto LABEL_23;
  }
LABEL_24:
  v16 = (*((__int64 (__fastcall **)(_QWORD, __int128 *, char *))v4 + 8))(*((_QWORD *)v4 + 4), &v20, (char *)a1 + 80);
  if ( v16 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqLd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Du,
        0xEu,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        *(_QWORD *)a1,
        (char)v4,
        *((_DWORD *)v4 + 6),
        v16);
    v10 = -1073740007;
    goto LABEL_32;
  }
  v21.m_Lock = (KPushLockBase *)qword_1C00EC710;
  v21.m_State = Unlocked;
  v21.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v21);
  *((_QWORD *)a1 + 9) = v4;
  v17 = (struct NDIS_PD_BM_DOMAIN **)*((_QWORD *)v4 + 6);
  v18 = (struct _NDIS_PD_BLOCK *)((char *)a1 + 56);
  if ( *v17 != (struct NDIS_PD_BM_DOMAIN *)((char *)v4 + 40) )
LABEL_35:
    __fastfail(3u);
  *(_QWORD *)v18 = (char *)v4 + 40;
  *((_QWORD *)a1 + 8) = v17;
  *v17 = v18;
  *((_QWORD *)v4 + 6) = v18;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0xFu,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      *(_QWORD *)a1,
      (char)v4,
      *((_DWORD *)v4 + 6));
  KLockHolder::~KLockHolder(&v21);
  v10 = 0;
LABEL_32:
  if ( v4 && v10 < 0 )
    goto LABEL_34;
  return (unsigned int)v10;
}
