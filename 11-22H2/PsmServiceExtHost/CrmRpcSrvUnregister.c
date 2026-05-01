/*
 * XREFs of CrmRpcSrvUnregister @ 0x180012050
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvUnregister @ 0x180012074 (CrmSrvUnregister.c)
 */

__int64 __fastcall CrmRpcSrvUnregister(PVOID *a1)
{
  CrmSrvUnregister(*a1);
  *a1 = 0LL;
  return 0LL;
}
