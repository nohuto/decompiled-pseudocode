/*
 * XREFs of CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown @ 0x1800A1580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __fastcall CRM_REGISTRATION_CONTEXT_HANDLE_TYPE_rundown(char *P)
{
  return CrmSrvUnregister(P);
}
