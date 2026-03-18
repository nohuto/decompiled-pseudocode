/*
 * XREFs of imp_WdfObjectQuery @ 0x1C00431A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfObjectQuery(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        const _GUID *Guid,
        unsigned int QueryBufferLength)
{
  FxObject *p; // [rsp+30h] [rbp+8h] BYREF

  p = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Object, 0x1000u, (void **)&p);
  return 3221226021LL;
}
