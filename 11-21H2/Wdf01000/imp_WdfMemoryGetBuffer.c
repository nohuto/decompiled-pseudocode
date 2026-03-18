/*
 * XREFs of imp_WdfMemoryGetBuffer @ 0x1C0012420
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_WdfMemoryGetBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *Memory,
        unsigned __int64 *BufferSize)
{
  IFxMemory *pMemory; // [rsp+30h] [rbp+8h] BYREF

  pMemory = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Memory, 0x100Au, (void **)&pMemory);
  if ( BufferSize )
    *BufferSize = pMemory->GetBufferSize(pMemory);
  return pMemory->GetBuffer(pMemory);
}
