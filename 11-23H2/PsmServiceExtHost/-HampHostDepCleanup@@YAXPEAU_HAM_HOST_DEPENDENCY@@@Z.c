/*
 * XREFs of ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003D478
 * Callers:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003D430 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001C700 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempListEntryIsNull @ 0x18002AB9C (CempListEntryIsNull.c)
 *     ?HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x180080524 (-HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x1800806D8 (-HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostDepCleanup(struct _HAM_HOST_DEPENDENCY *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rbx

  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 2) )
  {
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *(_OWORD *)v2 = 0LL;
  }
  if ( *((_BYTE *)a1 + 40) )
  {
    if ( *((_BYTE *)a1 + 40) == 1 )
    {
      HampHostDynamicDepCleanup(a1);
    }
    else if ( (unsigned int)*((unsigned __int8 *)a1 + 40) - 3 <= 1 )
    {
      v5 = *((_QWORD *)a1 + 6);
      RmpAcquireGlobalLock();
      v6 = (*(_QWORD *)(v5 + 600))-- == 1LL;
      if ( v6 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)((v5 - 64) & -(__int64)(v5 != 0)));
      RmpReleaseGlobalLock();
      v7 = *((_QWORD *)a1 + 7);
      RmpAcquireGlobalLock();
      v6 = (*(_QWORD *)(v7 + 600))-- == 1LL;
      if ( v6 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)((v7 - 64) & -(__int64)(v7 != 0)));
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    HampHostProcessDepCleanup(a1);
  }
}
