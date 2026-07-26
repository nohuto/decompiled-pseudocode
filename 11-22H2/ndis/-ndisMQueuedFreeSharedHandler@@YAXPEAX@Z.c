/*
 * XREFs of ?ndisMQueuedFreeSharedHandler@@YAXPEAX@Z @ 0x1C005DE30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ndisFreeSharedMemoryInternal @ 0x1C005DAD8 (ndisFreeSharedMemoryInternal.c)
 */

void __fastcall ndisMQueuedFreeSharedHandler(void *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx

  v1 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 4);
  ndisFreeSharedMemoryInternal(
    (ULONG_PTR)v1,
    *((_DWORD *)a1 + 10),
    *((_BYTE *)a1 + 44),
    *((_QWORD *)a1 + 6),
    *((_QWORD *)a1 + 8));
  ndisDereferenceMiniport(v1, 0x42u);
}
