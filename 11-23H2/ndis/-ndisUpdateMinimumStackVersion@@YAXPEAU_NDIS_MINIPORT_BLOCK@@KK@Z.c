/*
 * XREFs of ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C011602C
 * Callers:
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116004 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0137AE8 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A9834 (-ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisEnableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A99AC (-ndisEnableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0116088 (-ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

void __fastcall ndisUpdateMinimumStackVersion(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 MinimumNdisMajorVersion; // di
  unsigned __int8 MinimumNdisMinorVersion; // si
  unsigned __int8 v6; // al
  unsigned int v7; // ecx

  MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
  MinimumNdisMinorVersion = a1->MinimumNdisMinorVersion;
  ndisFindMinimumVersionDrivers(a1, a2, a3);
  v6 = a1->MinimumNdisMajorVersion;
  if ( __PAIR16__(MinimumNdisMinorVersion, MinimumNdisMajorVersion) == *(_WORD *)&a1->MinimumNdisMajorVersion )
    return;
  if ( MinimumNdisMajorVersion <= 6u && (MinimumNdisMajorVersion != 6 || MinimumNdisMinorVersion < 0x1Eu) )
  {
    v7 = a1->MinimumNdisMajorVersion;
LABEL_12:
    if ( (MinimumNdisMajorVersion != 6 || MinimumNdisMinorVersion < 0x1Eu)
      && (v7 > 6 || v7 == 6 && a1->MinimumNdisMinorVersion >= 0x1Eu) )
    {
      ndisEnableRsc(a1);
    }
    return;
  }
  v7 = a1->MinimumNdisMajorVersion;
  if ( v6 <= 6u && (v6 != 6 || a1->MinimumNdisMinorVersion < 0x1Eu) )
  {
    ndisDisableRsc(a1);
    return;
  }
  if ( MinimumNdisMajorVersion <= 6u )
    goto LABEL_12;
}
