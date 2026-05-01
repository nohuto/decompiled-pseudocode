/*
 * XREFs of ?HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18007C04C
 * Callers:
 *     ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18007BBB8 (-HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800398D0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostDynamicDepCleanup(struct _HAM_HOST_DYNAMIC_DEPENDENCY *a1)
{
  __int64 v1; // rbx
  bool v3; // zf
  __int64 v4; // rbx

  v1 = *((_QWORD *)a1 + 6);
  if ( v1 )
  {
    RmpAcquireGlobalLock();
    v3 = (*(_QWORD *)(v1 + 600))-- == 1LL;
    if ( v3 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v1 - 64));
    RmpReleaseGlobalLock();
  }
  v4 = *((_QWORD *)a1 + 7);
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v3 = (*(_QWORD *)(v4 + 600))-- == 1LL;
    if ( v3 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v4 - 64));
    RmpReleaseGlobalLock();
  }
}
