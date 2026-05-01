/*
 * XREFs of ?HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x18001174C
 * Callers:
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x180016010 (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800167B0 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreReferenceHostIdCallback(struct _HAM_HOSTID_ENTRY *a1, _QWORD *a2)
{
  if ( *a2 != *((_QWORD *)a1 + 11) )
    return 1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  a2[1] = a1;
  return 0LL;
}
