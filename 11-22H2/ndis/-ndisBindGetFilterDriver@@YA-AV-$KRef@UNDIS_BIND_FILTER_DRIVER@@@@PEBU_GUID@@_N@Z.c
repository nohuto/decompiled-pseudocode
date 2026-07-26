/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C011E9A4
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C0030530 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C011CC18 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C011C8C8 (--$allocate@$$V@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C011F148 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C011F184 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C012D280 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 */

_QWORD *__fastcall ndisBindGetFilterDriver(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  PVOID v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rcx
  volatile signed __int32 *v13; // rbx
  struct NDIS_BIND_FILTER_DRIVER *v14; // rcx
  __int64 v15; // rsi
  PVOID v16; // rax
  PVOID v17; // rcx
  volatile signed __int32 *v18; // rax
  bool v19; // zf
  KLockHolder v20; // [rsp+20h] [rbp-20h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  v20.m_State = Unlocked;
  v20.m_Lock = (KPushLockBase *)qword_1C00F5728;
  v20.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v20);
  v6 = qword_1C00F5728;
  v7 = 0LL;
  v8 = (PVOID)*(unsigned int *)(qword_1C00F5728 + 28);
  P = v8;
  while ( (PVOID)v7 != v8 )
  {
    if ( v7 >= *(unsigned int *)(v6 + 28) )
      __fastfail(5u);
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
    v10 = (volatile signed __int32 *)(v9 + 64);
    if ( v9 )
      _InterlockedIncrement(v10);
    v11 = *(_QWORD *)(v9 + 24) - *a2;
    if ( !v11 )
      v11 = *(_QWORD *)(v9 + 32) - a2[1];
    if ( !v11 )
    {
      if ( !a3 || ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)v9) )
      {
        *a1 = v9;
        goto LABEL_15;
      }
      *a1 = 0LL;
      if ( v9 && _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      {
        NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)v9);
        v17 = (PVOID)v9;
LABEL_32:
        ExFreePoolWithTag(v17, 0x446C4642u);
        goto LABEL_15;
      }
      goto LABEL_15;
    }
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      {
        NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)v9);
        ExFreePoolWithTag((PVOID)v9, 0x446C4642u);
      }
    }
    v8 = P;
    ++v7;
  }
  P = 0LL;
  if ( KRef<NDIS_BIND_FILTER_DRIVER>::allocate<>((__int64 *)&P) )
  {
    v13 = (volatile signed __int32 *)P;
    v14 = (struct NDIS_BIND_FILTER_DRIVER *)P;
    *(_OWORD *)((char *)P + 24) = *(_OWORD *)a2;
    if ( ndisBindReadFilterDriverConfiguration(v14) )
    {
      v15 = qword_1C00F5728;
      if ( (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::grow(
                              qword_1C00F5728 + 24,
                              (unsigned int)(*(_DWORD *)(qword_1C00F5728 + 28) + 1)) )
      {
        *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8LL * *(unsigned int *)(v15 + 28)) = v13;
        _InterlockedIncrement(v13 + 16);
        v16 = P;
        ++*(_DWORD *)(v15 + 28);
        *a1 = v16;
        goto LABEL_15;
      }
      *a1 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v19 = _InterlockedExchangeAdd(v13 + 16, 0xFFFFFFFF) == 1;
  }
  else
  {
    v18 = (volatile signed __int32 *)P;
    *a1 = 0LL;
    if ( !v18 )
      goto LABEL_15;
    v19 = _InterlockedExchangeAdd(v18 + 16, 0xFFFFFFFF) == 1;
  }
  if ( v19 )
  {
    NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)P);
    v17 = P;
    goto LABEL_32;
  }
LABEL_15:
  KLockHolder::~KLockHolder(&v20);
  return a1;
}
