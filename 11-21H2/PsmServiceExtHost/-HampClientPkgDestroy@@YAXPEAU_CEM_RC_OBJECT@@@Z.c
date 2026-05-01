/*
 * XREFs of ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800786F0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x180034B40 (CemRcObjectCleanup.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003ACDC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AD18 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180078B84 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampClientPkgDestroy(struct _HAM_PACKAGE **a1)
{
  __int64 v2; // rdx
  int v3; // eax
  char v4; // di

  CemRcObjectCleanup(a1);
  HampPkgAcquireLockExclusive(a1[7]);
  v3 = *((_DWORD *)a1 + 16);
  v4 = 1;
  if ( (v3 & 1) != 0 )
  {
    *((_DWORD *)a1[7] + 85) &= ~1u;
    v3 = *((_DWORD *)a1 + 16);
  }
  if ( (v3 & 2) != 0 )
    *((_DWORD *)a1[7] + 85) &= ~2u;
  else
    v4 = 0;
  HampPkgReleaseLockExclusive(a1[7], v2);
  if ( v4 )
    HampPkgNotifyDebugModeChanged(a1[7]);
  CemRcObjectDereference(a1[7]);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
