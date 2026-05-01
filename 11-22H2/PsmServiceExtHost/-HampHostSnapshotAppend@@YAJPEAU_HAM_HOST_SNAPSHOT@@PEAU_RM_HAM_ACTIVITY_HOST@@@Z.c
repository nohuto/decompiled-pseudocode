/*
 * XREFs of ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003EEB0
 * Callers:
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003EDE8 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampPkgPopulateHostSnapshot@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_HOST_SNAPSHOT@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18004D954 (-HampPkgPopulateHostSnapshot@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_HOST_SNAPSHOT@@PEAU_HAM_PROCESS_SNAP.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007F1E8 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F8E4 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180080E90 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 * Callees:
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180017754 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$RmpArrayGrow@U_HAM_TERMINATION_HOST_BLOCK@@@@YAJPEAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAKK@Z @ 0x18003EF4C (--$RmpArrayGrow@U_HAM_TERMINATION_HOST_BLOCK@@@@YAJPEAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAKK@Z.c)
 */

__int64 __fastcall HampHostSnapshotAppend(struct _HAM_HOST_SNAPSHOT *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  _QWORD *v6; // rbx

  v4 = RmpArrayGrow<_HAM_TERMINATION_HOST_BLOCK>(a1, (char *)a1 + 12, (unsigned int)(*((_DWORD *)a1 + 2) + 1));
  v5 = 0;
  if ( v4 < 0 )
  {
    return (unsigned int)v4;
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(*((_DWORD *)a1 + 2))++) = 0LL;
    v6 = (_QWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(*((_DWORD *)a1 + 2) - 1));
    RmpAcquireGlobalLock();
    *v6 = RmHamHostReference(a2);
    RmpReleaseGlobalLock();
    v6[1] = *((_QWORD *)a2 + 102);
  }
  return v5;
}
