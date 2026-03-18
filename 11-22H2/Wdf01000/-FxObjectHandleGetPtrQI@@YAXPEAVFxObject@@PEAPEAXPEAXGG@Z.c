/*
 * XREFs of ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0006288
 * Callers:
 *     imp_WdfSpinLockAcquire @ 0x1C0001010 (imp_WdfSpinLockAcquire.c)
 *     imp_WdfSpinLockRelease @ 0x1C00010D0 (imp_WdfSpinLockRelease.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0003630 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C00039B0 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0003FF0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0008280 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfIoQueueGetState @ 0x1C00086E0 (imp_WdfIoQueueGetState.c)
 *     imp_WdfWorkItemFlush @ 0x1C0008790 (imp_WdfWorkItemFlush.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0043688 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxObjectHandleGetPtrQI(
        FxObject *Object,
        void **PPObject,
        void *Handle,
        unsigned __int16 Type,
        unsigned __int16 Offset)
{
  unsigned __int64 level; // rdi
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxQueryInterfaceParams params; // [rsp+50h] [rbp-18h] BYREF

  params.Object = PPObject;
  level = Type;
  params.Type = Type;
  params.Offset = Offset;
  *PPObject = 0LL;
  *(_DWORD *)(&params.Offset + 1) = 0;
  if ( Object->QueryInterface(Object, &params) < 0 )
  {
    WPP_IFR_SF_qDqD(Object->m_Globals, v8, v9, v10, v11, Handle, level, Object, Object->m_Type);
    FxVerifierBugCheckWorker(Object->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)Handle, level);
  }
}
