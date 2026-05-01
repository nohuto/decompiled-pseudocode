/*
 * XREFs of CemRcObjectCleanup @ 0x180034B40
 * Callers:
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180034980 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180034A10 (-HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180034AB8 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003ED70 (-HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x180047118 (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800786F0 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18007B560 (-HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HamRcLeafCleanup@@YAXPEAU_HAM_RC_TREE_LEAF@@@Z @ 0x18007C5D4 (-HamRcLeafCleanup@@YAXPEAU_HAM_RC_TREE_LEAF@@@Z.c)
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
