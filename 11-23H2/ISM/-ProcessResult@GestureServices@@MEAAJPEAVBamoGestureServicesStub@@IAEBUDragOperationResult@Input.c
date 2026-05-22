/*
 * XREFs of ?ProcessResult@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180153630
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x18015FD48 (-ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAV.c)
 */

__int64 __fastcall GestureServices::ProcessResult(
        DragNDropProcessor **this,
        struct BamoGestureServicesStub *a2,
        unsigned int a3,
        const struct Windows::UI::Internal::Input::DragOperationResult *a4)
{
  DragNDropProcessor::ProcessResult(this[8], a3, a4, a4);
  return 0LL;
}
