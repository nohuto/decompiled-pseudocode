/*
 * XREFs of CemRcObjectCleanup @ 0x180037A00
 * Callers:
 *     ?HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180011CC0 (-HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800377C0 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180037908 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800379A0 (-HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x1800380AC (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180042814 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18006CCB0 (-HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18007FC20 (-HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HamRcLeafCleanup@@YAXPEAU_HAM_RC_TREE_LEAF@@@Z @ 0x18007FC84 (-HamRcLeafCleanup@@YAXPEAU_HAM_RC_TREE_LEAF@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcObjectCleanup(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax

  if ( a1[3] )
    __int2c();
  if ( a1[2] != -1LL )
  {
    v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
    RtlAcquireSRWLockExclusive(v2 + 16);
    RtlRbRemoveNode(v2, a1);
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 1LL | (2LL * (*(_QWORD *)(v2 + 40) >> 1) - 2);
    RtlReleaseSRWLockExclusive(v2 + 16);
    result = RtlWakeAllConditionVariable(v2 + 32);
  }
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
