/*
 * XREFs of imp_WdfIoQueueFindRequest @ 0x1C0007300
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C00073C8 (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueFindRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *TagRequest,
        WDFFILEOBJECT__ *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        WDFREQUEST__ **OutRequest)
{
  unsigned __int64 ObjectHandleUnchecked; // rbx
  _FILE_OBJECT *m_FileObject; // r15
  WDFREQUEST__ **v10; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v12; // edx
  unsigned int _a1; // eax
  FxFileObject *pFO; // [rsp+40h] [rbp-20h] BYREF
  FxRequest *pTagRequest; // [rsp+48h] [rbp-18h] BYREF
  FxRequest *pOutputRequest; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  FxIoQueue *pQueue; // [rsp+90h] [rbp+30h] BYREF

  ObjectHandleUnchecked = 0LL;
  pQueue = 0LL;
  pTagRequest = 0LL;
  pOutputRequest = 0LL;
  pFO = 0LL;
  m_FileObject = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, (void **)&pQueue);
  v10 = OutRequest;
  m_Globals = pQueue->m_Globals;
  if ( !OutRequest )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( TagRequest )
    FxObjectHandleGetPtr(pQueue->m_Globals, (unsigned __int64)TagRequest, 0x1008u, (void **)&pTagRequest);
  if ( FileObject )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)FileObject, 0x1018u, (void **)&pFO);
    m_FileObject = pFO->m_FileObject.m_FileObject;
  }
  if ( Parameters && (_a1 = Parameters->Size, _a1 < 0x28) )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0xDu, 0x11u, WPP_FxIoQueueApi_cpp_Traceguids, _a1, -1073741582);
    return 3221225714LL;
  }
  else
  {
    v12 = FxIoQueue::PeekRequest(pQueue, pTagRequest, m_FileObject, Parameters, &pOutputRequest);
    if ( v12 >= 0 )
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(pOutputRequest);
    *v10 = (WDFREQUEST__ *)ObjectHandleUnchecked;
    return (unsigned int)v12;
  }
}
