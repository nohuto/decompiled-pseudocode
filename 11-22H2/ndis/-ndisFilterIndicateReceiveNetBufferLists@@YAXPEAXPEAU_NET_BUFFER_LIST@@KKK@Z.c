/*
 * XREFs of ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0065730
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00130F4 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ??$ndisIterativeDPAddNblsToTracker@$01@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0036BD4 (--$ndisIterativeDPAddNblsToTracker@$01@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0036F70 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        void *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rax
  __int64 v10; // r15

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v10 = *((_QWORD *)a1 + 53) + 96 * v5;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)a1 + 81),
      *((_QWORD *)a1 + 64),
      (unsigned int)((a5 & 2) != 0) + 130,
      a5 & 1);
  if ( (a5 & 2) == 0 && ((a5 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v10 + 64) )
  {
    ndisIterativeDPAddNblsToTracker<2>((_QWORD *)(v10 + 48), (__int64 *)a2, a5 | 1, a3, a4);
  }
  else
  {
    ndisInvokeNextReceiveHandler(
      a2,
      a3,
      a4,
      a5,
      *((struct _NDIS_FILTER_BLOCK **)a1 + 65),
      *((void **)a1 + 63),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))a1 + 62));
    if ( (a5 & 2) != 0 )
    {
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          a2,
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)a1 + 64),
          *((_QWORD *)a1 + 81),
          140LL,
          a5 & 1);
    }
  }
}
