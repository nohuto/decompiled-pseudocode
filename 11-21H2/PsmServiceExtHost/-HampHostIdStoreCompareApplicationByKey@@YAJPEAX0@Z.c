/*
 * XREFs of ?HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z @ 0x18003CDD0
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180008790 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     <none>
 */

int __fastcall HampHostIdStoreCompareApplicationByKey(const wchar_t *a1, const wchar_t *a2)
{
  return _wcsicmp(a1, a2 + 44);
}
