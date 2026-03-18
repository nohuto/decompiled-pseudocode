/*
 * XREFs of imp_WdfIoQueueRetrieveNextRequest @ 0x1C0003630
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C00036D0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0006288 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        WDFREQUEST__ **OutRequest)
{
  WDFREQUEST__ *v3; // rbx
  __int64 Offset; // r8
  FxIoQueue *v6; // rcx
  int result; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pOutputRequest; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  pQueue = 0LL;
  pOutputRequest = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(Offset) = 0;
  v6 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v6->FxNonPagedObject::FxObject::__vftable);
    v6 = (FxIoQueue *)((char *)v6 - Offset);
  }
  if ( v6->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v6 = pQueue;
  }
  if ( !OutRequest )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  result = FxIoQueue::GetRequest(v6, 0LL, 0LL, &pOutputRequest);
  if ( result >= 0 && pOutputRequest->m_ObjectSize )
    v3 = (WDFREQUEST__ *)((unsigned __int64)pOutputRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  *OutRequest = v3;
  return result;
}
