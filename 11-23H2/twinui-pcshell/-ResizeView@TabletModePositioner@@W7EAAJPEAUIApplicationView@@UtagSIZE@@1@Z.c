/*
 * XREFs of ?ResizeView@TabletModePositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180293F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TabletModePositioner::ResizeView(
        __int64 a1,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  return FullScreenPositioner::ResizeView((FullScreenPositioner *)(a1 - 8), a2, a3, a4);
}
