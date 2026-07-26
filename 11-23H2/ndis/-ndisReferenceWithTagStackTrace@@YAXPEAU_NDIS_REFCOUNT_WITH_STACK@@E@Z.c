/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49FC
 * Callers:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0004DE0 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C0007FF0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000A830 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000ABC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C3D0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 *     NdisDereferenceWithTag @ 0x1C000CEA0 (NdisDereferenceWithTag.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000D6F0 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D8D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000DB10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000EA30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FE40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00112C0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C0025CE0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C0026170 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C00273F4 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00290D4 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0029760 (-ndisMTimerDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00C4C54 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00C4F70 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(struct _NDIS_REFCOUNT_WITH_STACK *a1, char a2)
{
  int v2; // r8d
  unsigned int *v3; // rdi
  struct _NDIS_REFCOUNT_WITH_STACK *v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // r9
  unsigned __int64 v9; // r8
  char *v10; // r11
  __int64 v11; // rdx
  int *v12; // r14
  int v13; // ecx
  int v14; // r10d
  _NDIS_REFCOUNT_STACK_BLOCK *Pool2; // rcx

  v2 = *((_DWORD *)a1 + 14);
  v3 = 0LL;
  v5 = a1;
  if ( a2 )
  {
    LODWORD(a1) = 65534;
    if ( (v2 & 0xFFFE) == 0x7FFE )
    {
      *((_DWORD *)v5 + 14) = v2 | 1;
      return;
    }
    v6 = v2 ^ (v2 ^ (v2 + 2)) & 0xFFFE;
  }
  else
  {
    if ( (v2 & 0xFFFE0000) == 0x7FFE0000 )
    {
      *((_DWORD *)a1 + 14) = v2 | 0x10000;
      return;
    }
    v6 = v2 + 0x20000;
  }
  *((_DWORD *)v5 + 14) = v6;
  v7 = ndisCaptureStackTrace((unsigned int)a1);
  Next = v5;
  if ( v5 )
  {
    v9 = (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL) + 32;
    while ( 2 )
    {
      v10 = (char *)Next + v9;
      v11 = 0LL;
      v12 = (int *)((char *)Next + v9);
      do
      {
        v13 = *v12;
        v14 = *v12 & 0x3FFFFFF;
        if ( v14 == v7 && (v13 & 0xFC000000) < 0xFC000000 )
        {
          *(_DWORD *)&v10[4 * v11] = v14 | (v13 + 0x4000000) & 0xFC000000;
          goto LABEL_22;
        }
        if ( !v3 && !v14 )
          v3 = (unsigned int *)&v10[4 * v11];
        v11 = (unsigned int)(v11 + 1);
        ++v12;
      }
      while ( (unsigned int)v11 < 6 );
      Next = (struct _NDIS_REFCOUNT_WITH_STACK *)Next->Block.Next;
      if ( Next )
        continue;
      break;
    }
    if ( v3 )
      goto LABEL_24;
  }
  Pool2 = (_NDIS_REFCOUNT_STACK_BLOCK *)ExAllocatePool2(64LL, 56LL, 2020754510);
  if ( Pool2 )
  {
    Pool2->Next = v5->Block.Next;
    v5->Block.Next = Pool2;
    v3 = (unsigned int *)((char *)Pool2->Dereferences + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE8uLL));
LABEL_24:
    *v3 = v7 & 0x3FFFFFF | 0x4000000;
    return;
  }
  *((_DWORD *)v5 + 14) |= a2 != 0 ? 1 : 0x10000;
LABEL_22:
  ndisReleaseStackTrace(v7);
}
