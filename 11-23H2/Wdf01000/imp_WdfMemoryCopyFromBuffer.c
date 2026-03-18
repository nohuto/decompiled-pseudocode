/*
 * XREFs of imp_WdfMemoryCopyFromBuffer @ 0x1C000CFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C000DCA4 (-CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfMemoryCopyFromBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *DestinationMemory,
        unsigned __int64 DestinationOffset,
        void *Buffer,
        unsigned __int64 NumBytesToCopyFrom)
{
  _FX_DRIVER_GLOBALS *v7; // rax
  _WDFMEMORY_OFFSET srcOffsets; // [rsp+30h] [rbp-28h] BYREF
  _WDFMEMORY_OFFSET dstOffsets; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  IFxMemory *pDest; // [rsp+60h] [rbp+8h] BYREF

  pDest = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DestinationMemory,
    0x100Au,
    (void **)&pDest);
  v7 = pDest->GetDriverGlobals(pDest);
  if ( !Buffer )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( NumBytesToCopyFrom )
  {
    srcOffsets.BufferOffset = 0LL;
    srcOffsets.BufferLength = NumBytesToCopyFrom;
    dstOffsets.BufferLength = NumBytesToCopyFrom;
    dstOffsets.BufferOffset = DestinationOffset;
    return IFxMemory::CopyFromPtr(pDest, &dstOffsets, Buffer, NumBytesToCopyFrom, &srcOffsets);
  }
  else
  {
    WPP_IFR_SF_D(v7, 2u, 0x12u, 0xCu, WPP_FxMemoryBufferApi_cpp_Traceguids, 0xC000000D);
    return -1073741811;
  }
}
