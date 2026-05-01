/*
 * XREFs of ?HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z @ 0x18003762C
 * Callers:
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E1C0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800375DC (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **__fastcall HampAppGetFirstLiveHost(struct _HAM_APPLICATION *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // r9
  struct _LIST_ENTRY **p_Blink; // r8
  __int64 v4; // rcx

  v2 = (struct _LIST_ENTRY *)((char *)a1 + 600);
  while ( a2 != v2 )
  {
    p_Blink = &a2[-52].Blink;
    v4 = 24LL;
    if ( a2 != (struct _LIST_ENTRY *)824 )
      v4 = (__int64)&a2[-54];
    if ( *(int *)v4 >= 0 )
    {
      p_Blink[75] = (struct _LIST_ENTRY *)((char *)p_Blink[75] + 1);
      return p_Blink;
    }
    a2 = a2->Flink;
  }
  return 0LL;
}
