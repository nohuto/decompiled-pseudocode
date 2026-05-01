/*
 * XREFs of ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180045ED8
 * Callers:
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180045BCC (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 * Callees:
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800101F4 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180010270 (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppGetActivationState(
        struct _HAM_APPLICATION *a1,
        enum _HAM_APPLICATION_EXECUTION_STATE *a2,
        enum _HAM_TERMINATE_REASON *a3)
{
  HampAppAcquireLockShared(a1);
  *(_DWORD *)a2 = (*((_DWORD *)a1 + 155) >> 5) & 7;
  *(_DWORD *)a3 = *((unsigned __int16 *)a1 + 308);
  HampAppReleaseLockShared(a1);
  if ( *(_DWORD *)a2 == 4 )
    *(_DWORD *)a2 = 3;
}
