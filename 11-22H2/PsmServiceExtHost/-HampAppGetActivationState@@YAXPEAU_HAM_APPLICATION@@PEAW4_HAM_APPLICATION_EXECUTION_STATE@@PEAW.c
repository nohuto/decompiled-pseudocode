/*
 * XREFs of ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800557AC
 * Callers:
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800722C0 (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 * Callees:
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180037680 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800376B8 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppGetActivationState(
        struct _HAM_APPLICATION *a1,
        enum _HAM_APPLICATION_EXECUTION_STATE *a2,
        enum _HAM_TERMINATE_REASON *a3)
{
  __int64 v6; // rdx

  HampAppAcquireLockShared(a1, (__int64)a2);
  *(_DWORD *)a2 = (*((_DWORD *)a1 + 155) >> 5) & 7;
  *(_DWORD *)a3 = *((unsigned __int16 *)a1 + 308);
  HampAppReleaseLockShared(a1, v6);
  if ( *(_DWORD *)a2 == 4 )
    *(_DWORD *)a2 = 3;
}
