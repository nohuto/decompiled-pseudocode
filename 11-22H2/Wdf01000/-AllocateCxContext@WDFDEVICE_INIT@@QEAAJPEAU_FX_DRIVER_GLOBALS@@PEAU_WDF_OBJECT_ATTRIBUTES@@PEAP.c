/*
 * XREFs of ?AllocateCxContext@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C003BBCC
 * Callers:
 *     imp_WdfCxDeviceInitAllocateContext @ 0x1C00361F0 (imp_WdfCxDeviceInitAllocateContext.c)
 * Callees:
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0043354 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C00483AC (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 */

int __fastcall WDFDEVICE_INIT::AllocateCxContext(
        WDFDEVICE_INIT *this,
        _FX_DRIVER_GLOBALS *CxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  FxObject **p_CxContextObject; // rbx
  int result; // eax

  p_CxContextObject = &this->CxContextObject;
  if ( this->CxContextObject )
    return FxObjectAllocateContext(*p_CxContextObject, ContextAttributes, 0, Context);
  result = FxUserObject::_Create(CxDriverGlobals, 0LL, &this->CxContextObject);
  if ( result >= 0 )
    return FxObjectAllocateContext(*p_CxContextObject, ContextAttributes, 0, Context);
  return result;
}
