/*
 * XREFs of ?ProcessResult@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x18013AA60
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180140E44 (-ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAV.c)
 */

__int64 __fastcall DragManagerHost::ProcessResult(
        DragNDropProcessor **this,
        struct BamoDragProcessorManagerStub *a2,
        unsigned int a3,
        const struct Windows::UI::Internal::Input::DragOperationResult *a4)
{
  DragNDropProcessor::ProcessResult(this[7], a3, a4, a4);
  return 0LL;
}
