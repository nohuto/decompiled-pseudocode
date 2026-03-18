/*
 * XREFs of imp_WdfRequestCreate @ 0x1C00061C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00063C4 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        unsigned __int64 Target,
        WDFREQUEST__ **Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxIoTarget *v7; // r10
  __int64 v8; // rcx
  int result; // eax
  WDFREQUEST__ *v10; // rcx
  void *ParentObject; // rdx
  FxRequest *pRequest; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxIoTarget *pTarget; // [rsp+60h] [rbp+8h] BYREF
  void *PPObject; // [rsp+70h] [rbp+18h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pRequest = 0LL;
  pTarget = 0LL;
  v7 = 0LL;
  if ( Target )
  {
    LOWORD(v8) = 0;
    v7 = (FxIoTarget *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Target & 1) != 0 )
    {
      v8 = LOWORD(v7->__vftable);
      v7 = (FxIoTarget *)((char *)v7 - v8);
    }
    if ( v7->m_Type == 4608 )
    {
      pTarget = v7;
    }
    else
    {
      FxObjectHandleGetPtrQI(v7, (void **)&pTarget, (void *)Target, 0x1200u, v8);
      v7 = pTarget;
    }
    m_Globals = v7->m_Globals;
  }
  else if ( RequestAttributes )
  {
    ParentObject = RequestAttributes->ParentObject;
    if ( ParentObject )
    {
      PPObject = 0LL;
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)ParentObject, 0x1000u, &PPObject);
      v7 = pTarget;
      m_Globals = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
    }
  }
  if ( !Request )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Request = 0LL;
  result = FxRequest::_Create(
             m_Globals,
             RequestAttributes,
             0LL,
             v7,
             FxRequestOwnsIrp,
             FxRequestConstructorCallerIsDriver,
             &pRequest);
  if ( result >= 0 )
  {
    if ( pRequest->m_ObjectSize )
      v10 = (WDFREQUEST__ *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v10 = 0LL;
    *Request = v10;
  }
  return result;
}
