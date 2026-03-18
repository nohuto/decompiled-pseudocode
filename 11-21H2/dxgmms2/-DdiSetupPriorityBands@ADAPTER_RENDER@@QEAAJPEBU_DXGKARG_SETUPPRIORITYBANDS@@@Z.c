/*
 * XREFs of ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C002CBD4
 * Callers:
 *     VidSchiInitializeNode @ 0x1C00AF36C (VidSchiInitializeNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSetupPriorityBands(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SETUPPRIORITYBANDS *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_SETUPPRIORITYBANDS *))DxgCoreInterface[22])(
           this,
           a2);
}
