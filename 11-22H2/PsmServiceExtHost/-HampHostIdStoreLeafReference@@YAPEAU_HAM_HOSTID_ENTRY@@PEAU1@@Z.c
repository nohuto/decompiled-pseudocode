/*
 * XREFs of ?HampHostIdStoreLeafReference@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU1@@Z @ 0x18008035C
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180028B20 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     <none>
 */

struct _HAM_HOSTID_ENTRY *__fastcall HampHostIdStoreLeafReference(struct _HAM_HOSTID_ENTRY *a1)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  return a1;
}
