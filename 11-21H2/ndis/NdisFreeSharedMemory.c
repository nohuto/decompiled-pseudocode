/*
 * XREFs of NdisFreeSharedMemory @ 0x1C00C9480
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?Stop@NdisStatisticalStopwatch@@QEAA_KXZ @ 0x1C0058694 (-Stop@NdisStatisticalStopwatch@@QEAA_KXZ.c)
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x1C0058744 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 *     ??0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z @ 0x1C00CA9B0 (--0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CAC20 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 */

void __stdcall NdisFreeSharedMemory(NDIS_HANDLE NdisHandle, NDIS_HANDLE AllocationHandle)
{
  NDIS_HANDLE v2; // r14
  LARGE_INTEGER PerformanceCounter; // rbp
  char v6; // cl
  int v7; // ecx
  struct _NDIS_SG_DMA_BLOCK *v8; // rsi
  _DMA_ADAPTER *DmaAdapterObject; // rcx
  _QWORD *v10; // rcx
  NDIS_HANDLE *v11; // rax
  NDIS_HANDLE *v12; // rcx
  NDIS_HANDLE *v13; // rdx
  _QWORD *v14; // rcx
  NDIS_HANDLE *v15; // rdx
  KIRQL v16; // dl
  int v17; // [rsp+20h] [rbp-138h]
  KIRQL NewIrql[8]; // [rsp+30h] [rbp-128h] BYREF
  int v19; // [rsp+38h] [rbp-120h] BYREF
  LARGE_INTEGER v20; // [rsp+40h] [rbp-118h]
  _BYTE v21[208]; // [rsp+50h] [rbp-108h] BYREF

  v2 = 0LL;
  NewIrql[0] = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x42u,
      (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids,
      AllocationHandle);
  _InterlockedIncrement64(&qword_1C00EE848);
  v19 = 6;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v20 = PerformanceCounter;
  NdisFreeSharedMemoryTelemetry::NdisFreeSharedMemoryTelemetry(
    (NdisFreeSharedMemoryTelemetry *)v21,
    (const struct _NDIS_SHARED_MEMORY_BLOCK *)AllocationHandle);
  if ( NdisHandle )
  {
    v6 = *(_BYTE *)NdisHandle;
    if ( *(_BYTE *)NdisHandle == 18 )
    {
      v2 = NdisHandle;
      NdisHandle = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
    }
    else if ( v6 != 17 )
    {
      if ( v6 != 1 )
        goto LABEL_31;
      NdisHandle = 0LL;
    }
    if ( AllocationHandle && NdisHandle )
    {
      v7 = *((_DWORD *)AllocationHandle + 12);
      if ( (v7 & 0x3F) != 1 )
      {
        if ( (v7 & 0x3F) != 2 )
        {
          if ( (v7 & 4) != 0 )
          {
            if ( v2 )
              goto LABEL_22;
          }
          else if ( (v7 & 8) == 0 )
          {
            goto LABEL_31;
          }
          (*((void (__fastcall **)(_QWORD, _QWORD))AllocationHandle + 10))(
            *((_QWORD *)AllocationHandle + 11),
            *((_QWORD *)AllocationHandle + 12));
          goto LABEL_22;
        }
        MmFreeContiguousMemorySpecifyCache(
          *((PVOID *)AllocationHandle + 19),
          *((unsigned int *)AllocationHandle + 36),
          MmCached);
LABEL_22:
        _InterlockedExchangeAdd64(&qword_1C00EE858, *((unsigned int *)AllocationHandle + 36));
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)NdisHandle, NewIrql);
        v10 = *(_QWORD **)AllocationHandle;
        if ( *(NDIS_HANDLE *)(*(_QWORD *)AllocationHandle + 8LL) == AllocationHandle )
        {
          v11 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 1);
          if ( *v11 == AllocationHandle )
          {
            *v11 = v10;
            v10[1] = v11;
            if ( v2 )
            {
              v12 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 2);
              if ( v12[1] != (char *)AllocationHandle + 16 )
                goto LABEL_36;
              v13 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 3);
              if ( *v13 != (char *)AllocationHandle + 16 )
                goto LABEL_36;
              *v13 = v12;
              v12[1] = v13;
            }
            v14 = (_QWORD *)*((_QWORD *)AllocationHandle + 4);
            if ( (NDIS_HANDLE)v14[1] == (char *)AllocationHandle + 32 )
            {
              v15 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 5);
              if ( *v15 == (char *)AllocationHandle + 32 )
              {
                *v15 = v14;
                v14[1] = v15;
                v16 = NewIrql[0];
                *((_QWORD *)NdisHandle + 65) = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)NdisHandle + 12, v16);
                ExFreePoolWithTag(AllocationHandle, 0);
                PerformanceCounter = v20;
                goto LABEL_31;
              }
            }
          }
        }
LABEL_36:
        __fastfail(3u);
      }
      v8 = (struct _NDIS_SG_DMA_BLOCK *)*((_QWORD *)NdisHandle + 63);
      if ( v8 )
      {
        DmaAdapterObject = v8->DmaAdapterObject;
        if ( DmaAdapterObject )
        {
          LOBYTE(v17) = 1;
          ((void (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD, int))DmaAdapterObject->DmaOperations->FreeCommonBuffer)(
            DmaAdapterObject,
            *((unsigned int *)AllocationHandle + 36),
            *((_QWORD *)AllocationHandle + 13),
            *((_QWORD *)AllocationHandle + 19),
            v17);
          ndisDereferenceDmaAdapter(v8);
          goto LABEL_22;
        }
      }
    }
  }
LABEL_31:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0x43u,
      (struct _GUID *)&WPP_0ce672c581b5354e1037f225da7b2621_Traceguids);
  NdisFreeSharedMemoryTelemetry::~NdisFreeSharedMemoryTelemetry((NdisFreeSharedMemoryTelemetry *)v21);
  if ( PerformanceCounter.QuadPart )
    NdisStatisticalStopwatch::Stop((NdisStatisticalStopwatch *)&v19);
}
