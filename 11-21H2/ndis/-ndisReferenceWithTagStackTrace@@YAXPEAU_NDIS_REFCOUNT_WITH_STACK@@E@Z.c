/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00
 * Callers:
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0001CD0 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0006E00 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C00091D0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C00097C0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009FB0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B3C0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000CA50 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1C000D510 (NdisDereferenceWithTag.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000DB60 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000DD50 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000DF90 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E330 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000F1D0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00108B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0011D50 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C0026CB0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00C0064 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00C0364 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(struct _NDIS_REFCOUNT_WITH_STACK *a1, char a2)
{
  int v2; // r8d
  unsigned int *v3; // rdi
  int v6; // r8d
  unsigned int v7; // ecx
  unsigned int v8; // esi
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // r10
  unsigned __int64 v10; // r8
  char *v11; // r11
  __int64 v12; // rdx
  int *v13; // r14
  int v14; // ecx
  int v15; // r9d
  _NDIS_REFCOUNT_STACK_BLOCK *Pool2; // rcx

  v2 = *((_DWORD *)a1 + 14);
  v3 = 0LL;
  if ( a2 )
  {
    if ( (v2 & 0xFFFE) == 0x7FFE )
    {
      v6 = v2 | 1;
LABEL_4:
      *((_DWORD *)a1 + 14) = v6;
      return;
    }
    v7 = v2 ^ (v2 ^ (v2 + 2)) & 0xFFFE;
  }
  else
  {
    if ( (v2 & 0xFFFE0000) == 0x7FFE0000 )
    {
      v6 = v2 | 0x10000;
      goto LABEL_4;
    }
    v7 = v2 + 0x20000;
  }
  *((_DWORD *)a1 + 14) = v7;
  v8 = ndisCaptureStackTrace(v7);
  Next = a1;
  if ( a1 )
  {
    v10 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32;
    while ( 2 )
    {
      v11 = (char *)Next + v10;
      v12 = 0LL;
      v13 = (int *)((char *)Next + v10);
      do
      {
        v14 = *v13;
        v15 = *v13 & 0x3FFFFFF;
        if ( v15 == v8 && (v14 & 0xFC000000) < 0xFC000000 )
        {
          *(_DWORD *)&v11[4 * v12] = v15 | (v14 + 0x4000000) & 0xFC000000;
          goto LABEL_23;
        }
        if ( !v3 && !v15 )
          v3 = (unsigned int *)&v11[4 * v12];
        v12 = (unsigned int)(v12 + 1);
        ++v13;
      }
      while ( (unsigned int)v12 < 6 );
      Next = (struct _NDIS_REFCOUNT_WITH_STACK *)Next->Block.Next;
      if ( Next )
        continue;
      break;
    }
    if ( v3 )
      goto LABEL_25;
  }
  Pool2 = (_NDIS_REFCOUNT_STACK_BLOCK *)ExAllocatePool2(64LL, 56LL, 2020754510);
  if ( Pool2 )
  {
    Pool2->Next = a1->Block.Next;
    a1->Block.Next = Pool2;
    v3 = (unsigned int *)((char *)Pool2->Dereferences + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL));
LABEL_25:
    *v3 = v8 & 0x3FFFFFF | 0x4000000;
    return;
  }
  *((_DWORD *)a1 + 14) |= a2 != 0 ? 1 : 0x10000;
LABEL_23:
  ndisReleaseStackTrace(v8);
}
