/*
 * XREFs of ?StartManualDrag@ManualDragAreaClientProxy@@MEAAJI@Z @ 0x180139F50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x180141AC8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 */

__int64 __fastcall ManualDragAreaClientProxy::StartManualDrag(ManualDragAreaClientProxy *this, unsigned int a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v6; // rax

  if ( *((_BYTE *)this + 72) )
    return 2276591628LL;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 72LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
  *((_BYTE *)this + 72) = 1;
  DragNDropProcessor::StartManualDrag(*(DragNDropProcessor **)(v6 + 56), a2, this);
  return 0LL;
}
