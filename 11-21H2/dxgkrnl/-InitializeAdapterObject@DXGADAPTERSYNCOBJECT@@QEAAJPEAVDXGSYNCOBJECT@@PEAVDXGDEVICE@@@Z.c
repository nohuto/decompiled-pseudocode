/*
 * XREFs of ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@@Z @ 0x1C0198DE4
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C0198FA0 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FC10 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C004B9B0 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z @ 0x1C02C6B44 (-DdiCreateCpuEvent@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATECPUEVENT@@@Z.c)
 */

__int64 __fastcall DXGADAPTERSYNCOBJECT::InitializeAdapterObject(
        DXGADAPTERSYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct DXGDEVICE *a3)
{
  char *v3; // rbx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rbp
  char *v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // ebx
  int v15; // ebp
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 *v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v23; // rbx
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v24; // rax
  ADAPTER_RENDER *v25; // rcx
  int CpuEvent; // eax
  unsigned int v27; // ebp
  char *v28; // rsi
  char *v29; // rdi
  char **v30; // rax
  __int128 v31; // [rsp+50h] [rbp-38h] BYREF
  __int128 v32; // [rsp+60h] [rbp-28h]

  v3 = (char *)this + 32;
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 1783LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_pVidSchSyncObject", 1783LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)a2 + 71) & 2) != 0 )
    goto LABEL_10;
  v7 = *((_QWORD *)this + 2);
  v8 = *((_DWORD *)a2 + 50);
  v9 = *(_QWORD *)(v7 + 624);
  if ( (unsigned int)(v8 - 5) <= 1 )
  {
    if ( v8 != 5 && v8 != 6 )
    {
      WdLogSingleEntry1(1LL, 353LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetSyncObjectType() == D3DDDI_MONITORED_FENCE || GetSyncObjectType() == D3DDDI_PERIODIC_MONITORED_FENCE",
        353LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v7 = *((_QWORD *)this + 2);
    }
    v10 = (char *)a2 + 128;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0LL;
  if ( (*((_DWORD *)a2 + 51) & 4) != 0 )
    v11 = *((_QWORD *)a2 + 39);
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct DXGSYNCOBJECT *, char *, _QWORD, __int64, _QWORD, char *, char *))(*(_QWORD *)(v9 + 8) + 608LL))(
          *(_QWORD *)(v7 + 632),
          a2,
          (char *)a2 + 200,
          *((unsigned int *)a2 + 70),
          v11,
          0LL,
          v3,
          v10);
  v14 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, a2, v12);
    return v14;
  }
  v15 = *((_DWORD *)a2 + 51);
  if ( (v15 & 0x100) == 0 || !a3 )
  {
LABEL_10:
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
    v16 = *((_QWORD *)this + 2);
    v17 = v16 + 192;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v16 + 192));
    v18 = (__int64 *)(v16 + 240);
    v19 = *v18;
    if ( *(__int64 **)(*v18 + 8) == v18 )
    {
      *(_QWORD *)this = v19;
      *((_QWORD *)this + 1) = v18;
      *(_QWORD *)(v19 + 8) = this;
      *v18 = (__int64)this;
      if ( *(struct _KTHREAD **)(v17 + 24) != KeGetCurrentThread() )
        WdLogSingleEntry5(0LL, 275LL, 4LL, v17, 0LL, 0LL);
      v20 = *(_DWORD *)(v17 + 32);
      if ( v20 <= 0 )
      {
        WdLogSingleEntry1(1LL, 516LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
        v20 = *(_DWORD *)(v17 + 32);
      }
      v21 = v20 - 1;
      *(_DWORD *)(v17 + 32) = v21;
      if ( !v21 )
      {
        *(_QWORD *)(v17 + 24) = 0LL;
        ExReleasePushLockExclusiveEx(v17 + 8, 0LL);
      }
      KeLeaveCriticalRegion();
      *((_BYTE *)this + 24) = 1;
      *((_BYTE *)this + 26) = (*((_DWORD *)a2 + 51) & 4) != 0;
      if ( (*((_DWORD *)a2 + 51) & 4) == 0 )
        return 0LL;
      v28 = (char *)a2 + 296;
      v29 = (char *)this + 48;
      v30 = (char **)*((_QWORD *)v28 + 1);
      if ( *v30 == v28 )
      {
        *(_QWORD *)v29 = v28;
        *((_QWORD *)v29 + 1) = v30;
        *v30 = v29;
        *((_QWORD *)v28 + 1) = v29;
        return 0LL;
      }
    }
    __fastfail(3u);
  }
  v23 = *((_QWORD *)a3 + 5);
  if ( (*(_DWORD *)(v23 + 424) & 0x100) != 0 )
  {
    v24 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)*((_QWORD *)a2 + 26);
    *((_QWORD *)this + 5) = v24;
  }
  else
  {
    v24 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)operator new[](0x28uLL, 0x4B677844u, 64LL, v13);
    *((_QWORD *)this + 5) = v24;
    if ( !v24 )
    {
      WdLogSingleEntry1(6LL, 1822LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for m_pKmdSignalCpuEvent",
        1822LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(v24);
  v31 = 0LL;
  v32 = 0LL;
  if ( (v15 & 0x10) != 0
    || (v25 = (ADAPTER_RENDER *)*((_QWORD *)this + 2),
        *((_QWORD *)&v31 + 1) = *((_QWORD *)this + 5),
        *(_QWORD *)&v31 = *((_QWORD *)a3 + 73),
        CpuEvent = ADAPTER_RENDER::DdiCreateCpuEvent(v25, (struct _DXGKARG_CREATECPUEVENT *)&v31),
        v27 = CpuEvent,
        CpuEvent >= 0) )
  {
    if ( (*(_DWORD *)(v23 + 424) & 0x100) != 0 )
    {
      **((_QWORD **)this + 5) = *(_QWORD *)(*(_QWORD *)(v23 + 608) + 608LL) + 160LL;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) = *((_QWORD *)a2 + 11);
      **((_QWORD **)this + 5) = 0LL;
    }
    *(_QWORD *)(*((_QWORD *)this + 5) + 32LL) = *((_QWORD *)&v32 + 1);
    *(_QWORD *)(*((_QWORD *)this + 5) + 24LL) = a2;
    goto LABEL_10;
  }
  WdLogSingleEntry2(3LL, a2, CpuEvent);
  return v27;
}
