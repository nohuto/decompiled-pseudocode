/*
 * XREFs of ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CEAC
 * Callers:
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000FA00 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180031230 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampHostIsCached(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 83);
  return (v1 & 0x2000000000000LL) != 0
      && (v1 & 0x1000000000000LL) == 0
      && *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 76) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608);
}
