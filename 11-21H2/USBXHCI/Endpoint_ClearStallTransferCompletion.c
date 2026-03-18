/*
 * XREFs of Endpoint_ClearStallTransferCompletion @ 0x1C0037EB0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddqd @ 0x1C003BB20 (WPP_RECORDER_SF_ddqd.c)
 */

__int64 __fastcall Endpoint_ClearStallTransferCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqd(Context[10], 4, (_DWORD)Context, 66);
  ESM_AddEvent(Context + 36, 16);
  return 3221225494LL;
}
