/*
 * XREFs of ?QueryInterface@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FD800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetProxy::QueryInterface(
        DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *this,
        struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = 0LL;
  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_710231e8_03ea_4665_bb2c_be96879da98a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_710231e8_03ea_4665_bb2c_be96879da98a.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_710231e8_03ea_4665_bb2c_be96879da98a.Data4;
  if ( v5 )
    return DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionVirtualMonitorCaptureRenderTargetInternal>::InternalQueryInterface(
             (__int64)this,
             a2,
             a3);
  *a3 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
