/*
 * XREFs of ?ADAPTER_RENDER_DdiCreateContext@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C002B150
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C016BC84 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiCreateContext(
        struct ADAPTER_RENDER *a1,
        void *a2,
        struct _DXGKARG_CREATECONTEXT *a3)
{
  return ADAPTER_RENDER::DdiCreateContext(a1, a2, a3);
}
