/*
 * XREFs of ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x1C0092F38
 * Callers:
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094BE0 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A1E8 (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 * Callees:
 *     memcmp @ 0x1C0038280 (memcmp.c)
 */

bool __fastcall ndisCompareWoLPatterns(struct _NDIS_PM_WOL_PATTERN *a1, struct _NDIS_PM_WOL_PATTERN *a2)
{
  _NDIS_PM_WOL_PACKET WoLPacketType; // r8d
  char v3; // bl
  __int32 v7; // r8d
  __int32 v8; // r8d
  __int32 v9; // r8d
  int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int MaskSize; // eax
  unsigned int PatternSize; // ebp

  WoLPacketType = a1->WoLPacketType;
  v3 = 0;
  if ( WoLPacketType != a2->WoLPacketType )
    return 0;
  v7 = WoLPacketType - 1;
  if ( !v7 )
  {
    MaskSize = a1->WoLPattern.WoLBitMapPattern.MaskSize;
    if ( MaskSize == a2->WoLPattern.WoLBitMapPattern.MaskSize )
    {
      PatternSize = a1->WoLPattern.WoLBitMapPattern.PatternSize;
      if ( PatternSize == a2->WoLPattern.WoLBitMapPattern.PatternSize
        && !memcmp(
              &a1->Header.Type + a1->WoLPattern.WoLBitMapPattern.MaskOffset,
              &a2->Header.Type + a2->WoLPattern.WoLBitMapPattern.MaskOffset,
              MaskSize) )
      {
        return memcmp(
                 &a1->Header.Type + a1->WoLPattern.WoLBitMapPattern.PatternOffset,
                 &a2->Header.Type + a2->WoLPattern.WoLBitMapPattern.PatternOffset,
                 PatternSize) == 0;
      }
    }
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
    return 1;
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v3;
      v11 = a1->WoLPattern.IPv4TcpSynParameters.Flags == a2->WoLPattern.IPv4TcpSynParameters.Flags;
    }
    else
    {
      v11 = memcmp(&a1->WoLPattern, &a2->WoLPattern, 0x28uLL) == 0;
    }
  }
  else
  {
    v12 = *(_QWORD *)&a1->WoLPattern.IPv4TcpSynParameters.Flags - *(_QWORD *)&a2->WoLPattern.IPv4TcpSynParameters.Flags;
    if ( !v12 )
      v12 = *(_QWORD *)&a1->WoLPattern.WoLBitMapPattern.MaskSize - *(_QWORD *)&a2->WoLPattern.WoLBitMapPattern.MaskSize;
    v11 = v12 == 0;
  }
  if ( v11 )
    return 1;
  return v3;
}
