/*
 * XREFs of ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800377B0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800376E4 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037720 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectCleanup @ 0x180037980 (CemRcObjectCleanup.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007EE08 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampClientPkgDestroy(struct _CEM_RC_OBJECT *a1)
{
  struct _HAM_PACKAGE *v2; // rbx
  char v3; // si
  _DWORD *v4; // rdx

  CemRcObjectCleanup();
  v2 = (struct _HAM_PACKAGE *)*((_QWORD *)a1 + 7);
  HampPkgAcquireLockExclusive(v2);
  v3 = 1;
  v4 = (_DWORD *)((char *)v2 + 340);
  if ( (*((_BYTE *)a1 + 64) & 1) != 0 )
    *v4 &= 0xFFFFFFFC;
  if ( (*((_BYTE *)a1 + 64) & 2) != 0 )
    *v4 &= ~4u;
  else
    v3 = 0;
  HampPkgReleaseLockExclusive(v2, (__int64)v4);
  if ( v3 )
    HampPkgNotifyDebugModeChanged(v2);
  CemRcObjectDereference(v2);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
