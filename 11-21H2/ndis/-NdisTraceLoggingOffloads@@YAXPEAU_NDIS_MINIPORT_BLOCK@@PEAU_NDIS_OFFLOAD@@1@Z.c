/*
 * XREFs of ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C008660C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0018820 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ?NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00852DC (-NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingChecksumHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0085508 (-NdisTraceLoggingChecksumHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingGreTaskHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0085B6C (-NdisTraceLoggingGreTaskHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingGreTaskeConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0085C3C (-NdisTraceLoggingGreTaskeConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingLsoV2ConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0085D0C (-NdisTraceLoggingLsoV2ConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingLsoV2HardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0085E04 (-NdisTraceLoggingLsoV2HardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0086C08 (-NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0086C90 (-NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingVxLanConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0087014 (-NdisTraceLoggingVxLanConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingVxLanHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0087114 (-NdisTraceLoggingVxLanHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 */

void __fastcall NdisTraceLoggingOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        struct _NDIS_OFFLOAD *a3)
{
  UCHAR Revision; // al

  NdisTraceLoggingChecksumHardwareOffloads(a1, a2);
  NdisTraceLoggingChecksumConfigOffloads(a1, a3);
  NdisTraceLoggingLsoV2HardwareOffloads(a1, a2);
  NdisTraceLoggingLsoV2ConfigOffloads(a1, a3);
  Revision = a2->Header.Revision;
  if ( Revision >= 3u )
  {
    NdisTraceLoggingRscHardwareOffloads(a1, a2);
    NdisTraceLoggingRscConfigOffloads(a1, a3);
    NdisTraceLoggingGreTaskHardwareOffloads(a1, a2);
    NdisTraceLoggingGreTaskeConfigOffloads(a1, a3);
    Revision = a2->Header.Revision;
  }
  if ( Revision >= 4u )
  {
    NdisTraceLoggingVxLanHardwareOffloads(a1, a2);
    NdisTraceLoggingVxLanConfigOffloads(a1, a3);
  }
}
