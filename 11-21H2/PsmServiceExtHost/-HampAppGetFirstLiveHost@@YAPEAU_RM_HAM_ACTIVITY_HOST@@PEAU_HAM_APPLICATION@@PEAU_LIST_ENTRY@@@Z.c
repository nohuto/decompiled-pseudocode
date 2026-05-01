/*
 * XREFs of ?HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z @ 0x1800102C8
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011800 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB70 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppGetFirstLiveHost(struct _HAM_APPLICATION *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // r8
  __int64 v3; // rcx
  struct _LIST_ENTRY **v5; // rdx

  v2 = (struct _LIST_ENTRY *)((char *)a1 + 600);
  while ( a2 != v2 )
  {
    if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)&a2[-52].Blink) )
      return (struct _RM_HAM_ACTIVITY_HOST *)v3;
    a2 = *v5;
  }
  return 0LL;
}
