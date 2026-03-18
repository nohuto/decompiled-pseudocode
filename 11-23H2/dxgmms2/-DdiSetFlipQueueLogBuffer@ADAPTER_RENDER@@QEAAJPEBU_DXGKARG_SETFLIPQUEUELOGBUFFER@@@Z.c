/*
 * XREFs of ?DdiSetFlipQueueLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETFLIPQUEUELOGBUFFER@@@Z @ 0x1C002C854
 * Callers:
 *     VidSchiEnsureHwFlipQueueLog @ 0x1C010933C (VidSchiEnsureHwFlipQueueLog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[21](this, a2);
}
