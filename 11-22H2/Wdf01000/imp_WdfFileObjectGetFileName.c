/*
 * XREFs of imp_WdfFileObjectGetFileName @ 0x1C00013E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

_UNICODE_STRING *__fastcall imp_WdfFileObjectGetFileName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  _FILE_OBJECT *m_FileObject; // rax
  FxFileObject *pFO; // [rsp+30h] [rbp+8h] BYREF

  pFO = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], FileObject, 0x1018u, (void **)&pFO);
  if ( FxVerifierCheckIrqlLevel(pFO->m_Globals, 0) >= 0 && (m_FileObject = pFO->m_FileObject.m_FileObject) != 0LL )
    return &m_FileObject->FileName;
  else
    return 0LL;
}
