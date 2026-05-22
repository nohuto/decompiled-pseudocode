/*
 * XREFs of ?StartDrag@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@I_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18013AF30
 * Callers:
 *     <none>
 * Callees:
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180141668 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall DragManagerHost::StartDrag(
        DragNDropProcessor **this,
        struct BamoDragProcessorManagerStub *a2,
        unsigned int a3,
        unsigned __int64 a4,
        struct BamoDragManagerClientProxy *a5)
{
  DragNDropProcessor::StartDrag(this[7], a3, a4, a5);
  return 0LL;
}
