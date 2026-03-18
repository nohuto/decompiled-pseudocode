/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C02D60D4
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1C02D8080 (DxgkGetAllocationPriority.c)
 *     ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036DA50 (-VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B890 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x1C0377970 (-VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_GETALLOCATIONPRIORITY *a2, char a3)
{
  D3DKMT_HANDLE hResource; // r8d
  UINT v8; // r14d
  ULONG_PTR j; // rsi
  __int64 v10; // rdx
  _DWORD *pPriorities; // rdx
  UINT i; // esi
  __int64 v13; // r14
  unsigned int *v14; // rdx
  unsigned int v15; // r15d
  _QWORD *v16; // r8
  UINT *v17; // rdx
  struct _EX_RUNDOWN_REF *v18; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-40h] BYREF
  UINT v20; // [rsp+B8h] [rbp+20h] BYREF

  v20 = 0;
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4344LL),
             *((struct DXGPROCESS **)this + 5),
             this,
             a2);
  hResource = a2->hResource;
  if ( !hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= a2->AllocationCount )
          return 0LL;
        if ( a3 )
        {
          v13 = i;
          v14 = (unsigned int *)&a2->phAllocationList[v13];
          if ( (unsigned __int64)v14 >= MmUserProbeAddress )
            v14 = (unsigned int *)MmUserProbeAddress;
          v15 = *v14;
        }
        else
        {
          v13 = i;
          v15 = a2->phAllocationList[v13];
        }
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v18, v15);
        if ( !v18 )
          break;
        v16 = (_QWORD *)*((_QWORD *)this + 2);
        if ( *(_QWORD *)(*(_QWORD *)(v18[1].Count + 16) + 16LL) != v16[2] )
        {
          WdLogSingleEntry3(2LL, this, v18, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)this,
            (__int64)v18,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_36;
        }
        if ( !v18[3].Count )
        {
          WdLogSingleEntry1(2LL, v18);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Allocation 0x%p does not have a VidMm handle",
            (__int64)v18,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_36;
        }
        (*(void (__fastcall **)(_QWORD, ULONG_PTR, UINT *))(*(_QWORD *)(v16[81] + 8LL) + 1160LL))(
          v16[82],
          v18[3].Count,
          &v20);
        if ( a3 )
        {
          v17 = &a2->pPriorities[v13];
          if ( (unsigned __int64)v17 >= MmUserProbeAddress )
            v17 = (UINT *)MmUserProbeAddress;
          *v17 = v20;
        }
        else
        {
          a2->pPriorities[v13] = v20;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v18);
      }
      WdLogSingleEntry3(3LL, this, v15, -1073741811LL);
LABEL_36:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v18);
      return 3221225485LL;
    }
    return 0LL;
  }
  if ( a2->AllocationCount || a2->phAllocationList )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v18, hResource);
  if ( !v18 || *(_DWORD *)(v18[1].Count + 436) != a2->hDevice )
  {
    WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
LABEL_25:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v18);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)&v18[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v8 = 0;
  for ( j = v18[3].Count; j; j = *(_QWORD *)(j + 64) )
  {
    v10 = *(_QWORD *)(j + 24);
    if ( !v10 )
    {
      WdLogSingleEntry1(2LL, j);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Allocation 0x%p does not have a VidMm handle",
        j,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
      goto LABEL_25;
    }
    (*(void (__fastcall **)(_QWORD, __int64, UINT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                    + 1160LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
      v10,
      &v20);
    if ( v8 <= v20 )
      v8 = v20;
  }
  if ( a3 )
  {
    pPriorities = a2->pPriorities;
    if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
      pPriorities = (_DWORD *)MmUserProbeAddress;
    *pPriorities = v8;
  }
  else
  {
    *a2->pPriorities = v8;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v18);
  return 0LL;
}
