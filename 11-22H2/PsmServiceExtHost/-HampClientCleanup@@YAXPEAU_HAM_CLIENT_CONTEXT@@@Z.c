/*
 * XREFs of ?HampClientCleanup@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180011CC0
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18004DE10 (-HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x180037A00 (CemRcObjectCleanup.c)
 */

void __fastcall HampClientCleanup(struct _HAM_CLIENT_CONTEXT *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  CemRcObjectCleanup();
  v2 = *((_QWORD *)a1 + 26);
  if ( v2 )
    TpReleaseTimer(v2);
  v3 = (void *)*((_QWORD *)a1 + 23);
  if ( v3 )
    NtClose(v3);
  v4 = (void *)*((_QWORD *)a1 + 24);
  if ( v4 )
    NtClose(v4);
  if ( (*((_BYTE *)a1 + 144) & 1) == 0 && (*((_DWORD *)a1 + 30) || *((_DWORD *)a1 + 31)) )
    NtDeleteWnfStateName((char *)a1 + 120);
}
