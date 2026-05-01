/*
 * XREFs of ?HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z @ 0x180010B40
 * Callers:
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x180016010 (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800167B0 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180028B20 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     memcmp_0 @ 0x180053496 (memcmp_0.c)
 */

int __fastcall HampHostIdStoreCompareUserByKey(void *Buf1, char *a2)
{
  ULONG v4; // edi
  ULONG v5; // eax

  v4 = RtlLengthSid(Buf1);
  v5 = RtlLengthSid(a2 + 88);
  if ( v4 < v5 )
    return -1;
  if ( v4 > v5 )
    return 1;
  return memcmp_0(Buf1, a2 + 88, v4);
}
