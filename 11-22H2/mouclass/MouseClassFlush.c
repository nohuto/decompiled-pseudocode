/*
 * XREFs of MouseClassFlush @ 0x1C0004AB0
 * Callers:
 *     <none>
 * Callees:
 *     MouInitializeDataQueue @ 0x1C00022F0 (MouInitializeDataQueue.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005CCC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall MouseClassFlush(__int64 a1, IRP *a2)
{
  IRP *v2; // rdi
  unsigned int v3; // ebx
  _QWORD *v5; // rdx
  __int64 v6; // rdx

  v2 = a2;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v5 = *(_QWORD **)(a1 + 64);
  if ( *v5 == v5[1] )
  {
    if ( DriverEntry == v2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext2 )
      MouInitializeDataQueue(*(_QWORD *)(a1 + 64), (__int64)v5);
    else
      v3 = -1073741727;
  }
  else
  {
    v3 = -1073741637;
  }
  v2->IoStatus.Status = v3;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 3LL);
  }
  return v3;
}
