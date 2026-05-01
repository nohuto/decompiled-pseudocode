/*
 * XREFs of ?HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18004DE10
 * Callers:
 *     <none>
 * Callees:
 *     ?HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180011CC0 (-HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180015EEC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

void __fastcall HampClientDestroy(struct _CEM_RC_OBJECT *a1)
{
  HampClientRundownObjects(a1);
  HampClientCleanup(a1);
  HampFreeHeap(a1);
}
