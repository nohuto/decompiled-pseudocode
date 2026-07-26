/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C010F22C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C002B200 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C010F138 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C010E6C8 (--$allocate@$$V@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C010E768 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C0110FF8 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x1C01217C8 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 */

_QWORD *__fastcall ndisBindGetFilterDriver(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rcx
  volatile signed __int32 *v12; // rbx
  struct NDIS_BIND_FILTER_DRIVER *v13; // rcx
  __int64 v14; // rsi
  PVOID v15; // rax
  PVOID v16; // rcx
  bool v17; // zf
  KLockHolder v18; // [rsp+20h] [rbp-20h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  v18.m_State = Unlocked;
  v18.m_Lock = (KPushLockBase *)qword_1C00EC730;
  v18.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v18);
  v6 = qword_1C00EC730;
  v7 = 0LL;
  v8 = *(unsigned int *)(qword_1C00EC730 + 28);
  while ( v7 != v8 )
  {
    if ( v7 >= *(unsigned int *)(v6 + 28) )
      __fastfail(5u);
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 64));
    v10 = *(_QWORD *)(v9 + 24) - *a2;
    if ( !v10 )
      v10 = *(_QWORD *)(v9 + 32) - a2[1];
    if ( !v10 )
    {
      if ( !a3 || ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)v9) )
      {
        *a1 = v9;
        goto LABEL_15;
      }
      *a1 = 0LL;
      if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 64), 0xFFFFFFFF) == 1 )
      {
        NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)v9);
        v16 = (PVOID)v9;
LABEL_30:
        ExFreePoolWithTag(v16, 0x446C4642u);
        goto LABEL_15;
      }
      goto LABEL_15;
    }
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 64), 0xFFFFFFFF) == 1 )
      {
        NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)v9);
        ExFreePoolWithTag((PVOID)v9, 0x446C4642u);
      }
    }
    ++v7;
  }
  P = 0LL;
  if ( KRef<NDIS_BIND_FILTER_DRIVER>::allocate<>((__int64 *)&P) )
  {
    v12 = (volatile signed __int32 *)P;
    v13 = (struct NDIS_BIND_FILTER_DRIVER *)P;
    *(_OWORD *)((char *)P + 24) = *(_OWORD *)a2;
    if ( ndisBindReadFilterDriverConfiguration(v13) )
    {
      v14 = qword_1C00EC730;
      if ( (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::grow(
                              qword_1C00EC730 + 24,
                              (unsigned int)(*(_DWORD *)(qword_1C00EC730 + 28) + 1)) )
      {
        *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * *(unsigned int *)(v14 + 28)) = v12;
        _InterlockedIncrement(v12 + 16);
        v15 = P;
        ++*(_DWORD *)(v14 + 28);
        *a1 = v15;
        goto LABEL_15;
      }
    }
    *a1 = 0LL;
    v17 = _InterlockedExchangeAdd(v12 + 16, 0xFFFFFFFF) == 1;
  }
  else
  {
    *a1 = 0LL;
    if ( !P )
      goto LABEL_15;
    v17 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1;
  }
  if ( v17 )
  {
    NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)P);
    v16 = P;
    goto LABEL_30;
  }
LABEL_15:
  KLockHolder::~KLockHolder(&v18);
  return a1;
}
