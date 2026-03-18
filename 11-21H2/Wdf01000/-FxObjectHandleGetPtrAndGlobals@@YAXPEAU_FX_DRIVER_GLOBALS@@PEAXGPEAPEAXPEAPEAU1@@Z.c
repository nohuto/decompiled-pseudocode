/*
 * XREFs of ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x1C0052DC4
 * Callers:
 *     imp_WdfCxVerifierKeBugCheck @ 0x1C0063ED0 (imp_WdfCxVerifierKeBugCheck.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void __fastcall FxObjectHandleGetPtrAndGlobals(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        unsigned __int64 Handle,
        unsigned __int16 Type,
        void **PPObject,
        _FX_DRIVER_GLOBALS **ObjectGlobals)
{
  FxObjectHandleGetPtr(CallersGlobals, Handle, Type, PPObject);
  *ObjectGlobals = (_FX_DRIVER_GLOBALS *)*((_QWORD *)*PPObject + 2);
}
