/*
 * XREFs of ?DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C001C53E
 * Callers:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001D7D0 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0042014 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkrnlContextHandleCompareFunction(struct _RTL_BALANCED_NODE *a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( a1 == a2[-3].Children[1] )
    return 0LL;
  else
    return a1 < a2[-3].Children[1] ? -1 : 1;
}
