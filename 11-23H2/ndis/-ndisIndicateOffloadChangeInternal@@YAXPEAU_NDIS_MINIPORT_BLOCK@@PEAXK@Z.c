/*
 * XREFs of ?ndisIndicateOffloadChangeInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXK@Z @ 0x1C00916F8
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001FAB8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0091F90 (-ndisMergeOffloadCapsAndRegistry@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 */

void __fastcall ndisIndicateOffloadChangeInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        unsigned int a3)
{
  size_t Size; // rdi

  if ( a3 >= 0x70 && a2->Header.Type == 0xA7 && a2->Header.Size >= 0x70u && a2->Header.Revision )
  {
    a1->Offload->SupportsTopOffload = 1;
    ndisMergeOffloadCapsAndRegistry(a1, a2);
    Size = 216LL;
    memset(&a1->Offload->TopCapabilities, 0, sizeof(a1->Offload->TopCapabilities));
    if ( a2->Header.Size < 0xD8u )
      Size = a2->Header.Size;
    memmove(&a1->Offload->TopCapabilities, a2, Size);
  }
}
