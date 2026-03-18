/*
 * XREFs of imp_WdfMemoryCopyToBuffer @ 0x1C0033B50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?CopyToPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C003F2C0 (-CopyToPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfMemoryCopyToBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *SourceMemory,
        unsigned __int64 SourceOffset,
        void *Buffer,
        unsigned __int64 NumBytesToCopyTo)
{
  _FX_DRIVER_GLOBALS *v7; // rax
  _WDFMEMORY_OFFSET dstOffsets; // [rsp+30h] [rbp-28h] BYREF
  _WDFMEMORY_OFFSET srcOffsets; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  IFxMemory *pSource; // [rsp+60h] [rbp+8h] BYREF

  pSource = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)SourceMemory,
    0x100Au,
    (void **)&pSource);
  v7 = pSource->GetDriverGlobals(pSource);
  if ( !Buffer )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( NumBytesToCopyTo )
  {
    dstOffsets.BufferOffset = 0LL;
    srcOffsets.BufferLength = NumBytesToCopyTo;
    srcOffsets.BufferOffset = SourceOffset;
    dstOffsets.BufferLength = NumBytesToCopyTo;
    return IFxMemory::CopyToPtr(pSource, &srcOffsets, Buffer, NumBytesToCopyTo, &dstOffsets);
  }
  else
  {
    WPP_IFR_SF_D(v7, 2u, 0x12u, 0xBu, WPP_FxMemoryBufferApi_cpp_Traceguids, 0xC000000D);
    return -1073741811;
  }
}
