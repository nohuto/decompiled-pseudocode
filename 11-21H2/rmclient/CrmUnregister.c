/*
 * XREFs of CrmUnregister @ 0x1800019B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x1800019E8 (-CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z.c)
 */

BOOLEAN __fastcall CrmUnregister(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  CrmpRegistrationContextCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
