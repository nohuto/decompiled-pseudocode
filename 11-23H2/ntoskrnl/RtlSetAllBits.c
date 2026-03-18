/*
 * XREFs of RtlSetAllBits @ 0x1402E1AE0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402DFD70 (MiBuildMdlForMappedFileFault.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140343FBC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405C1264 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiExtendPagingFileMaximum @ 0x140638FD4 (MiExtendPagingFileMaximum.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     MiCaptureImageExceptionValues @ 0x140705164 (MiCaptureImageExceptionValues.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     MiCreatePagefile @ 0x140833A94 (MiCreatePagefile.c)
 *     CmpMountPreloadedHives @ 0x1408630AC (CmpMountPreloadedHives.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140933F50 (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x140966BD0 (PnprMmAddRange.c)
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 *     SmcStoreResize @ 0x1409DB774 (SmcStoreResize.c)
 *     MiPrepareToHotPatchImage @ 0x140A3A908 (MiPrepareToHotPatchImage.c)
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 *     MiCreateBootSlabEntries @ 0x140B46868 (MiCreateBootSlabEntries.c)
 *     VfInitBootDriversLoaded @ 0x140B577A4 (VfInitBootDriversLoaded.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B6072C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitDiscard @ 0x140B61E20 (HalpPowerInitDiscard.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r8
  unsigned __int64 v2; // rdx

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
