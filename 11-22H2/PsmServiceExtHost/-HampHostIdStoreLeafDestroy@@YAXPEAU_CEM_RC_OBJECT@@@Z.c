/*
 * XREFs of ?HampHostIdStoreLeafDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800802F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamRcLeafCleanup@@YAXPEAU_HAM_RC_TREE_LEAF@@@Z @ 0x18007FC84 (-HamRcLeafCleanup@@YAXPEAU_HAM_RC_TREE_LEAF@@@Z.c)
 */

void __fastcall HampHostIdStoreLeafDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 77);
  if ( v2 )
  {
    TpWaitForTimer(v2, 1LL);
    TpReleaseTimer(*((_QWORD *)a1 + 77));
  }
  HamRcLeafCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
